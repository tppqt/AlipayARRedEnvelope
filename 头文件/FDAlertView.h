//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFECustomIOSAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString;

@interface FDAlertView : NSObject <UIAlertViewDelegate, AFECustomIOSAlertViewDelegate>
{
    _Bool _isAlertViewShow;
}

+ (id)sharedInstance;
@property _Bool isAlertViewShow; // @synthesize isAlertViewShow=_isAlertViewShow;
- (void)dispalyCameraInitFailed:(id)arg1;
- (void)dispalyCameraPermissionDenied:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isAlerViewShow;
- (void)displayServerFailAlertView;
- (void)displayNoMoreTryAlertView;
- (void)displaySystemErrorAlertView;
- (void)displayImageQualityLessAlertView;
- (void)displayHomeActionAlertView;
- (void)displayUploadErrorAlertView;
- (void)dispalyTimeoutAlertView;
- (void)displayGoBackAlertView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

