//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMPActionDelegate.h"

@class NSMutableArray, NSString;

@interface MMPToastManger : NSObject <MMPActionDelegate>
{
    NSMutableArray *_toastArray;
    NSMutableArray *_blockArray;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)onAction:(id)arg1 action:(id)arg2;
- (void)addIntoToastList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showToast:(id)arg1 text:(id)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

