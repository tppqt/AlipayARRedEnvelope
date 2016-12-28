//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSSearchableIndexDelegate.h"

@class APGThumbnailMananager, CSSearchableIndex, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface APSystemSearchService : NSObject <CSSearchableIndexDelegate>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    CSSearchableIndex *_searchableIndex;
    APGThumbnailMananager *_thumbManager;
    NSMutableDictionary *_retryInfo;
    NSDictionary *_sysIndexConfig;
    NSDictionary *_sysIndexDataBuildStateInfo;
}

+ (id)indexDataByIdentifier:(id)arg1;
+ (void)removeCacheDataByIndentifiers:(id)arg1;
+ (id)identifier:(id)arg1 byIndex:(id)arg2;
+ (id)cacheIndexDataForIndex:(id)arg1;
+ (void)removeIndexCacheData;
+ (void)removeIndexCacheData:(id)arg1;
+ (void)removeIndexCacheData:(id)arg1 primaryKeyArray:(id)arg2;
+ (void)addIndexCacheData:(id)arg1 dataArray:(id)arg2;
+ (id)crcString:(id)arg1;
+ (void)compareCacheData:(id)arg1 dataArray:(id)arg2 addDataArray:(out id *)arg3 delPrimaryKeyArray:(out id *)arg4;
+ (id)defaultService;
@property(retain) NSDictionary *sysIndexDataBuildStateInfo; // @synthesize sysIndexDataBuildStateInfo=_sysIndexDataBuildStateInfo;
@property(retain) NSDictionary *sysIndexConfig; // @synthesize sysIndexConfig=_sysIndexConfig;
@property(retain, nonatomic) NSMutableDictionary *retryInfo; // @synthesize retryInfo=_retryInfo;
@property(retain, nonatomic) APGThumbnailMananager *thumbManager; // @synthesize thumbManager=_thumbManager;
@property(retain, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (id)decorateSystemSearchableDatas:(id)arg1;
- (void)handleUserActivityNotification:(id)arg1;
- (void)searchableIndexDidFinishThrottle:(id)arg1;
- (void)searchableIndexDidThrottle:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)removeSystemRetryNote;
- (_Bool)isSystemNoteRetry;
- (void)noteRetryNextRestart;
- (void)validateReindex;
- (void)noteReindexNextInvoke;
- (_Bool)isAppLanguageChanged:(id)arg1;
- (_Bool)batchDelSystemSearcheableData:(id)arg1 primaryKeyArray:(id)arg2;
- (id)batchAddSystemSearcheableData:(id)arg1 dataArray:(id)arg2;
- (id)createSystemSearchItem:(id)arg1 dataInfo:(id)arg2;
- (_Bool)delSystemSearcheableDatas:(id)arg1;
- (void)prepareThumbnails:(id)arg1;
- (void)partBuildSystemIndex:(id)arg1 dataArray:(id)arg2;
- (void)fullBuildSystemIndex:(id)arg1 dataArray:(id)arg2;
- (void)removeMemoryRetryItems:(id)arg1;
- (void)removeRetryDatas:(id)arg1 retryDatas:(id)arg2;
- (void)addRetryDatas:(id)arg1 retryDatas:(id)arg2;
- (void)retryDatas;
- (void)addSystemSearcheableFullDatas:(id)arg1 dataArray:(id)arg2;
- (void)processIndexDataChanged:(id)arg1;
- (void)notifyDataChanged:(id)arg1;
- (void)updateSysIndex:(id)arg1 state:(long long)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)saveIndexDataBuildState:(id)arg1 state:(long long)arg2;
- (void)resetAllSysIndexDataBuildSate;
- (void)handleLoginNotification:(id)arg1;
- (void)setupSysIndexConfig;
- (void)registerIndex:(id)arg1 dataSource:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

