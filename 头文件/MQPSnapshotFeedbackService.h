//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class MQPAlertView2, NSString, UIImage, UIView;

@interface MQPSnapshotFeedbackService : NSObject <UIAlertViewDelegate>
{
    UIImage *_snapshotImage;
    NSString *_tagString;
    NSString *_currViewString;
    UIView *_firstResponder;
    MQPAlertView2 *_alertView;
}

@property(retain, nonatomic) MQPAlertView2 *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *firstResponder; // @synthesize firstResponder=_firstResponder;
@property(retain, nonatomic) NSString *currViewString; // @synthesize currViewString=_currViewString;
@property(retain, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)findDialogInViewHierarchy:(id)arg1;
- (void)didTakeScreenshot:(id)arg1;
- (void)stopMonitorSnapshot;
- (void)startMonitorSnapshot;
- (void)willExitCashierNotification:(id)arg1;
- (void)didEnterCashierNotification:(id)arg1;
- (void)registerCashierNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

