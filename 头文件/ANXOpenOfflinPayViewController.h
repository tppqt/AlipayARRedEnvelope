//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseOfflinePayViewController.h"

#import "ANXOfflinePayIdentityVerifyServiceDelegate.h"
#import "TTTAttributedLabelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ANXApplyServiceRequest, ANXApplyServiceResponse, ANXOfflinePayIdentityVerifyService, APButton, APTableView, NSString, UIImageView;

@interface ANXOpenOfflinPayViewController : ANXBaseOfflinePayViewController <UITableViewDataSource, UITableViewDelegate, ANXOfflinePayIdentityVerifyServiceDelegate, UIAlertViewDelegate, TTTAttributedLabelDelegate>
{
    _Bool _needOpenPcreditPay;
    _Bool _identityVerified;
    _Bool _shouldShowTips;
    NSString *_pcreditpaySchema;
    NSString *_supportedLines;
    NSString *_zmxyAgreementUrl;
    NSString *_serviceAgreementUrl;
    ANXApplyServiceRequest *_request;
    ANXApplyServiceResponse *_response;
    NSString *_bizID;
    NSString *_supportLineTitle;
    NSString *_supportLineContent;
    APTableView *_mainTableView;
    UIImageView *_tableHeader;
    APButton *_loadingButton;
    ANXOfflinePayIdentityVerifyService *_service;
}

@property(retain, nonatomic) ANXOfflinePayIdentityVerifyService *service; // @synthesize service=_service;
@property(retain, nonatomic) APButton *loadingButton; // @synthesize loadingButton=_loadingButton;
@property(retain, nonatomic) UIImageView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(nonatomic) __weak APTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) _Bool shouldShowTips; // @synthesize shouldShowTips=_shouldShowTips;
@property(retain, nonatomic) NSString *supportLineContent; // @synthesize supportLineContent=_supportLineContent;
@property(retain, nonatomic) NSString *supportLineTitle; // @synthesize supportLineTitle=_supportLineTitle;
@property(nonatomic) _Bool identityVerified; // @synthesize identityVerified=_identityVerified;
@property(retain, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
@property(retain, nonatomic) ANXApplyServiceResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) ANXApplyServiceRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *serviceAgreementUrl; // @synthesize serviceAgreementUrl=_serviceAgreementUrl;
@property(retain, nonatomic) NSString *zmxyAgreementUrl; // @synthesize zmxyAgreementUrl=_zmxyAgreementUrl;
@property(retain, nonatomic) NSString *supportedLines; // @synthesize supportedLines=_supportedLines;
@property(retain, nonatomic) NSString *pcreditpaySchema; // @synthesize pcreditpaySchema=_pcreditpaySchema;
@property(nonatomic) _Bool needOpenPcreditPay; // @synthesize needOpenPcreditPay=_needOpenPcreditPay;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)verifyIdentityCanceledFromService:(id)arg1;
- (void)service:(id)arg1 verifyIdentitySuccess:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didPressedNavigationRightBarButtonItem:(id)arg1;
- (void)didPressedOpenServiceButton:(id)arg1;
- (void)configureOpenAgreementCell:(id)arg1;
- (void)configureOpenButtonCell:(id)arg1;
- (void)configureSupportLineLinesCell:(id)arg1;
- (void)configureSupportLineTitleCell:(id)arg1;
- (void)dealWithException:(id)arg1;
- (void)dealWithFailureResponse;
- (void)dealWithSuccessResponse;
- (void)postRequest;
- (_Bool)shouldAutoShowTips;
- (id)openAgreementTips;
- (id)openButtonTitle;
- (void)configureNavigationItem;
- (void)initializeConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

