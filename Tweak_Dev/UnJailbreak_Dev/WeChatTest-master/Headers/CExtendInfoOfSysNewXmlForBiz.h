//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapForBizExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "ISysNewXmlMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface CExtendInfoOfSysNewXmlForBiz : NSObject <IMessageWrapForBizExt, IMsgExtendOperation, ISysNewXmlMsgExtendOperation, NSCopying>
{
    NSMutableString *m_showContent;
    NSMutableString *m_sessionShowContent;
    NSString *m_newXmlType;
    long long m_msgInnerType;
    NSMutableArray *m_arrMembers;
    NSString *m_qrCode;
    NSString *m_url;
    _Bool m_hasParsedForDisplay;
    _Bool m_bNewInv;
    _Bool m_bNewApprove;
    _Bool m_bHasApprove;
    _Bool m_bNeedReloadSubView;
    _Bool m_bCanFold;
    _Bool m_bFolded;
    CMessageWrap *m_refMessageWrap;
    NSString *m_inviterName;
    NSMutableArray *m_arrInviteeMembers;
    NSString *m_nsInviteTickets;
    NSString *m_fromChatUserName;
    NSString *m_nsInviteReason;
    NSString *m_nsRevokeContent;
    NSMutableDictionary *_m_dicQuitRoomInfo;
}

+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(retain, nonatomic) NSMutableDictionary *m_dicQuitRoomInfo; // @synthesize m_dicQuitRoomInfo=_m_dicQuitRoomInfo;
@property(nonatomic) _Bool m_bFolded; // @synthesize m_bFolded;
@property(nonatomic) _Bool m_bCanFold; // @synthesize m_bCanFold;
@property(retain, nonatomic) NSString *m_nsRevokeContent; // @synthesize m_nsRevokeContent;
@property(retain, nonatomic) NSString *m_nsInviteReason; // @synthesize m_nsInviteReason;
@property(retain, nonatomic) NSString *m_fromChatUserName; // @synthesize m_fromChatUserName;
@property(nonatomic) _Bool m_bNeedReloadSubView; // @synthesize m_bNeedReloadSubView;
@property(nonatomic) _Bool m_bHasApprove; // @synthesize m_bHasApprove;
@property(nonatomic) _Bool m_bNewApprove; // @synthesize m_bNewApprove;
@property(nonatomic) _Bool m_bNewInv; // @synthesize m_bNewInv;
@property(retain, nonatomic) NSString *m_nsInviteTickets; // @synthesize m_nsInviteTickets;
@property(retain, nonatomic) NSMutableArray *m_arrInviteeMembers; // @synthesize m_arrInviteeMembers;
@property(retain, nonatomic) NSString *m_inviterName; // @synthesize m_inviterName;
@property(nonatomic) long long m_msgInnerType; // @synthesize m_msgInnerType;
@property(retain, nonatomic) NSString *m_newXmlType; // @synthesize m_newXmlType;
@property(retain, nonatomic) NSString *m_sessionShowContent; // @synthesize m_sessionShowContent;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_qrCode; // @synthesize m_qrCode;
@property(retain, nonatomic) NSMutableArray *m_arrMembers; // @synthesize m_arrMembers;
@property(retain, nonatomic) NSString *m_showContent; // @synthesize m_showContent;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (void).cxx_destruct;
- (void)parseAAUnpayNotifyNewXmlMsg;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)parseTemplateContentNode:(struct XmlReaderNode_t *)arg1;
- (void)parseTemplateNewXmlMsg:(struct XmlReaderNode_t *)arg1;
- (void)parseCommonNewXmlMsg:(struct XmlReaderNode_t *)arg1;
- (id)GetDisplaySessionContent;
- (id)GetDisplayContent;
- (void)ChangeForDisplay;
- (void)ChangeForDisplayAnyhow;
- (struct XmlReaderNode_t *)parseNextSibling:(struct XmlReaderNode_t *)arg1;
- (struct XmlReaderNode_t *)parseFirstChild:(struct XmlReaderNode_t *)arg1;
- (void)parseLinkNode:(struct XmlReaderNode_t *)arg1;
- (void)parseTextNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isChatroomMuteExptScene:(id)arg1;
- (_Bool)isEditRevokeContentScene:(id)arg1;
- (_Bool)isProfileScene:(id)arg1;
- (_Bool)isApproveToInviterScene:(id)arg1;
- (_Bool)isApproveScene:(id)arg1;
- (_Bool)isInviterScene:(id)arg1;
- (_Bool)isWebviewScene:(id)arg1;
- (_Bool)isInvitationScene:(id)arg1;
- (_Bool)isQRCodeScene:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

