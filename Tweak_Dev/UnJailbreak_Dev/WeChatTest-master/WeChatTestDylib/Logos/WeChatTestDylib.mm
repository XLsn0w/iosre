#line 1 "/Users/caony/Documents/Code/iOS/WeChatTest/WeChatTestDylib/Logos/WeChatTestDylib.xm"


#import <UIKit/UIKit.h>
#import "WeixinSwitchCell.h"
#import "WeChatHeader.h"
#import "WeChatRedEnvelopesQueue.h"

@interface MMTableViewInfo
    
- (long long)numberOfSectionsInTableView:(UITableView *)tableView;
    
    @end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class CContactMgr; @class BaseMsgContentViewController; @class WCRedEnvelopesReceiveControlLogic; @class NewSettingViewController; @class MMTableViewInfo; @class WCRedEnvelopesLogicMgr; @class MainFrameLogicController; @class MMServiceCenter; @class CMessageMgr; @class WCRedEnvelopesReceiveHomeView; @class WCBizUtil; @class BaseMsgContentLogicController; @class NSMutableDictionary; @class NewMainFrameViewController; 
static double (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static double _logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static id (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static id _logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static long long (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long _logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long (*_logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *); static long long _logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *); static void (*_logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UIScrollView *); static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UIScrollView *); static void (*_logos_orig$_ungrouped$MMTableViewInfo$scrollViewDidScroll$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewDidScroll$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncStart)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncStart(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncFinish)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncFinish(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, HongBaoRes *, id); static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, HongBaoRes *, id); static CContact * _logos_method$_ungrouped$CMessageMgr$qsh_getContactObj(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL); static NSString * _logos_method$_ungrouped$CMessageMgr$qsh_getNickName(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL); static NSString * _logos_method$_ungrouped$CMessageMgr$qsh_getHeadImg(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL); static NSMutableDictionary * _logos_method$_ungrouped$CMessageMgr$qsh_openRedEnvelopesRequestParamWithDictionary$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, NSDictionary *); static void (*_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel)(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$NewMainFrameViewController$updateSession$)(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$NewMainFrameViewController$updateSession$(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$NewMainFrameViewController$reloadSessions)(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewMainFrameViewController$reloadSessions(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$NewMainFrameViewController$updateUnReadCount)(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewMainFrameViewController$updateUnReadCount(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL); static long long (*_logos_orig$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL, id, long long); static long long _logos_method$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST, SEL, id, long long); static void (*_logos_orig$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$)(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL, unsigned int); static void _logos_method$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL, unsigned int); static unsigned int (*_logos_orig$_ungrouped$MainFrameLogicController$getSessionCount)(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL); static unsigned int _logos_method$_ungrouped$MainFrameLogicController$getSessionCount(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$MainFrameLogicController$onNewSyncBegin)(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$MainFrameLogicController$onNewSyncBegin(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST, SEL); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCRedEnvelopesLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCRedEnvelopesLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NewSettingViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NewSettingViewController"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$CContactMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("CContactMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCBizUtil(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCBizUtil"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NSMutableDictionary(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NSMutableDictionary"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMServiceCenter(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMServiceCenter"); } return _klass; }
#line 14 "/Users/caony/Documents/Code/iOS/WeChatTest/WeChatTestDylib/Logos/WeChatTestDylib.xm"


static double _logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath){
    id next = tableView.nextResponder.nextResponder;
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    if ((indexPath.section == sections - 1) && [next isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]) {
        return 44;
    }
    return _logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}

static id _logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath){
    id next = tableView.nextResponder.nextResponder;
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    if ((indexPath.section == sections - 1) && [next isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]) {
        WeixinSwitchCell *cell = [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([WeixinSwitchCell class])];
        if (!cell) {
            cell = [[WeixinSwitchCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:NSStringFromClass([WeixinSwitchCell class])];
        }
        tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
        if (indexPath.row == 0) {
            cell.textLabel.text = @"开启自动抢红包";
            cell.cellType = SettingCellTypeSwitch;
            cell.open = [WXUserDefault boolForKey:WXOpenSwitchKey];
        } else if (indexPath.row == 1) {
            cell.textLabel.text = @"抢红包延时(秒)";
            cell.cellType = SettingCellTypeTextField;
            cell.delayTime = [NSString stringWithFormat:@"%f",[WXUserDefault floatForKey:WXAutoOpenRedEnvelopesDelayTimeKey]];
        }
        cell.backgroundColor = [UIColor whiteColor];
        return cell;
    }
    return _logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}

static long long _logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, long long arg2){
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    id next = tableView.nextResponder.nextResponder;
    if (arg2 == sections - 1 && [next isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]) {
        return 2;
    }
    return _logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(self, _cmd, tableView, arg2);
}

static long long _logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView){
    return _logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(self, _cmd, tableView) + 1;
}

static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UIScrollView * scrollView){
    _logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(self, _cmd, scrollView);
    [MSHookIvar<UITableView *>(self,"_tableView") endEditing:YES];
}

static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewDidScroll$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$MMTableViewInfo$scrollViewDidScroll$(self, _cmd, arg1);
}





static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, _Bool arg2, _Bool arg3){
    
    _logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(self, _cmd, arg1, arg2, arg3);
}





static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, HongBaoRes * arg1, id arg2){
    _logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(self, _cmd, arg1, arg2);
    BOOL autoOpen = [WXUserDefault boolForKey:WXOpenSwitchKey];
    if (!autoOpen) {
        return;
    }

    NSLog(@"errorMsg:%@",arg1.baseResponse.errMsg.string);
    NSLog(@"ret:%d",arg1.baseResponse.ret);
    NSLog(@"iLen:%d",arg1.retText.iLen);
    NSLog(@"buffer:%@",arg1.retText.buffer);
    NSLog(@"cgiCmdid:%d",arg1.cgiCmdid);
    NSLog(@"arg1.errorMsg:%@",arg1.errorMsg);
    NSLog(@"arg1.platMsg:%@",arg1.platMsg);



    NSDictionary *responseDict = [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:(NSJSONReadingAllowFragments) error:nil];
    NSString *timingIdentifier = responseDict[@"timingIdentifier"];
    NSString *sendUserName = responseDict[@"sendUserName"];
    if (responseDict && timingIdentifier && arg1.cgiCmdid == 3 && [responseDict[@"receiveStatus"] integerValue] == 0 && sendUserName) {
        WeChatRedEnvelopesQueue *queue = [WeChatRedEnvelopesQueue sharedQueue];
        NSMutableDictionary *dict = [queue dequeue];
        [dict setObject:timingIdentifier forKey:@"timingIdentifier"];
        [dict setObject:sendUserName forKey:@"sessionUserName"];
        
        
        float delay = [WXUserDefault floatForKey:WXAutoOpenRedEnvelopesDelayTimeKey];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            WCRedEnvelopesLogicMgr *redEnvelopesMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
            [redEnvelopesMgr OpenRedEnvelopesRequest:dict];
        });
    }

}






static CContact * _logos_method$_ungrouped$CMessageMgr$qsh_getContactObj(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    MMServiceCenter *defaultCenter = [_logos_static_class_lookup$MMServiceCenter() defaultCenter];
    
    Class cls = [_logos_static_class_lookup$CContactMgr() class];
    
    CContactMgr  *service = [defaultCenter getService:cls];
    
    CContact  *contact =  [service getSelfContact];
    return contact;
}


static NSString * _logos_method$_ungrouped$CMessageMgr$qsh_getNickName(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    
    CContact  *contact = [self qsh_getContactObj];
    id displayName = [contact getContactDisplayName];
    
    return displayName;
}


static NSString * _logos_method$_ungrouped$CMessageMgr$qsh_getHeadImg(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    CContact  *contact = [self qsh_getContactObj];
    
    NSString *headImgUrl = [contact m_nsHeadImgUrl];
    return headImgUrl;
}


static NSMutableDictionary * _logos_method$_ungrouped$CMessageMgr$qsh_openRedEnvelopesRequestParamWithDictionary$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSDictionary * dict){
    
    NSMutableDictionary *url_dict = [_logos_static_class_lookup$NSMutableDictionary() dictionary];
    
    
    [url_dict setObject:@"1" forKey:@"msgType"];
    [url_dict setObject:@"0" forKey:@"agreeDuty"];
    [url_dict setObject:@"1" forKey:@"inWay"];
    
    
    NSString *sendid = [dict objectForKey:@"sendid"];
    if (sendid) {
        [url_dict setObject:sendid forKey:@"sendId"];
    }
    
    NSString *channelid = [dict objectForKey:@"channelid"];
    if (channelid) {
        [url_dict setObject:channelid forKey:@"channelId"];
    }
    
    NSString *nickName = [self qsh_getNickName];
    if (nickName) {
        [url_dict setObject:nickName forKey:@"nickName"];
    }
    
    NSString *headImgUrl = [self qsh_getHeadImg];
    if (headImgUrl) {
        [url_dict setObject:headImgUrl forKey:@"headImg"];
    }
    
    return url_dict;
}

static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self, _cmd, arg1);
}

static void _logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2){
    _logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(self, _cmd, arg1, arg2);
}

static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, CMessageWrap * messageWrap){

    
    BOOL autoOpen = [WXUserDefault boolForKey:WXOpenSwitchKey];
    if (!autoOpen) {
        _logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$(self, _cmd, messageWrap);
        return;
    }
    unsigned int type = MSHookIvar<unsigned int>(messageWrap,"m_uiMessageType");
    if (type == 49) {
        
        NSLog(@"messageWrap class:%@",[messageWrap class]);

        WCPayInfoItem *item = [messageWrap m_oWCPayInfoItem];

        NSString *m_c2cNativeUrl = [item m_c2cNativeUrl];

        NSUInteger length = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];

        NSString *query =  [m_c2cNativeUrl substringFromIndex:length];

        NSDictionary *result = [_logos_static_class_lookup$WCBizUtil() dictionaryWithDecodedComponets:query separator:@"&"];
        
        NSMutableDictionary *url_dict = [self qsh_openRedEnvelopesRequestParamWithDictionary:result];
        
        if (m_c2cNativeUrl) {
            [url_dict setObject:m_c2cNativeUrl forKey:@"nativeUrl"];
        }
        
        WeChatRedEnvelopesQueue *queue = [WeChatRedEnvelopesQueue sharedQueue];
        [queue inqueue:url_dict];

        
        WCRedEnvelopesLogicMgr *redEnvelopesMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
        [redEnvelopesMgr ReceiverQueryRedEnvelopesRequest:url_dict];
    }
}





static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(self, _cmd);
    













}





static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    
    _logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(self, _cmd);
    

































































































}





static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(self, _cmd, arg1);
}

static void _logos_method$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2){
    _logos_orig$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$(self, _cmd, arg1, arg2);
}





static void _logos_method$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel(self, _cmd);
}

static void _logos_method$_ungrouped$NewMainFrameViewController$updateSession$(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    

    _logos_orig$_ungrouped$NewMainFrameViewController$updateSession$(self, _cmd, arg1);
}

static void _logos_method$_ungrouped$NewMainFrameViewController$reloadSessions(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$NewMainFrameViewController$reloadSessions(self, _cmd);
}

static void _logos_method$_ungrouped$NewMainFrameViewController$updateUnReadCount(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$NewMainFrameViewController$updateUnReadCount(self, _cmd);
}

static long long _logos_method$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL NewMainFrameViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2){
    
    return _logos_orig$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$(self, _cmd, arg1, arg2);
}




static void _logos_method$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$(self, _cmd, arg1);
}

static void _logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncStart(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncStart(self, _cmd);
}

static void _logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncFinish(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    unsigned long long m_unreadCount = MSHookIvar<unsigned long long>(self,"m_unreadCount");
    
    _logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncFinish(self, _cmd);
}




static void _logos_method$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1){
    _logos_orig$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$(self, _cmd, arg1);
}

static unsigned int _logos_method$_ungrouped$MainFrameLogicController$getSessionCount(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    return _logos_orig$_ungrouped$MainFrameLogicController$getSessionCount(self, _cmd);
}

static void _logos_method$_ungrouped$MainFrameLogicController$onNewSyncBegin(_LOGOS_SELF_TYPE_NORMAL MainFrameLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    _logos_orig$_ungrouped$MainFrameLogicController$onNewSyncBegin(self, _cmd);
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$MMTableViewInfo = objc_getClass("MMTableViewInfo"); MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(scrollViewWillBeginDragging:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(scrollViewDidScroll:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$scrollViewDidScroll$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$scrollViewDidScroll$);Class _logos_class$_ungrouped$BaseMsgContentViewController = objc_getClass("BaseMsgContentViewController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(addMessageNode:layout:addMoreMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$);MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(updateMessageNodeStatus:), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$updateMessageNodeStatus$);MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(onNewSyncStart), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncStart, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncStart);MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(onNewSyncFinish), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$onNewSyncFinish, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$onNewSyncFinish);Class _logos_class$_ungrouped$WCRedEnvelopesLogicMgr = objc_getClass("WCRedEnvelopesLogicMgr"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesLogicMgr, @selector(OnWCToHongbaoCommonResponse:Request:), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$);Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); { char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(CContact *), strlen(@encode(CContact *))); i += strlen(@encode(CContact *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CMessageMgr, @selector(qsh_getContactObj), (IMP)&_logos_method$_ungrouped$CMessageMgr$qsh_getContactObj, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(NSString *), strlen(@encode(NSString *))); i += strlen(@encode(NSString *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CMessageMgr, @selector(qsh_getNickName), (IMP)&_logos_method$_ungrouped$CMessageMgr$qsh_getNickName, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(NSString *), strlen(@encode(NSString *))); i += strlen(@encode(NSString *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CMessageMgr, @selector(qsh_getHeadImg), (IMP)&_logos_method$_ungrouped$CMessageMgr$qsh_getHeadImg, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(NSMutableDictionary *), strlen(@encode(NSMutableDictionary *))); i += strlen(@encode(NSMutableDictionary *)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSDictionary *), strlen(@encode(NSDictionary *))); i += strlen(@encode(NSDictionary *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$CMessageMgr, @selector(qsh_openRedEnvelopesRequestParamWithDictionary:), (IMP)&_logos_method$_ungrouped$CMessageMgr$qsh_openRedEnvelopesRequestParamWithDictionary$, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(MainThreadNotifyToExt:), (IMP)&_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$);MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(AsyncOnAddMsg:MsgWrap:), (IMP)&_logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$);MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(onNewSyncAddMessage:), (IMP)&_logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$);Class _logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView = objc_getClass("WCRedEnvelopesReceiveHomeView"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView, @selector(OnOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes);Class _logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic = objc_getClass("WCRedEnvelopesReceiveControlLogic"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic, @selector(WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes);Class _logos_class$_ungrouped$BaseMsgContentLogicController = objc_getClass("BaseMsgContentLogicController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentLogicController, @selector(DidAddMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$);MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentLogicController, @selector(OnAddMsg:MsgWrap:), (IMP)&_logos_method$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentLogicController$OnAddMsg$MsgWrap$);Class _logos_class$_ungrouped$NewMainFrameViewController = objc_getClass("NewMainFrameViewController"); MSHookMessageEx(_logos_class$_ungrouped$NewMainFrameViewController, @selector(updateAllItemTimeLabel), (IMP)&_logos_method$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel, (IMP*)&_logos_orig$_ungrouped$NewMainFrameViewController$updateAllItemTimeLabel);MSHookMessageEx(_logos_class$_ungrouped$NewMainFrameViewController, @selector(updateSession:), (IMP)&_logos_method$_ungrouped$NewMainFrameViewController$updateSession$, (IMP*)&_logos_orig$_ungrouped$NewMainFrameViewController$updateSession$);MSHookMessageEx(_logos_class$_ungrouped$NewMainFrameViewController, @selector(reloadSessions), (IMP)&_logos_method$_ungrouped$NewMainFrameViewController$reloadSessions, (IMP*)&_logos_orig$_ungrouped$NewMainFrameViewController$reloadSessions);MSHookMessageEx(_logos_class$_ungrouped$NewMainFrameViewController, @selector(updateUnReadCount), (IMP)&_logos_method$_ungrouped$NewMainFrameViewController$updateUnReadCount, (IMP*)&_logos_orig$_ungrouped$NewMainFrameViewController$updateUnReadCount);MSHookMessageEx(_logos_class$_ungrouped$NewMainFrameViewController, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$NewMainFrameViewController$tableView$numberOfRowsInSection$);Class _logos_class$_ungrouped$MainFrameLogicController = objc_getClass("MainFrameLogicController"); MSHookMessageEx(_logos_class$_ungrouped$MainFrameLogicController, @selector(onSessionTotalUnreadCountChange:), (IMP)&_logos_method$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$, (IMP*)&_logos_orig$_ungrouped$MainFrameLogicController$onSessionTotalUnreadCountChange$);MSHookMessageEx(_logos_class$_ungrouped$MainFrameLogicController, @selector(getSessionCount), (IMP)&_logos_method$_ungrouped$MainFrameLogicController$getSessionCount, (IMP*)&_logos_orig$_ungrouped$MainFrameLogicController$getSessionCount);MSHookMessageEx(_logos_class$_ungrouped$MainFrameLogicController, @selector(onNewSyncBegin), (IMP)&_logos_method$_ungrouped$MainFrameLogicController$onNewSyncBegin, (IMP*)&_logos_orig$_ungrouped$MainFrameLogicController$onNewSyncBegin);} }
#line 434 "/Users/caony/Documents/Code/iOS/WeChatTest/WeChatTestDylib/Logos/WeChatTestDylib.xm"
