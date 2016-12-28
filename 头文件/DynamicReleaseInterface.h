//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DynamicReleaseInterface : NSObject
{
    _Bool _executingBandages;
    NSString *_localBandageIds;
}

+ (id)sharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resetBandageWorkspace:(_Bool)arg1;
- (id)bandageLocalWorkspacePath;
- (_Bool)executingBandages;
- (void)synchronizeBandage:(_Bool)arg1 execute:(_Bool)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)synchronizeBandage;
- (void)executeLocalBandage:(long long)arg1;
- (id)getExecutedBandages;
- (id)getLocalBandages;
- (_Bool)automaticSynchronization;
- (id)AESEncryptionKeyName;
- (double)fetchMinInterval;
- (id)userId;
- (id)productVersion;
- (id)productId;
- (void)dealloc;

@end

