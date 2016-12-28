//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseOfflinePayViewController.h"

#import "ANXOfflinePayApplyKeyServiceDelegate.h"
#import "ANXOfflinePayIdentityVerifyServiceDelegate.h"
#import "ANXPayOfflinePayModelDelegate.h"
#import "UIAlertViewDelegate.h"

@class ANXOfflinePayApplyKeyService, ANXOfflinePayIdentityVerifyService, ANXPayOfflinePayModel, ANXSecurityStoreData, NSString, NSTimer, UIImageView, UILabel, UIScrollView, UIView;

@interface ANXPayOfflinePayViewController : ANXBaseOfflinePayViewController <ANXPayOfflinePayModelDelegate, ANXOfflinePayIdentityVerifyServiceDelegate, ANXOfflinePayApplyKeyServiceDelegate, UIAlertViewDelegate>
{
    ANXSecurityStoreData *_offlineData;
    NSString *_supportedLines;
    ANXPayOfflinePayModel *_model;
    ANXOfflinePayIdentityVerifyService *_service;
    ANXOfflinePayApplyKeyService *_applyService;
    UIScrollView *_mainView;
    UIView *_contentView;
    UILabel *_usageTips;
    UIView *_codeContainer;
    UIImageView *_codeImage;
    UIImageView *_codeIcon;
    UIView *_codeTipsContainer;
    UIImageView *_refreshedImage;
    UILabel *_refreshTips;
    UILabel *_codeTips;
    UIView *_contentBackgroundView;
    UIImageView *_locationIcon;
    UILabel *_openLineTitle;
    UILabel *_openLine;
    NSTimer *_timer;
    NSTimer *_brightnessTimer;
}

@property(retain, nonatomic) NSTimer *brightnessTimer; // @synthesize brightnessTimer=_brightnessTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UILabel *openLine; // @synthesize openLine=_openLine;
@property(nonatomic) __weak UILabel *openLineTitle; // @synthesize openLineTitle=_openLineTitle;
@property(nonatomic) __weak UIImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
@property(nonatomic) __weak UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(nonatomic) __weak UILabel *codeTips; // @synthesize codeTips=_codeTips;
@property(nonatomic) __weak UILabel *refreshTips; // @synthesize refreshTips=_refreshTips;
@property(nonatomic) __weak UIImageView *refreshedImage; // @synthesize refreshedImage=_refreshedImage;
@property(nonatomic) __weak UIView *codeTipsContainer; // @synthesize codeTipsContainer=_codeTipsContainer;
@property(nonatomic) __weak UIImageView *codeIcon; // @synthesize codeIcon=_codeIcon;
@property(nonatomic) __weak UIImageView *codeImage; // @synthesize codeImage=_codeImage;
@property(nonatomic) __weak UIView *codeContainer; // @synthesize codeContainer=_codeContainer;
@property(nonatomic) __weak UILabel *usageTips; // @synthesize usageTips=_usageTips;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIScrollView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) ANXOfflinePayApplyKeyService *applyService; // @synthesize applyService=_applyService;
@property(retain, nonatomic) ANXOfflinePayIdentityVerifyService *service; // @synthesize service=_service;
@property(retain, nonatomic) ANXPayOfflinePayModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *supportedLines; // @synthesize supportedLines=_supportedLines;
@property(retain, nonatomic) ANXSecurityStoreData *offlineData; // @synthesize offlineData=_offlineData;
- (void).cxx_destruct;
- (void)didPressedNavigationRightBarButtonItem:(id)arg1;
- (void)model:(id)arg1 closedServiceExceptionWithCode:(id)arg2;
- (void)model:(id)arg1 closedServiceFailWithCode:(id)arg2 failTips:(id)arg3;
- (void)model:(id)arg1 isConnectedOverInternet:(_Bool)arg2;
- (void)service:(id)arg1 checkIdentityVerifyExceptionWithTips:(id)arg2;
- (void)service:(id)arg1 checkIdentityVerifyFailWithCode:(id)arg2 failTips:(id)arg3;
- (void)service:(id)arg1 checkIdentityVerifySuccess:(_Bool)arg2;
- (void)verifyIdentityCanceledFromService:(id)arg1;
- (void)service:(id)arg1 verifyIdentitySuccess:(_Bool)arg2;
- (void)service:(id)arg1 initIdentityVerifyExceptionWithTips:(id)arg2;
- (void)service:(id)arg1 initIdentityVerifyFailWithCode:(id)arg2 failTips:(id)arg3;
- (void)service:(id)arg1 initVerifyID:(id)arg2;
- (void)service:(id)arg1 isConnectedOverTheInternet:(_Bool)arg2;
- (void)service:(id)arg1 applyKeyIsConnectedOverTheInternet:(_Bool)arg2;
- (void)service:(id)arg1 applyKeyFailWithCode:(id)arg2 failTips:(id)arg3;
- (void)service:(id)arg1 applyKeyExceptionWithTips:(id)arg2;
- (void)service:(id)arg1 applyKeyInfo:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)didCheckedService:(id)arg1;
- (void)didApplyKey:(id)arg1;
- (void)didCaptureSreen:(id)arg1;
- (void)onBrightnessChange:(id)arg1;
- (void)resetBrightness:(_Bool)arg1;
- (void)generateCode;
- (void)refreshCode:(id)arg1;
- (void)fireTime;
- (void)configureNavigationItem;
- (void)initializeConstraints;
- (void)initializeSetup;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

