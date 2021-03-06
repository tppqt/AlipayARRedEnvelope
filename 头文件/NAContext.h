//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAAppInterface, NAConfigManager, NADownloadManager, NARequestManager, NASyncCenter, NAZipArchiveManager;

@interface NAContext : NSObject
{
    NADownloadManager *_downloadManager;
    NAZipArchiveManager *_zipArchiveManager;
    NARequestManager *_requestManager;
    NASyncCenter *_syncCenter;
    NAAppInterface *_appInterface;
    NAConfigManager *_configManager;
}

+ (id)syncCenter;
+ (id)configManager;
+ (id)appInterface;
+ (id)requestManager;
+ (id)dataStorage;
+ (id)zipArchiveManager;
+ (id)downloadManager;
+ (id)shared;
@property(retain, nonatomic) NAConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) NAAppInterface *appInterface; // @synthesize appInterface=_appInterface;
@property(retain, nonatomic) NASyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(retain, nonatomic) NARequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NAZipArchiveManager *zipArchiveManager; // @synthesize zipArchiveManager=_zipArchiveManager;
@property(retain, nonatomic) NADownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void).cxx_destruct;
- (id)initInPrivate;
- (id)init;

@end

