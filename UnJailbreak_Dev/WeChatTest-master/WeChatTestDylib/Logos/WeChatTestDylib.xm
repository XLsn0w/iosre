// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import "WeixinSwitchCell.h"
#import "WeChatHeader.h"
#import "WeChatRedEnvelopesQueue.h"

@interface MMTableViewInfo
    
- (long long)numberOfSectionsInTableView:(UITableView *)tableView;
    
@end

%hook MMTableViewInfo

- (double)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    id next = tableView.nextResponder.nextResponder;
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    if ((indexPath.section == sections - 1) && [next isKindOfClass:%c(NewSettingViewController)]) {
        return 44;
    }
    return %orig;
}

- (id)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    id next = tableView.nextResponder.nextResponder;
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    if ((indexPath.section == sections - 1) && [next isKindOfClass:%c(NewSettingViewController)]) {
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
    return %orig;
}

- (long long)tableView:(UITableView *)tableView numberOfRowsInSection:(long long)arg2{
    NSInteger sections = [self numberOfSectionsInTableView:tableView];
    id next = tableView.nextResponder.nextResponder;
    if (arg2 == sections - 1 && [next isKindOfClass:%c(NewSettingViewController)]) {
        return 2;
    }
    return %orig;
}

- (long long)numberOfSectionsInTableView:(UITableView *)tableView{
    return %orig + 1;
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView{
    %orig;
    [MSHookIvar<UITableView *>(self,"_tableView") endEditing:YES];
}

- (void)scrollViewDidScroll:(id)arg1{
    %orig;
}

%end

%hook BaseMsgContentViewController

- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3{
    
    %orig;
}

%end

%hook WCRedEnvelopesLogicMgr

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(id)arg2{
    %orig;
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
            WCRedEnvelopesLogicMgr *redEnvelopesMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
            [redEnvelopesMgr OpenRedEnvelopesRequest:dict];
        });
    }

}

%end

%hook  CMessageMgr

%new
- (CContact *)qsh_getContactObj{
    MMServiceCenter *defaultCenter = [%c(MMServiceCenter) defaultCenter];
    
    Class cls = [%c(CContactMgr) class];
    
    CContactMgr  *service = [defaultCenter getService:cls];
    
    CContact  *contact =  [service getSelfContact];
    return contact;
}

%new
- (NSString *)qsh_getNickName{
    
    CContact  *contact = [self qsh_getContactObj];
    id displayName = [contact getContactDisplayName];
    
    return displayName;
}

%new
- (NSString *)qsh_getHeadImg{
    CContact  *contact = [self qsh_getContactObj];
    
    NSString *headImgUrl = [contact m_nsHeadImgUrl];
    return headImgUrl;
}

%new
- (NSMutableDictionary *)qsh_openRedEnvelopesRequestParamWithDictionary:(NSDictionary *)dict{
    
    NSMutableDictionary *url_dict = [%c(NSMutableDictionary) dictionary];
    
    // 暂定固定值参数,需要多次调试确定是否会发生变化
    [url_dict setObject:@"1" forKey:@"msgType"];
    [url_dict setObject:@"0" forKey:@"agreeDuty"];
    [url_dict setObject:@"1" forKey:@"inWay"];
    
    // 获取
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

- (void)MainThreadNotifyToExt:(id)arg1{
    %orig;
}

- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2{
    %orig;
}

- (void)onNewSyncAddMessage:(CMessageWrap *)messageWrap{
//    %orig;
    
    BOOL autoOpen = [WXUserDefault boolForKey:WXOpenSwitchKey];
    if (!autoOpen) {
        %orig;
        return;
    }
    unsigned int type = MSHookIvar<unsigned int>(messageWrap,"m_uiMessageType");
    if (type == 49) {
        // 红包消息,开始拆红包
        NSLog(@"messageWrap class:%@",[messageWrap class]);

        WCPayInfoItem *item = [messageWrap m_oWCPayInfoItem];

        NSString *m_c2cNativeUrl = [item m_c2cNativeUrl];

        NSUInteger length = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];

        NSString *query =  [m_c2cNativeUrl substringFromIndex:length];

        NSDictionary *result = [%c(WCBizUtil) dictionaryWithDecodedComponets:query separator:@"&"];
        
        NSMutableDictionary *url_dict = [self qsh_openRedEnvelopesRequestParamWithDictionary:result];
        
        if (m_c2cNativeUrl) {
            [url_dict setObject:m_c2cNativeUrl forKey:@"nativeUrl"];
        }
        
        WeChatRedEnvelopesQueue *queue = [WeChatRedEnvelopesQueue sharedQueue];
        [queue inqueue:url_dict];

        // 拆红包的逻辑
        WCRedEnvelopesLogicMgr *redEnvelopesMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
        [redEnvelopesMgr ReceiverQueryRedEnvelopesRequest:url_dict];
    }
}

%end

%hook WCRedEnvelopesReceiveHomeView

- (void)OnOpenRedEnvelopes{
    %orig;
    /*
    // 拿到成员变量
    NSDictionary *dict = MSHookIvar<NSDictionary *>(self,"m_dicBaseInfo");
    // 打印字典
    NSArray *arr = [dict allKeys];
    for (int i = 0; i< arr.count; i++) {
        NSLog(@"%@:%@",arr[i],dict[arr[i]]);
    }
    
    WCRedEnvelopesReceiveControlLogic *delegate = MSHookIvar<id>(self,"m_delegate");
    [delegate WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes];

    NSLog(@"delegate class:%@",[delegate class]);
     */
}

%end

%hook WCRedEnvelopesReceiveControlLogic

- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes{
    
    %orig;
    /*
    WCRedEnvelopesControlData *m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
    
    NSLog(@"data class:%@",[m_data class]);
    
    
    CMessageWrap *messageWrap = MSHookIvar<CMessageWrap *>(m_data,"m_oSelectedMessageWrap");
    
    NSLog(@"messageWrap class:%@",[messageWrap class]);
    
    WCPayInfoItem *item = [messageWrap m_oWCPayInfoItem];
    
    NSString *url = [item m_c2cNativeUrl];
    
    NSUInteger length = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
    
    NSString *query =  [url substringFromIndex:length];
    
    NSDictionary *result = [%c(WCBizUtil) dictionaryWithDecodedComponets:query separator:@"&"];

    NSMutableDictionary *url_dict = [%c(NSMutableDictionary) dictionary];
    
    [url_dict setObject:@"1" forKey:@"msgType"];
    
    NSString *sendid = [result objectForKey:@"sendid"];
    
    [url_dict setObject:sendid forKey:@"sendid"];
    
    NSString *channelid = [result objectForKey:@"channelid"];
    
    [url_dict setObject:channelid forKey:@"channelid"];
    
    MMServiceCenter *defaultCenter = [%c(MMServiceCenter) defaultCenter];
    
    Class cls = [%c(CContactMgr) class];
    
     CContactMgr  *service = [defaultCenter getService:cls];
    
    CContact  *contact =  [service getSelfContact];

    id displayName = [contact getContactDisplayName];
    
    [url_dict setObject:displayName forKey:@"nickName"];

    NSString *headImgUrl = [contact m_nsHeadImgUrl];
    
    [url_dict setObject:headImgUrl forKey:@"headImg"];
    
//    CMessageWrap *wrap = MSHookIvar<CMessageWrap *>(m_data,"m_oSelectedMessageWrap");
    
    if (messageWrap) {
//        CMessageWrap *wrap2 = MSHookIvar<CMessageWrap *>(m_data,"m_oSelectedMessageWrap");
//        WCPayInfoItem *item2 = [wrap2 m_oWCPayInfoItem];
//        NSString *m_c2cNativeUrl = [item2 m_c2cNativeUrl];
        [url_dict setObject:url forKey:@"nativeUrl"];
    }
    
    Class logicCls = [%c(MMMsgLogicManager) class];
    MMMsgLogicManager *logicService = [defaultCenter getService:logicCls];
    
     WeixinContentLogicController *logicController = [logicService Ge%furrentLogicController];
    
    if (logicController) {
        CContact  *m_contact = [logicController m_contact];
        if (m_contact) {
            NSString *usrName = [m_contact m_nsUsrName];
            if (usrName) {
                [url_dict setObject:usrName forKey:@"sessionUserName"];
            }
        }
    }
    
     NSDictionary *baseInfo = [m_data m_structDicRedEnvelopesBaseInfo];

    NSString  *timingIdentifier = [baseInfo valueForKey:@"timingIdentifier"];

    if ([timingIdentifier length]) {
        [url_dict setObject:timingIdentifier forKey:@"timingIdentifier"];
    }

    Class payCls = [%c(WCPayLogicMgr) class];
    WCPayLogicMgr *payService = [defaultCenter getService:payCls];
    [payService setRealnameReportScene:(unsigned int)1003];

    id agree_duty = [baseInfo objectForKeyedSubscript:@"agree_duty"];
    
//    ./restore-symbol WeChat -o WeChat_block -j block_symbol.json
    [payService checkHongbaoOpenLicense:agree_duty acceptCallback:^(){
        WCRedEnvelopesLogicMgr *redEnvelopesMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
        [redEnvelopesMgr OpenRedEnvelopesRequest:url_dict];
    } denyCallback:^(){
        
    }];
    
    NSLog(@"url:%@",url);

    NSLog(@"\nresult:%@",result);
     */
}

%end


%hook BaseMsgContentLogicController
- (void)DidAddMsg:(id)arg1{
    %orig;
}

- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2{
    %orig;
}

%end

%hook NewMainFrameViewController

- (void)updateAllItemTimeLabel{
    %orig;
}

- (void)updateSession:(id)arg1{
    // 新消息手动清零,默认已读
//    [arg1 setValue:@(0) forKey:@"m_uUnReadCount"];
    %orig;
}

- (void)reloadSessions{
    %orig;
}

- (void)updateUnReadCount{
    %orig;
}

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2{
    // 静态分析找到MainFrameLogicController对象的获取方法,然后调用get
    return %orig;
}
%end

%hook BaseMsgContentViewController

- (void)updateMessageNodeStatus:(id)arg1{
    %orig;
}

- (void)onNewSyncStart{
    %orig;
}

- (void)onNewSyncFinish{
    unsigned long long m_unreadCount = MSHookIvar<unsigned long long>(self,"m_unreadCount");
    
    %orig;
}

%end

%hook MainFrameLogicController
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1{
    %orig;
}

- (unsigned int)getSessionCount{
    return %orig;
}

- (void)onNewSyncBegin{
    %orig;
}

%end

%hook MMNewSessionMgr
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2{
    %orig;
}

%end
