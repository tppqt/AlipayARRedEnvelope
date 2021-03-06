//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class ECKey, NSMutableArray, NSString;

@interface OfflineKeyInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasUserKey;
    _Bool _hasExpireTime;
    _Bool _hasOfflineData;
    _Bool _hasAuthValidTime;
    int _authValidTime;
    ECKey *_userKey;
    unsigned long long _expireTime;
    NSString *_offlineData;
    NSMutableArray *_config;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *config; // @synthesize config=_config;
@property(nonatomic) int authValidTime; // @synthesize authValidTime=_authValidTime;
@property(retain, nonatomic) NSString *offlineData; // @synthesize offlineData=_offlineData;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) ECKey *userKey; // @synthesize userKey=_userKey;
@property(readonly) _Bool hasAuthValidTime; // @synthesize hasAuthValidTime=_hasAuthValidTime;
@property(readonly) _Bool hasOfflineData; // @synthesize hasOfflineData=_hasOfflineData;
@property(readonly) _Bool hasExpireTime; // @synthesize hasExpireTime=_hasExpireTime;
@property(readonly) _Bool hasUserKey; // @synthesize hasUserKey=_hasUserKey;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addConfig:(id)arg1;
- (void)setConfigArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

