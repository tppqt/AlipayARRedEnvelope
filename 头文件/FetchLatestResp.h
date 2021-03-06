//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, ZHomeBaseRpcResult;

@interface FetchLatestResp : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBase;
    _Bool _hasLastQueryTime;
    _Bool _hasExt;
    _Bool _hasHasMore;
    _Bool _hasVersion;
    _Bool _hasInstallFiles;
    _Bool _hasOldVersion;
    _Bool _hasFullUpgrade;
    _Bool _hasMore;
    ZHomeBaseRpcResult *_base;
    long long _lastQueryTime;
    NSMutableArray *_feed;
    NSString *_ext;
    long long _version;
    NSMutableArray *_cardConfigs;
    NSString *_installFiles;
    long long _oldVersion;
    NSString *_fullUpgrade;
    NSMutableArray *_topFeeds;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *topFeeds; // @synthesize topFeeds=_topFeeds;
@property(retain, nonatomic) NSString *fullUpgrade; // @synthesize fullUpgrade=_fullUpgrade;
@property(nonatomic) long long oldVersion; // @synthesize oldVersion=_oldVersion;
@property(retain, nonatomic) NSString *installFiles; // @synthesize installFiles=_installFiles;
@property(retain, nonatomic) NSMutableArray *cardConfigs; // @synthesize cardConfigs=_cardConfigs;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSMutableArray *feed; // @synthesize feed=_feed;
@property(nonatomic) long long lastQueryTime; // @synthesize lastQueryTime=_lastQueryTime;
@property(retain, nonatomic) ZHomeBaseRpcResult *base; // @synthesize base=_base;
@property(readonly) _Bool hasFullUpgrade; // @synthesize hasFullUpgrade=_hasFullUpgrade;
@property(readonly) _Bool hasOldVersion; // @synthesize hasOldVersion=_hasOldVersion;
@property(readonly) _Bool hasInstallFiles; // @synthesize hasInstallFiles=_hasInstallFiles;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasHasMore; // @synthesize hasHasMore=_hasHasMore;
@property(readonly) _Bool hasExt; // @synthesize hasExt=_hasExt;
@property(readonly) _Bool hasLastQueryTime; // @synthesize hasLastQueryTime=_hasLastQueryTime;
@property(readonly) _Bool hasBase; // @synthesize hasBase=_hasBase;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addTopFeeds:(id)arg1;
- (void)setTopFeedsArray:(id)arg1;
- (void)addCardConfigs:(id)arg1;
- (void)setCardConfigsArray:(id)arg1;
- (void)addFeed:(id)arg1;
- (void)setFeedArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

