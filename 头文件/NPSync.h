//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NPSync : NSObject
{
}

+ (id)sharedInstance;
- (void)handleNotification:(id)arg1;
- (void)refreshSyncSkey:(id)arg1 sKey:(id)arg2;
- (void)responseSyncNotify:(id)arg1;
- (void)unregisterSync:(id)arg1;
- (void)registerSync:(id)arg1;

@end

