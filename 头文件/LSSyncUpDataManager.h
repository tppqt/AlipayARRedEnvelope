//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SyncUpCallback.h"

@class NSString;

@interface LSSyncUpDataManager : NSObject <SyncUpCallback>
{
}

- (void)syncUpLiveShowStart:(id)arg1;
- (void)syncUpLiveShowCloseLive:(id)arg1;
- (void)syncUpLiveShowPraises:(id)arg1;
- (void)syncUpLiveShowPraise:(id)arg1;
- (void)syncUpLiveShowComment:(id)arg1;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

