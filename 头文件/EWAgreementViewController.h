//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class EWAgreementLabel, NSDictionary, UIButton, UIImageView;

@interface EWAgreementViewController : DTViewController
{
    NSDictionary *_launchOptions;
    UIImageView *_imageView;
    UIButton *_button;
    UIButton *_closeButton;
    EWAgreementLabel *_everywhereAgreementLabel;
    EWAgreementLabel *_trustAgreementLabel;
}

+ (void)rpcAgreement;
+ (void)delayRPC;
+ (_Bool)isAgreeed;
@property(retain, nonatomic) EWAgreementLabel *trustAgreementLabel; // @synthesize trustAgreementLabel=_trustAgreementLabel;
@property(retain, nonatomic) EWAgreementLabel *everywhereAgreementLabel; // @synthesize everywhereAgreementLabel=_everywhereAgreementLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)close;
- (void)pressAgreeedBtn;
- (void)pressEverywhereAgreementBtn;
- (_Bool)autohideNavigationBar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end

