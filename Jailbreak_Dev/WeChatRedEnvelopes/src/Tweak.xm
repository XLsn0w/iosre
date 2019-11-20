#import "WCRedEnvelopesHelper.h"
#import "LLRedEnvelopesMgr.h"
#import "LLSettingEntryController.h"
#import <AVFoundation/AVFoundation.h>
%hook WCDeviceStepObject

- (unsigned long)m7StepCount{
	if([LLRedEnvelopesMgr shared].isOpenSportHelper){
		return [[LLRedEnvelopesMgr shared] getSportStepCount]; // max value is 98800
	} else {
		return %orig;
	}
}

%end

%hook UINavigationController

- (void)PushViewController:(UIViewController *)controller animated:(BOOL)animated{
	if ([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [controller isMemberOfClass:NSClassFromString(@"WCRedEnvelopesRedEnvelopesDetailViewController")]) {
        WCRedEnvelopesReceiveControlLogic *redEnvelopeLogic = MSHookIvar<WCRedEnvelopesReceiveControlLogic *>(controller,"m_delegate");
		WCRedEnvelopesControlData *controlData = MSHookIvar<WCRedEnvelopesControlData *>(redEnvelopeLogic,"m_data");
		CMessageWrap *m_oSelectedMessageWrap = MSHookIvar<CMessageWrap *>(controlData,"m_oSelectedMessageWrap");
		if(![[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap]){
			%orig;
			return;
		}
    } else {
    	%orig;
    }
}

%end

%hook UIViewController 

- (void)presentViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(void (^)(void))completion{
	LLRedEnvelopesMgr *manager = [LLRedEnvelopesMgr shared];
	if (manager.isOpenRedEnvelopesHelper && [viewControllerToPresent isKindOfClass:NSClassFromString(@"MMUINavigationController")]){
		UINavigationController *navController = (UINavigationController *)viewControllerToPresent;
		if (navController.viewControllers.count > 0 && [navController.viewControllers[0] isKindOfClass:NSClassFromString(@"WCRedEnvelopesRedEnvelopesDetailViewController")]){
			WCRedEnvelopesReceiveControlLogic *redEnvelopeLogic = MSHookIvar<WCRedEnvelopesReceiveControlLogic *>(navController.viewControllers[0],"m_delegate");
			WCRedEnvelopesControlData *controlData = MSHookIvar<WCRedEnvelopesControlData *>(redEnvelopeLogic,"m_data");
			CMessageWrap *m_oSelectedMessageWrap = MSHookIvar<CMessageWrap *>(controlData,"m_oSelectedMessageWrap");
			if(![manager isHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap]){
				%orig;
				return;
			}
			[manager setIsHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap value:NO];
			//模态红包详情视图
			if([manager isMySendMsgWithMsgWrap:manager.msgWrap]){
				//领取的是自己发的红包,不自动回复和自动留言
				return;
			}
			if(manager.isOpenAutoReply && [self isMemberOfClass:%c(BaseMsgContentViewController)]){
				BaseMsgContentViewController *baseMsgVC = (BaseMsgContentViewController *)self;
				[baseMsgVC AsyncSendMessage:manager.autoReplyText];
			}
			if(manager.isOpenAutoLeaveMessage){
				[redEnvelopeLogic OnCommitWCRedEnvelopes:manager.autoLeaveMessageText];
			}
			return;
		}
	} 
	%orig;	
}

%end

%hook CMessageMgr

/*- (void)MainThreadNotifyToExt:(NSDictionary *)ext{*/
- (void)AsyncOnAddMsg:(NSString *)from MsgWrap:(id)msgWrap{
	%orig;
	if([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper){
		//CMessageWrap *msgWrap = ext[@"3"];
	    [[LLRedEnvelopesMgr shared] handleMessageWithMessageWrap:msgWrap isBackground:NO];
	}
}

- (void)onNewSyncShowPush:(NSDictionary *)message{
	%orig;
	if ([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [LLRedEnvelopesMgr shared].isOpenBackgroundMode && [UIApplication sharedApplication].applicationState == UIApplicationStateBackground){
		//app在后台运行
		CMessageWrap *msgWrap = (CMessageWrap *)message;
	    [[LLRedEnvelopesMgr shared] handleMessageWithMessageWrap:msgWrap isBackground:YES];
	}
}

%end

%hook WCRedEnvelopesReceiveControlLogic

- (void)OnOpenRedEnvelopesRequest:(id)request Error:(id)error{
	%orig;
	if(![LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper){
		return;
	}
	WCRedEnvelopesControlData *m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
	CMessageWrap *m_oSelectedMessageWrap = m_data.m_oSelectedMessageWrap;
	if([[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap]){
		WCRedEnvelopesDetailInfo *detailInfo = m_data.m_oWCRedEnvelopesDetailInfo;
  		[[LLRedEnvelopesMgr shared] successOpenRedEnvelopesHandler:detailInfo];
	}
}

%end

%hook WCRedEnvelopesReceiveHomeView

- (id)initWithFrame:(CGRect)frame andData:(id)data delegate:(id)delegate{
	WCRedEnvelopesReceiveHomeView *view = %orig;
	if([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:MSHookIvar<CMessageWrap *>(data,"m_oSelectedMessageWrap")]){
		dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)([LLRedEnvelopesMgr shared].openRedEnvelopesDelaySecond * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
			//打开红包
        	[view OnOpenRedEnvelopes];
    	});
	    view.hidden = YES;
	}
    return view;
}

%end 

%hook MMUIWindow 

- (void)addSubview:(UIView *)subView{
	if ([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [subView isKindOfClass:NSClassFromString(@"WCRedEnvelopesReceiveHomeView")]){
		WCRedEnvelopesReceiveControlLogic *redEnvelopeLogic = MSHookIvar<WCRedEnvelopesReceiveControlLogic *>(subView,"m_delegate");
		WCRedEnvelopesControlData *controlData = MSHookIvar<WCRedEnvelopesControlData *>(redEnvelopeLogic,"m_data");
		CMessageWrap *m_oSelectedMessageWrap = MSHookIvar<CMessageWrap *>(controlData,"m_oSelectedMessageWrap");
		if([[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap]){
			//隐藏弹出红包领取完成页面所在window
			((UIView *)self).hidden = YES;
		} else {
			%orig;
		}
	} else {
		%orig;
	}
}

/*
- (void)dealloc{
	if ([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [LLRedEnvelopesMgr shared].isHiddenRedEnvelopesReceiveView){
		[LLRedEnvelopesMgr shared].isHiddenRedEnvelopesReceiveView = NO;
	} else {
		%orig;
	}
}
*/

%end
/*
%hook NewMainFrameViewController


- (void)viewDidLoad{
	%orig;
	[LLRedEnvelopesMgr shared].openRedEnvelopesBlock = ^{
		if([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper && [LLRedEnvelopesMgr shared].haveNewRedEnvelopes){
			[LLRedEnvelopesMgr shared].haveNewRedEnvelopes = NO;
			[LLRedEnvelopesMgr shared].isHongBaoPush = YES;
			[[LLRedEnvelopesMgr shared] openRedEnvelopes:self];
		}
	};
}


- (void)reloadSessions{
	%orig;
	if([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper){
		//[LLRedEnvelopesMgr shared].openRedEnvelopesBlock();
		[[LLRedEnvelopesMgr shared] openRedEnvelopes];
	}
}

%end
*/

%hook WCRedEnvelopesControlLogic

- (void)startLoading{
	if ([LLRedEnvelopesMgr shared].isOpenRedEnvelopesHelper){
		WCRedEnvelopesControlData *controlData = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
		CMessageWrap *m_oSelectedMessageWrap = MSHookIvar<CMessageWrap *>(controlData,"m_oSelectedMessageWrap");
		if([[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:m_oSelectedMessageWrap]){
			//隐藏加载菊花
			//do nothing
			return;
		}	
	} 
	%orig;
}

%end

%hook NewSettingViewController

- (void)reloadTableData{
	%orig;
    MMTableViewCellInfo *configCell = [%c(MMTableViewCellInfo) normalCellForSel:@selector(configHandler) target:self title:@"微信助手设置" accessoryType:1];
    MMTableViewSectionInfo *sectionInfo = [%c(MMTableViewSectionInfo) sectionInfoDefaut];
    [sectionInfo addCell:configCell];
    MMTableViewInfo *tableViewInfo = [self valueForKey:@"m_tableViewInfo"];
    [tableViewInfo insertSection:sectionInfo At:0];
    [[tableViewInfo getTableView] reloadData];
}

%new
- (void)configHandler{
    LLSettingEntryController *settingEntryVC = [[LLSettingEntryController alloc] init];
    [((UIViewController *)self).navigationController PushViewController:settingEntryVC animated:YES];
}

%end

%hook MicroMessengerAppDelegate

- (void)applicationWillEnterForeground:(UIApplication *)application {
	%orig;
	[[LLRedEnvelopesMgr shared] reset];
}

- (void)applicationDidEnterBackground:(UIApplication *)application{
  %orig;
  [[LLRedEnvelopesMgr shared] enterBackgroundHandler];
}

%end

static const char selectedMessageWrapKey = '\0';

%hook WCRedEnvelopesReceiveControlLogic

- (void)startLogic{
	WCRedEnvelopesControlData *controlData = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
	CMessageWrap *m_oSelectedMessageWrap = MSHookIvar<CMessageWrap *>(controlData,"m_oSelectedMessageWrap");
	MMMsgLogicManager *logicMgr = [[NSClassFromString(@"MMServiceCenter") defaultCenter] getService:NSClassFromString(@"MMMsgLogicManager")];
	objc_setAssociatedObject(logicMgr,&selectedMessageWrapKey,m_oSelectedMessageWrap,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
	%orig;
}

%end

%hook MMMsgLogicManager

- (id)GetCurrentLogicController{
	CMessageWrap *m_oSelectedMessageWrap = objc_getAssociatedObject(self,&selectedMessageWrapKey);
	if(m_oSelectedMessageWrap){
		//id logic = [LLRedEnvelopesMgr shared].logicController;
		//[LLRedEnvelopesMgr shared].logicController = nil;
		BaseMsgContentLogicController *logicController = [[LLRedEnvelopesMgr shared] logicController:m_oSelectedMessageWrap];
		return logicController?:%orig;
	}
	return %orig;
}

%end

%hook BaseMsgContentViewController

- (void)tapAppNodeView:(id)cellView{
	if([cellView isKindOfClass:%c(BaseChatCellView)]){
		BaseChatCellView *chatCellView = (BaseChatCellView *)cellView;
		BaseChatViewModel *viewModel = [chatCellView viewModel];
		CMessageWrap *msgWrap = [viewModel messageWrap];
		if([[LLRedEnvelopesMgr shared] isHiddenRedEnvelopesReceiveView:msgWrap]){
			[[LLRedEnvelopesMgr shared] removeIsHiddenRedEnvelopesReceiveView:msgWrap];
		}
	}
	%orig;
}

%end
