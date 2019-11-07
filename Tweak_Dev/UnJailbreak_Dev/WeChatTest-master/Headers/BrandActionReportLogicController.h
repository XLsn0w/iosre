//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class BrandServiceContinueLocationReportLogic, BrandServiceEnterConversationLogic, CContact;

@interface BrandActionReportLogicController : MMObject
{
    CContact *m_contact;
    BrandServiceEnterConversationLogic *m_enterConversationLogic;
    BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
}

@property(retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic; // @synthesize m_enterConversationLogic;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter; // @synthesize m_continueLocationReporter;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)showAlertView;
- (void)resetContinueReportLogic;
- (void)updateContact:(id)arg1;
- (void)creatContinueReportLogic;
- (void)createEnterReportLogic;
- (id)initWithContact:(id)arg1;
- (void)dealloc;

@end

