//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "REErrorViewDelegate.h"

@class NSDictionary, NSString, REDataEngine, REErrorView;

@interface REBaseViewController : DTViewController <REErrorViewDelegate>
{
    float _containerWidth;
    float _containerHeight;
    long long initOnceToken;
    _Bool _hideBackButton;
    REDataEngine *_dataEngine;
    REErrorView *_errorView;
    NSString *_prevBiz;
    NSDictionary *_launchOptions;
}

@property(nonatomic) _Bool hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(retain, nonatomic) REErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) REDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (void)didClickedErrorViewButton:(id)arg1;
- (void)removeErrorView;
- (id)showErrorView:(int)arg1;
- (void)backToPersonalHome;
- (void)transitionToController:(id)arg1 animated:(_Bool)arg2;
- (void)backToMessageList;
- (id)lastViewController;
- (void)backToHomeAndPush:(id)arg1 animated:(_Bool)arg2;
- (void)backToHome;
- (void)popAppOldAndPushViewController:(id)arg1 newVC:(id)arg2 animated:(_Bool)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideBackButton:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)customNavigationBarBackButtonImage;
- (long long)customStatusBarStytle;
- (void)setupViews;
- (id)opaqueNavigationBarColor;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

