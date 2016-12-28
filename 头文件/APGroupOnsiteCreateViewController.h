//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APGroupOnsiteNumberViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class APGroupOnsiteCreateView, APNumericKeyboard, CLLocation, DTRpcAsyncCaller, NSString, UIActivityIndicatorView, UIAlertView, UILabel;

@interface APGroupOnsiteCreateViewController : DTViewController <APGroupOnsiteNumberViewDelegate, UIAlertViewDelegate>
{
    _Bool _queryRpcCalling;
    CDUnknownBlockType _callback;
    APGroupOnsiteCreateView *_onsiteCreateView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_warningView;
    APNumericKeyboard *_keyboard;
    CLLocation *_currentLocation;
    DTRpcAsyncCaller *_queryCaller;
    UIAlertView *_currentAlert;
}

@property(nonatomic) __weak UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(nonatomic) _Bool queryRpcCalling; // @synthesize queryRpcCalling=_queryRpcCalling;
@property(retain, nonatomic) DTRpcAsyncCaller *queryCaller; // @synthesize queryCaller=_queryCaller;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) APNumericKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UILabel *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) APGroupOnsiteCreateView *onsiteCreateView; // @synthesize onsiteCreateView=_onsiteCreateView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)checkNeedAuthGuide;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)hideKeyboard:(_Bool)arg1;
- (void)showKeyboard:(_Bool)arg1;
- (_Bool)isOnsiteNumberReady;
- (void)requestEnterMembers;
- (void)stopMembersQuery;
- (void)startMembersQuery;
- (void)autoStartMembersQuery;
- (void)enterGroupAction:(id)arg1;
- (void)groupOnsiteNumberViewDidFinishInput:(id)arg1;
- (void)viewDidLoad;
- (long long)customStatusBarStytle;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (_Bool)autohideNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

