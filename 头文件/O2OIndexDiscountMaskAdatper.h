//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "O2OSyncManagerDelegate.h"

@class NSString, O2OIndexDiscountMaskProcesser;

@interface O2OIndexDiscountMaskAdatper : NSObject <O2OSyncManagerDelegate>
{
    O2OIndexDiscountMaskProcesser *_currentMaskProcesser;
}

+ (id)cachedMaskItem;
+ (void)removeAvailableMaskView;
+ (_Bool)checkAvailableMaskView;
+ (_Bool)hasDiscountMaskView;
+ (_Bool)hasMaskShowing;
+ (void)unRegisterKabaoSync;
+ (void)registerKabaoSync;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)syncMessage:(id)arg1 syncCode:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

