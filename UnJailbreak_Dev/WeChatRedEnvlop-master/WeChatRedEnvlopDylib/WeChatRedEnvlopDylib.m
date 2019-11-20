//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  WeChatRedEnvlopDylib.m
//  WeChatRedEnvlopDylib
//
//  Created by allen on 2017/8/3.
//  Copyright (c) 2017年 allen. All rights reserved.
//

#import "WeChatRedEnvlopDylib.h"
#import "CaptainHook.h"
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import "WeChatRedEnvelop.h"
#import "WBRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"

void initCycriptServer(){
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
        CYListenServer(6666);
    }];
}

static __attribute__((constructor)) void entry(){
    NSLog(@"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍");
    
    initCycriptServer();
}

/******************************************微信修改运动步数**********************************************************/
#define SAVESETTINGS(key, value, fileName) { \
NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES); \
NSString *docDir = [paths objectAtIndex:0]; \
if (!docDir){ return;} \
NSMutableDictionary *dict = [NSMutableDictionary dictionary]; \
NSString *path = [docDir stringByAppendingPathComponent:fileName]; \
[dict setObject:value forKey:key]; \
[dict writeToFile:path atomically:YES]; \
}

static int StepCount = 6666;
static NSString *WeRunStepKey = @"WeRunStepKey";
static NSString *WeRunSettingFile = @"WeRunSettingFile.txt";
static NSString *HBPluginTypeKey = @"HBPluginType";
static NSString *HBPluginSettingFile = @"HBPluginSettingFile.txt";

//这里只是修改微信运动的步数，步数的设置放在放在抢红包功能（普通消息处理）里面
CHDeclareClass(WCDeviceStepObject)
CHMethod0(unsigned int, WCDeviceStepObject, m7StepCount) {
    NSString *docDir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithContentsOfFile:[docDir stringByAppendingPathComponent:WeRunSettingFile]];
    if (!dic){ return StepCount;}
    int value = ((NSNumber *)dic[WeRunStepKey]).intValue;
    if (value < 0) {
        return CHSuper(0, WCDeviceStepObject, m7StepCount);
    }
    return value;
}

CHDeclareClass(WCRedEnvelopesLogicMgr)

CHOptimizedMethod(2, self, void, WCRedEnvelopesLogicMgr, OnWCToHongbaoCommonResponse, HongBaoRes *, arg1, Request, id, arg2) {
    CHSuper(2, WCRedEnvelopesLogicMgr, OnWCToHongbaoCommonResponse, arg1, Request, arg2);
    NSDictionary *responseDict = [[[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding] JSONDictionary];
    if ([responseDict[@"receiveStatus"] integerValue] == 2) { return; }
    if ([responseDict[@"hbStatus"] integerValue] == 4) { return; }
    if (!responseDict[@"timingIdentifier"]) { return; }
    
    WeChatRedEnvelopParam *mgrParams = [[WBRedEnvelopParamQueue sharedQueue] dequeue];
    mgrParams.timingIdentifier = responseDict[@"timingIdentifier"];
    WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
    [logicMgr OpenRedEnvelopesRequest:mgrParams.toParams];
    
}



/******************************************微信自动抢红包**********************************************************/
static int const kCloseRedEnvPlugin = 0;//关闭红包插件
static int const kOpenRedEnvPlugin = 1;//打开红包插件
static int const kCloseRedEnvPluginForMyself = 2;//不抢自己的红包
static int const kCloseRedEnvPluginForMyselfFromChatroom = 3;//不抢群里自己发的红包
static int HBPluginType = 0;

CHDeclareClass(CMessageMgr);


CHOptimizedMethod(1, self, void, CMessageMgr, onRevokeMsg, CMessageWrap *, arg1){
    
    if ([arg1.m_nsContent rangeOfString:@"<session>"].location == NSNotFound) { return; }
    if ([arg1.m_nsContent rangeOfString:@"<replacemsg>"].location == NSNotFound) { return; }
    
    NSString *(^parseSession)() = ^NSString *() {
        NSUInteger startIndex = [arg1.m_nsContent rangeOfString:@"<session>"].location + @"<session>".length;
        NSUInteger endIndex = [arg1.m_nsContent rangeOfString:@"</session>"].location;
        NSRange range = NSMakeRange(startIndex, endIndex - startIndex);
        return [arg1.m_nsContent substringWithRange:range];
    };
    
    NSString *(^parseSenderName)() = ^NSString *() {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<!\\[CDATA\\[(.*?)撤回了一条消息\\]\\]>" options:NSRegularExpressionCaseInsensitive error:nil];
        
        NSRange range = NSMakeRange(0, arg1.m_nsContent.length);
        NSTextCheckingResult *result = [regex matchesInString:arg1.m_nsContent options:0 range:range].firstObject;
        if (result.numberOfRanges < 2) { return nil; }
        
        return [arg1.m_nsContent substringWithRange:[result rangeAtIndex:1]];
    };
    
    CMessageWrap *msgWrap = [[objc_getClass("CMessageWrap") alloc] initWithMsgType:0x2710];
    BOOL isSender = [objc_getClass("CMessageWrap") isSenderFromMsgWrap:arg1];
    
    NSString *sendContent;
    if (isSender) {
        [msgWrap setM_nsFromUsr:arg1.m_nsToUsr];
        [msgWrap setM_nsToUsr:arg1.m_nsFromUsr];
        sendContent = @"你撤回一条消息";
    } else {
        [msgWrap setM_nsToUsr:arg1.m_nsToUsr];
        [msgWrap setM_nsFromUsr:arg1.m_nsFromUsr];
        
        NSString *name = parseSenderName();
        sendContent = [NSString stringWithFormat:@"拦截 %@ 的一条撤回消息", name ? name : arg1.m_nsFromUsr];
    }
    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:sendContent];
    [msgWrap setM_uiCreateTime:[arg1 m_uiCreateTime]];
    
    [self AddLocalMsg:parseSession() MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
}




CHMethod2(void, CMessageMgr, AsyncOnAddMsg, id, arg1, MsgWrap, CMessageWrap *, arg2) {
    CHSuper2(CMessageMgr, AsyncOnAddMsg, arg1, MsgWrap, arg2);
    Ivar uiMessageTypeIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_uiMessageType");
    ptrdiff_t offset = ivar_getOffset(uiMessageTypeIvar);
    unsigned char *stuffBytes = (unsigned char *)(__bridge void *)arg2;
    NSUInteger m_uiMessageType = * ((NSUInteger *)(stuffBytes + offset));
    
    Ivar nsFromUsrIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_nsFromUsr");
    id m_nsFromUsr = object_getIvar(arg2, nsFromUsrIvar);
    
    Ivar nsContentIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_nsContent");
    id m_nsContent = object_getIvar(arg2, nsContentIvar);
    
    
    
    NSString *fromUser = arg2.m_nsFromUsr ;
    if ([fromUser hasSuffix:@"@chatroom"]) {
        NSLog(@"chatroom found");
        NSString *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).lastObject;
        NSString *plistPath = [path stringByAppendingPathComponent:@"data.plist"];
        NSMutableArray *arrayM = [NSMutableArray array];
        NSArray *storArray = [NSArray arrayWithContentsOfFile:plistPath];
        [arrayM addObjectsFromArray:storArray];
        if (![arrayM containsObject:fromUser]){
            [arrayM addObject:fromUser];
            NSLog(@"存储数据");
            NSLog(@"arrayM ==== %@",arrayM);
            [arrayM writeToFile:plistPath atomically:YES];
        }
    }
    
    
    
    
    
    
    switch(m_uiMessageType) {
        case 1://普通消息，打开或者关闭插件功能
        {
            //微信的服务中心
            Method methodMMServiceCenter = class_getClassMethod(objc_getClass("MMServiceCenter"), @selector(defaultCenter));
            IMP impMMSC = method_getImplementation(methodMMServiceCenter);
            id MMServiceCenter = impMMSC(objc_getClass("MMServiceCenter"), @selector(defaultCenter));
            //通讯录管理器
            id contactManager = ((id (*)(id, SEL, Class))objc_msgSend)(MMServiceCenter, @selector(getService:),objc_getClass("CContactMgr"));
            id selfContact = objc_msgSend(contactManager, @selector(getSelfContact));
            
            Ivar nsUsrNameIvar = class_getInstanceVariable([selfContact class], "m_nsUsrName");
            id m_nsUsrName = object_getIvar(selfContact, nsUsrNameIvar);
            BOOL isMesasgeFromMe = NO;
            if ([m_nsFromUsr isEqualToString:m_nsUsrName]) {
                //发给自己的消息
                isMesasgeFromMe = YES;
            }
            
            if (isMesasgeFromMe)
            {
                if ([m_nsContent rangeOfString:@"打开红包插件"].location != NSNotFound)
                {
                    HBPluginType = kOpenRedEnvPlugin;
                }
                else if ([m_nsContent rangeOfString:@"关闭红包插件"].location != NSNotFound)
                {
                    HBPluginType = kCloseRedEnvPlugin;
                }
                else if ([m_nsContent rangeOfString:@"关闭抢自己红包"].location != NSNotFound)
                {
                    HBPluginType = kCloseRedEnvPluginForMyself;
                }
                else if ([m_nsContent rangeOfString:@"关闭抢自己群红包"].location != NSNotFound)
                {
                    HBPluginType = kCloseRedEnvPluginForMyselfFromChatroom;
                }else if ([m_nsContent rangeOfString:@"修改微信步数#"].location != NSNotFound)
                {
                    NSArray *array = [m_nsContent componentsSeparatedByString:@"#"];
                    if (array.count == 2) {
                        StepCount = ((NSNumber *)array[1]).intValue;
                    }
                } else if([m_nsContent rangeOfString:@"恢复微信步数"].location != NSNotFound) {
                    StepCount = -1;
                }
                //保存修改微信步数设置
                SAVESETTINGS(WeRunStepKey, [NSNumber numberWithInt:StepCount], WeRunSettingFile)
                //保存抢红包设置
                SAVESETTINGS(HBPluginTypeKey, [NSNumber numberWithInt:HBPluginType], HBPluginSettingFile);
            }
        }
            break;
        case 49://红包消息
        {
            NSString *docDir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
            NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithContentsOfFile:[docDir stringByAppendingPathComponent:HBPluginSettingFile]];
            if (dict){
                HBPluginType = ((NSNumber *)dict[HBPluginTypeKey]).intValue;
            }
            //微信的服务中心
            Method methodMMServiceCenter = class_getClassMethod(objc_getClass("MMServiceCenter"), @selector(defaultCenter));
            IMP impMMSC = method_getImplementation(methodMMServiceCenter);
            id MMServiceCenter = impMMSC(objc_getClass("MMServiceCenter"), @selector(defaultCenter));
            //红包控制器
            id logicMgr = ((id (*)(id, SEL, Class))objc_msgSend)(MMServiceCenter, @selector(getService:),objc_getClass("WCRedEnvelopesLogicMgr"));
            //通讯录管理器
            id contactManager = ((id (*)(id, SEL, Class))objc_msgSend)(MMServiceCenter, @selector(getService:),objc_getClass("CContactMgr"));
            
            Method methodGetSelfContact = class_getInstanceMethod(objc_getClass("CContactMgr"), @selector(getSelfContact));
            IMP impGS = method_getImplementation(methodGetSelfContact);
            id selfContact = impGS(contactManager, @selector(getSelfContact));
            
            Ivar nsUsrNameIvar = class_getInstanceVariable([selfContact class], "m_nsUsrName");
            id m_nsUsrName = object_getIvar(selfContact, nsUsrNameIvar);
            BOOL isMesasgeFromMe = NO;
            BOOL isChatroom = NO;
            if ([m_nsFromUsr isEqualToString:m_nsUsrName]) {
                isMesasgeFromMe = YES;
            }
            if ([m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound)
            {
                isChatroom = YES;
            }
            if (isMesasgeFromMe && kCloseRedEnvPluginForMyself == HBPluginType && !isChatroom) {
                //不抢自己的红包
                break;
            }
            else if(isMesasgeFromMe && kCloseRedEnvPluginForMyselfFromChatroom == HBPluginType && isChatroom)
            {
                //不抢群里自己的红包
                break;
            }
            
            if ([m_nsContent rangeOfString:@"wxpay://"].location != NSNotFound)
            {
                NSString *nativeUrl = m_nsContent;
                NSRange rangeStart = [m_nsContent rangeOfString:@"wxpay://c2cbizmessagehandler/hongbao"];
                if (rangeStart.location != NSNotFound)
                {
                    NSUInteger locationStart = rangeStart.location;
                    nativeUrl = [nativeUrl substringFromIndex:locationStart];
                }
                
                NSRange rangeEnd = [nativeUrl rangeOfString:@"]]"];
                if (rangeEnd.location != NSNotFound)
                {
                    NSUInteger locationEnd = rangeEnd.location;
                    nativeUrl = [nativeUrl substringToIndex:locationEnd];
                }
                
                NSString *naUrl = [nativeUrl substringFromIndex:[@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length]];
                
                NSArray *parameterPairs =[naUrl componentsSeparatedByString:@"&"];
                
                NSMutableDictionary *parameters = [NSMutableDictionary dictionaryWithCapacity:[parameterPairs count]];
                for (NSString *currentPair in parameterPairs) {
                    NSRange range = [currentPair rangeOfString:@"="];
                    if(range.location == NSNotFound)
                        continue;
                    NSString *key = [currentPair substringToIndex:range.location];
                    NSString *value =[currentPair substringFromIndex:range.location + 1];
                    [parameters setObject:value forKey:key];
                }
                
                //红包参数
                NSMutableDictionary *params = [@{} mutableCopy];
                
                [params setObject:parameters[@"msgtype"]?:@"null" forKey:@"msgType"];
                [params setObject:parameters[@"sendid"]?:@"null" forKey:@"sendId"];
                [params setObject:parameters[@"channelid"]?:@"null" forKey:@"channelId"];
                
                id getContactDisplayName = objc_msgSend(selfContact, @selector(getContactDisplayName));
                id m_nsHeadImgUrl = objc_msgSend(selfContact, @selector(m_nsHeadImgUrl));
                
                [params setObject:getContactDisplayName forKey:@"nickName"];
                [params setObject:m_nsHeadImgUrl forKey:@"headImg"];
                [params setObject:[NSString stringWithFormat:@"%@", nativeUrl]?:@"null" forKey:@"nativeUrl"];
                [params setObject:m_nsFromUsr?:@"null" forKey:@"sessionUserName"];
                
                
                WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] initWithDictionary:params];
                [[WBRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
                
                
                if (kCloseRedEnvPlugin != HBPluginType) {
                    
                    //自动抢红包
                    WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
                    [logicMgr ReceiverQueryRedEnvelopesRequest:params];
                    
                    
                }
                return;
            }
            
            break;
        }
        default:
            break;
    }
}

CHOptimizedMethod(2, self, void, CMessageMgr, AddMsg, id, arg1, MsgWrap, CMessageWrap *, wrap){
    int type = wrap.m_uiMessageType;
    NSString *knFromUser = wrap.m_nsFromUsr;
    NSString *knToUsr = wrap.m_nsToUsr;
    NSString *knContent = wrap.m_nsContent;
    NSString *knSource = wrap.m_nsMsgSource;
    CContactMgr *contactManager = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("CContactMgr") class]];
    CContact *selfContact = [contactManager getSelfContact];
    if (type == 1){
        if ([knFromUser isEqualToString:selfContact.m_nsUsrName]) {
            if ([knToUsr hasSuffix:@"@chatroom"]) {
                NSLog(@"selfContact ==== %@",selfContact);
                if( knSource == nil){
                    NSString *aaa = [selfContact.m_nsUsrName stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]; NSLog(@"length=%lu,%@",(unsigned long)aaa.length,aaa);
                    NSArray *result = (NSArray *)[objc_getClass("CContact") getChatRoomMemberWithoutMyself:knToUsr];
                    if ([knContent hasPrefix:@"#所有人"]){
                        // 前缀要求
                        NSString *subStr = [knContent substringFromIndex:4];
                        NSMutableString *string = [NSMutableString string];
                        [result enumerateObjectsUsingBlock:^(CContact *obj, NSUInteger idx, BOOL * _Nonnull stop) {
                            [string appendFormat:@",%@",obj.m_nsUsrName];
                        }];
                        NSString *sourceString = [string substringFromIndex:1];
                        wrap.m_uiStatus = 3;
                        wrap.m_nsContent = subStr;
                        wrap.m_nsMsgSource = [NSString stringWithFormat:@"<msgsource><atuserlist>%@</atuserlist></msgsource>",sourceString];
                    }
                }
            }
        }
    }
    CHSuper(2, CMessageMgr,AddMsg,arg1,MsgWrap,wrap);
}



//所有被hook的类和函数放在这里的构造函数中
CHConstructor
{
    @autoreleasepool
    {
        CHLoadLateClass(WCDeviceStepObject);
        CHHook0(WCDeviceStepObject, m7StepCount);
        
        CHLoadLateClass(CMessageMgr);
        CHHook2(CMessageMgr, AsyncOnAddMsg, MsgWrap);
        CHHook(1, CMessageMgr, onRevokeMsg);
        CHHook(2, CMessageMgr, AddMsg, MsgWrap);
        
        CHLoadLateClass(WCRedEnvelopesLogicMgr);
        CHHook(2, WCRedEnvelopesLogicMgr, OnWCToHongbaoCommonResponse, Request);
        
    }
}

