//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNetworkManager, MAOfflineItemNationWide, MAOfflinePackage, NSArray, NSMutableDictionary, NSString;

@interface MAOfflineMap : NSObject
{
    _Bool _checkNewestVersionIsRunning;
    MAOfflinePackage *_package;
    NSString *_basePath;
    NSString *_CachedFilePath;
    NSMutableDictionary *_runningOperations;
    NSString *_vmapPath;
    AMapNetworkManager *_downloader;
}

+ (id)sharedOfflineMap;
+ (id)offlineRequestQueue;
@property(retain, nonatomic) AMapNetworkManager *downloader; // @synthesize downloader=_downloader;
@property(copy, nonatomic) NSString *vmapPath; // @synthesize vmapPath=_vmapPath;
@property _Bool checkNewestVersionIsRunning; // @synthesize checkNewestVersionIsRunning=_checkNewestVersionIsRunning;
@property(retain, nonatomic) NSMutableDictionary *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(copy, nonatomic) NSString *CachedFilePath; // @synthesize CachedFilePath=_CachedFilePath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) MAOfflinePackage *package; // @synthesize package=_package;
- (void).cxx_destruct;
- (id)init;
- (void)setupBasePath;
- (void)setupStatus;
- (void)setupPackage;
- (void)forbidBackup;
- (_Bool)clearAndReconstructDirectoryAtPath:(id)arg1;
- (_Bool)unzipDownloadedFile:(id)arg1 adcode:(id)arg2 error:(id *)arg3;
- (void)resetItemStatusForItem:(id)arg1;
- (void)updateItemStatusToNoneIncludingCached:(_Bool)arg1;
- (void)mergeFrom:(id)arg1 to:(id)arg2;
- (void)deleteCachedFileForItems:(id)arg1;
- (id)progressInfoWithReceivedSize:(long long)arg1 expectedSize:(long long)arg2;
- (void)clearCache;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (id)vmapFilePathForItem:(id)arg1;
- (id)cachedFilePathForItem:(id)arg1;
- (void)checkoutNewestPackageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateOfflinePackageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkLocalVersion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)executeCompleteWithItem:(id)arg1 downloadBlock:(CDUnknownBlockType)arg2 status:(long long)arg3 info:(id)arg4;
- (void)checkNewestVersion:(CDUnknownBlockType)arg1;
- (void)clearDisk;
- (void)cancelAll;
- (_Bool)deleteFileAtPath:(id)arg1;
- (void)deleteFilesForItem:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)pauseItem:(id)arg1;
- (_Bool)isDownloadingForItem:(id)arg1;
- (void)downloadItem:(id)arg1 shouldContinueWhenAppEntersBackground:(_Bool)arg2 downloadBlock:(CDUnknownBlockType)arg3;
- (void)setupWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSArray *cities;
@property(readonly, nonatomic) MAOfflineItemNationWide *nationWide;
@property(readonly, nonatomic) NSArray *municipalities;
@property(readonly, nonatomic) NSArray *provinces;
- (void)pause:(id)arg1;
- (_Bool)isDownloadingForCity:(id)arg1;
- (void)downloadCity:(id)arg1 shouldContinueWhenAppEntersBackground:(_Bool)arg2 downloadBlock:(CDUnknownBlockType)arg3;
- (void)downloadCity:(id)arg1 downloadBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *offlineCities;

@end

