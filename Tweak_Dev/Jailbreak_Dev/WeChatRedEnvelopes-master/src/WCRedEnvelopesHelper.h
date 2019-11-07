#import <CoreLocation/CoreLocation.h>

@interface WCPayInfoItem: NSObject
@property(nonatomic) unsigned int m_sceneId; // @synthesize m_sceneId;
@property(nonatomic) unsigned int m_uiPaySubType; // @synthesize m_uiPaySubType;
@property(retain, nonatomic) NSString *m_nsPayMsgID; // @synthesize m_nsPayMsgID;
- (NSString *)m_nsPayMsgID;
@end
@interface CMessageWrap : NSObject

@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @dynamic m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiAppMsgInnerType; // @dynamic m_uiAppMsgInnerType;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;

- (id)initWithMsgType:(long long)arg1 nsFromUsr:(id)arg2;
- (id)initWithMsgType:(long long)arg1;
- (WCPayInfoItem *)m_oWCPayInfoItem;
- (id)nativeUrl;
- (NSString *)wishingString;
- (BOOL)IsSendBySendMsg;
+ (BOOL)isSenderFromMsgWrap:(CMessageWrap *)msgWrap;

@end

@interface CBaseContact : NSObject

@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;

- (_Bool)isEqualToContact:(id)arg1;

@end

@interface CContact: CBaseContact

@end

@interface CContactMgr: NSObject

- (id)getContactByName:(id)arg1;
- (id)getSelfContact;

@end

@interface MMSessionInfo : NSObject

@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;

@end 

@interface BaseChatViewModel : NSObject

@property(readonly, nonatomic) CMessageWrap *messageWrap;
@property(retain, nonatomic) CBaseContact *chatContact; // @synthesize chatContact=m_chatContact;
//@property(nonatomic,weak) id <ChatViewModelDelegate> delegate; // @synthesize delegate=_delegate;

- (id)cellDataForRow:(unsigned long long)arg1;

@end

@interface BaseChatCellView : UIView

@property(readonly, nonatomic) BaseChatViewModel *viewModel; // @synthesize viewModel=m_viewModel;
//@property(nonatomic,weak) id <MessageNodeViewDelegate> delegate; // @synthesize delegate=m_delegate;

@end

@interface UIViewController (ModalView)

- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)DismissMyselfAnimated:(_Bool)arg1;

@end

@interface BaseMsgContentViewController : UIViewController
{
	UITableView *m_tableView;
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tapAppNodeView:(id)arg1;
- (CContact *)getChatContact;
- (void)AsyncSendMessage:(NSString *)message;

@end

@interface NewMainFrameViewController : UIViewController
{
	UITableView *m_tableView;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)openRedEnvelopes;

@end

@interface MMUINavigationController : UINavigationController

- (id)initWithRootViewController:(id)arg1;

@end

@interface UINavigationController (LogicController)

- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;

@end

@interface WCRedEnvelopesDetailInfo : NSObject

@property(nonatomic) long long m_lTotalNum; // @synthesize m_lTotalNum;
@property(nonatomic) long long m_lTotalAmount; // @synthesize m_lTotalAmount;
@property(nonatomic) long long m_lRecNum; // @synthesize m_lRecNum;
@property(nonatomic) long long m_lRecAmount; // @synthesize m_lRecAmount;
@property(nonatomic) long long m_lAmount; // @synthesize m_lAmount;

@end

@interface WCRedEnvelopesControlData : NSObject

@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; // @synthesize m_oSelectedMessageWrap;
@property(retain, nonatomic) WCRedEnvelopesDetailInfo *m_oWCRedEnvelopesDetailInfo; // @synthesize m_oWCRedEnvelopesDetailInfo;

@end

@interface WCRedEnvelopesReceiveControlLogic : NSObject

- (void)OnCommitWCRedEnvelopes:(NSString *)arg1;

@end

@interface WCRedEnvelopesReceiveHomeView : UIView

- (void)OnOpenRedEnvelopes;

@end

@protocol WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate <NSObject>

- (void)OnCommitWCRedEnvelopes:(NSString *)arg1;

@end

@interface WCRedEnvelopesRedEnvelopesDetailViewController : UIViewController

@end

@interface MMTableView: UITableView

- (void)setTableHeaderView:(UIView *)view;

@end

@interface MMUIViewController : UIViewController

@end

@interface MMTableViewInfo : NSObject

- (void)setDelegate:(id)delegate;
- (id)initWithFrame:(CGRect)frame style:(UITableViewStyle)style;
- (MMTableView *)getTableView;
- (void)clearAllSection;
- (void)addSection:(id)arg1;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (void)clearAllSection;

@end

@interface MMTableViewSectionInfo : NSObject

+ (id)sectionInfoDefaut;
- (void)addCell:(id)arg1;
- (void)setHeaderView:(UIView *)headerView;
- (void)setFHeaderHeight:(CGFloat)height;

@end

@interface MMTableViewUserInfo : NSObject

- (id)getUserInfoValueForKey:(id)arg1;
- (void)addUserInfoValue:(id)arg1 forKey:(id)arg2;

@end

@interface MMTableViewCellInfo : MMTableViewUserInfo

+ (id)editorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 margin:(double)arg4 tip:(id)arg5 focus:(_Bool)arg6 autoCorrect:(_Bool)arg7 text:(id)arg8 isFitIpadClassic:(_Bool)arg9;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;
+ (id)urlCellForTitle:(id)arg1 url:(id)arg2;

@end

@interface MMUICommonUtil : NSObject

+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 color:(id)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 accessibility:(id)arg5 useTemplateMode:(_Bool)arg6;

@end

@interface MMWebViewController : UIViewController

- (id)initWithURL:(NSURL *)url presentModal:(BOOL)presentModal extraInfo:(id)extraInfo delegate:(id)delegate;

@end

@interface MMServiceCenter 

+ (id)defaultCenter;
- (id)getService:(Class)aClass;

@end

@interface WCRedEnvelopesControlMgr: NSObject 

- (void)startReceiveRedEnvelopesLogic:(UIViewController *)controller Data:(WCRedEnvelopesControlData *)data;
- (unsigned int)startReceiveGreetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiveRedEnvelopesLogicByC2C:(id)arg1 Data:(id)arg2;

@end

@interface BaseMsgContentLogicController: NSObject

- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(int)arg3;
- (BaseMsgContentViewController *)getViewController;
- (void)setM_contact:(CContact *)contact;
- (void)setM_dicExtraInfo:(id)info;
- (void)onWillEnterRoom;
- (id)getMsgContentViewController;

@end

@interface MemberDataLogic: NSObject

- (id)initWithMemberList:(id)arg1 admin:(id)arg2;
- (CContact *)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (unsigned long long)getTotalCount;

@end

@protocol ContactsDataLogicDelegate <NSObject>
- (_Bool)onFilterContactCandidate:(CContact *)arg1;
- (void)onContactsDataChange;

@optional
- (void)onContactAsynSearchSectionResultChanged:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (void)onContactsDataNeedChange;
@end

@interface ContactsDataLogic: NSObject

- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(_Bool)arg3 extendChatRoom:(_Bool)arg4;
- (id)getChatRoomContacts;

@end

@interface MemberListViewController: UIViewController

@end

@interface ChatRoomListViewController: MemberListViewController

- (void)setMemberLogic:(MemberDataLogic *)logic;

@end

@interface LLFilterChatRoomController: ChatRoomListViewController

@property (nonatomic, strong) NSMutableDictionary *filterRoomDic; //过滤群组字典
@property (nonatomic, copy) void (^onConfirmSelectFilterRoom)(NSMutableDictionary *filterRoomDic);

- (void)setNavigationBar;
- (void)commonInit;

@end

@interface CAppViewControllerManager: NSObject

+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)topViewControllerOfMainWindow;
+ (id)topMostController;
+ (id)getCurrentNavigationController;
+ (UITabBarController *)getTabBarController;
+ (CAppViewControllerManager *)getAppViewControllerManager;
+ (_Bool)hasEnterWechatMain;

- (NewMainFrameViewController *)getNewMainFrameViewController;

@end

@interface POIInfo : NSObject <NSCoding>

@property(retain, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end

@interface QMapView : UIView

@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;

@end

@protocol MMPickLocationViewControllerDelegate

@optional
- (UIBarButtonItem *)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
@end

@interface MMPickLocationViewController : UIViewController

@property (nonatomic, weak) id <MMPickLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithScene:(unsigned int)arg1 OnlyUseUserLocation:(_Bool)arg2;
- (id)getCurrentPOIInfo;
- (void)reportOnDone;

@end

@interface MMMsgLogicManager: NSObject

- (void)PushLogicController:(id)logic navigationController:(id)navigation animated:(BOOL)animated;

@end

@interface CUtility : NSObject

+ (id)GetExcutablePath;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned int)genCurrentTime;
+ (unsigned int)genServerCurrentTime;

@end

@interface CMessageDB : NSObject

- (void)AddBackupMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 withTimeFixed:(_Bool)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (_Bool)InsertRevokeMessage:(id)arg1;
- (id)GetRevokeMessage:(long long)arg1;

@end

@interface CMessageMgr : NSObject

- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 Unique:(_Bool)arg5;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2;

@end

@interface RevokeMessage : NSObject

@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId;

@end

