//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface APMKVStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSMutableDictionary *_registeredTypes;
    NSString *_path;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    struct sqlite3 *_db;
    struct __CFDictionary *_dbStmtCache;
    double _dbLastOpenErrorTime;
    unsigned long long _dbOpenErrorCount;
    _Bool _errorLogsEnabled;
    _Bool _requestingRealtimeOperation;
    _Bool _isLazyRegisterExecuted;
    unsigned long long _type;
    NSArray *_protectedBusinesses;
    unsigned long long _protectedTags;
    NSMutableDictionary *_aliasKeyMap;
}

@property(nonatomic) _Bool isLazyRegisterExecuted; // @synthesize isLazyRegisterExecuted=_isLazyRegisterExecuted;
@property(nonatomic, getter=isRequestingRealtimeOperation) _Bool requestingRealtimeOperation; // @synthesize requestingRealtimeOperation=_requestingRealtimeOperation;
@property(retain, nonatomic) NSMutableDictionary *aliasKeyMap; // @synthesize aliasKeyMap=_aliasKeyMap;
@property(nonatomic) unsigned long long protectedTags; // @synthesize protectedTags=_protectedTags;
@property(copy, nonatomic) NSArray *protectedBusinesses; // @synthesize protectedBusinesses=_protectedBusinesses;
@property(nonatomic) _Bool errorLogsEnabled; // @synthesize errorLogsEnabled=_errorLogsEnabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)releaseRealtimeOperation;
- (void)requestRealtimeOperation;
- (id)pathForItem:(id)arg1;
- (id)pathForFilename:(id)arg1 type:(unsigned long long)arg2;
- (id)rootPathForType:(unsigned long long)arg1;
- (id)getItemInfoForTag:(unsigned long long)arg1 laterThanTime:(int)arg2;
- (id)getItemsSizeGroupByBusinessAndTag;
- (int)getItemsSizeWithType:(unsigned long long)arg1;
- (int)getItemsSizeEarlierThanTime:(int)arg1;
- (int)getItemsSize;
- (int)getItemsCount;
- (_Bool)itemExistsForKey:(id)arg1;
- (id)getItemValueForRecordId:(unsigned long long)arg1;
- (id)getItemsInfoForKey:(id)arg1;
- (id)getAliasKeyForKey:(id)arg1;
- (id)getItemInfoForKey:(id)arg1;
- (id)getItemForKey:(id)arg1;
- (_Bool)removeItemsForBusiness:(id)arg1 earlierThanTime:(int)arg2 exceptTag:(unsigned long long)arg3;
- (_Bool)removeAllItems;
- (_Bool)removeItemsToFitCount:(int)arg1;
- (_Bool)removeItemsToFitSize:(int)arg1;
- (_Bool)removeItemsEarlierThanTime:(int)arg1;
- (_Bool)removeItemForKey:(id)arg1;
- (_Bool)updateAccessTimeWithPath:(id)arg1;
- (_Bool)updateItemWithKey:(id)arg1 tag:(unsigned long long)arg2 addOrRemove:(_Bool)arg3;
- (_Bool)updateItemWithKey:(id)arg1 info:(id)arg2;
- (_Bool)updateItemWithKey:(id)arg1 aliasKey:(id)arg2 business:(id)arg3;
- (_Bool)updateItemWithKey:(id)arg1 business:(id)arg2;
- (_Bool)updateItemWithKey:(id)arg1 aliasKey:(id)arg2;
- (_Bool)saveItemWithKey:(id)arg1 path:(id)arg2 type:(unsigned long long)arg3 business:(id)arg4 tag:(unsigned long long)arg5 extendedInfo:(id)arg6;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2 filename:(id)arg3 type:(unsigned long long)arg4 business:(id)arg5 tag:(unsigned long long)arg6 extendedInfo:(id)arg7;
- (void)dealloc;
- (void)lazyRegister;
- (void)registerType:(int)arg1;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void)_resetAliasKeyMap;
- (void)_setAliasKey:(id)arg1 forKey:(id)arg2;
- (_Bool)_removeAllItems;
- (void)_reset;
- (void)_fileEmptyTrashInBackground;
- (_Bool)_fileMoveAllToTrash;
- (_Bool)_fileDeleteWithName:(id)arg1;
- (id)_fileReadWithName:(id)arg1;
- (_Bool)_fileWriteWithName:(id)arg1 data:(id)arg2;
- (id)_fileReletivePathWithPath:(id)arg1;
- (id)_fileReletivePathWithName:(id)arg1 type:(int)arg2;
- (id)_fileReletiveFolderForType:(int)arg1;
- (void)_fileRegisterType:(int)arg1;
- (void)_fileReregisterTypes;
- (int)_dbGetTotalItemCount;
- (id)_dbGetItemsWithTag:(long long)arg1 laterThanTime:(int)arg2 excludeInlineData:(_Bool)arg3;
- (id)_dbGetItemsSizeGroupByBusinessAndTag;
- (int)_dbGetTotalItemSizeWithType:(int)arg1;
- (int)_dbGetTotalItemSizeEarlierThan:(int)arg1;
- (int)_dbGetTotalItemSize;
- (int)_dbGetItemCountWithKey:(id)arg1;
- (id)_dbGetAliasKeyMap;
- (id)_dbGetAliasKeyWithKey:(id)arg1;
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)arg1;
- (id)_dbGetFilenames;
- (id)_dbGetFilenamesWithBusiness:(id)arg1 earlierThan:(int)arg2 exceptTag:(long long)arg3;
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)arg1;
- (id)_dbGetFilenameWithRecordId:(int)arg1;
- (id)_dbGetFilenamesWithKey:(id)arg1;
- (id)_dbGetFilenameWithKey:(id)arg1;
- (id)_dbGetValueWithRecordId:(int)arg1;
- (id)_dbGetItemsWithKey:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemWithKey:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt *)arg1 excludeInlineData:(_Bool)arg2;
- (_Bool)_dbDeleteAllItems:(int)arg1;
- (_Bool)_dbDeleteItemsWithBusiness:(id)arg1 earlierThan:(int)arg2 exceptTag:(long long)arg3 limit:(int)arg4;
- (_Bool)_dbDeleteItemsWithTimeEarlierThan:(int)arg1 limit:(int)arg2;
- (_Bool)_dbDeleteItemWithRecordId:(int)arg1;
- (_Bool)_dbDeleteItemWithKey:(id)arg1;
- (_Bool)_dbUpdateTag:(long long)arg1 forKey:(id)arg2 addOrRemove:(_Bool)arg3;
- (_Bool)_dbUpdateInfo:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbUpdateAliasKey:(id)arg1 business:(id)arg2 forKey:(id)arg3;
- (_Bool)_dbUpdateBusiness:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbClearAliasKey:(id)arg1;
- (_Bool)_dbUpdateAliasKey:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbUpdateAccessTimeWithFilename:(id)arg1;
- (_Bool)_dbUpdateAccessTimeWithRecordId:(int)arg1;
- (_Bool)_dbUpdateAccessTimeWithKey:(id)arg1;
- (_Bool)_dbSaveWithKey:(id)arg1 value:(id)arg2 size:(long long)arg3 fileName:(id)arg4 type:(int)arg5 business:(id)arg6 tag:(long long)arg7 extendedInfo:(id)arg8;
- (void)_dbBindJoinedArguments:(id)arg1 stmt:(struct sqlite3_stmt *)arg2 fromIndex:(int)arg3;
- (id)_dbJoinedArguments:(id)arg1;
- (struct sqlite3_stmt *)_dbPrepareStmt:(id)arg1;
- (_Bool)_dbExecute:(id)arg1;
- (void)_dbCheckpoint;
- (id)_dbUpdateSQLs;
- (_Bool)_dbUpdate;
- (_Bool)_dbInitialize;
- (_Bool)_dbCheck;
- (_Bool)_dbClose;
- (_Bool)_dbOpen;

@end

