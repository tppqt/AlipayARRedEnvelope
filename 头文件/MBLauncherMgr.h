//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class APAlertView, NSString;

@interface MBLauncherMgr : NSObject <UIAlertViewDelegate>
{
    APAlertView *_alertView;
    NSString *_urlPath;
}

+ (id)sharedMgr;
+ (id)classNameWithBizType:(id)arg1;
@property(retain, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(nonatomic) __weak APAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)dispatch:(id)arg1;
- (id)launcherViewController:(id)arg1;
- (void)dealloc;
- (void)destroyMgr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

