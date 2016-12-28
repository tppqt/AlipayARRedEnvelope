//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSRecursiveLock;

@interface RMDownloadModel : NSObject
{
    NSRecursiveLock *_downloadListLock;
    NSLock *_downloadingTasksLock;
    NSMutableDictionary *_tasksToBeDownload;
    NSMutableDictionary *_tasksInDownloading;
    NSLock *_errorListLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *errorListLock; // @synthesize errorListLock=_errorListLock;
@property(retain, nonatomic) NSMutableDictionary *tasksInDownloading; // @synthesize tasksInDownloading=_tasksInDownloading;
@property(retain, nonatomic) NSMutableDictionary *tasksToBeDownload; // @synthesize tasksToBeDownload=_tasksToBeDownload;
@property(retain, nonatomic) NSLock *downloadingTasksLock; // @synthesize downloadingTasksLock=_downloadingTasksLock;
@property(retain, nonatomic) NSRecursiveLock *downloadListLock; // @synthesize downloadListLock=_downloadListLock;
- (void).cxx_destruct;
- (void)processWithExceptionValue:(id)arg1;
- (void)saveErrorList:(id)arg1;
- (id)loadErrorList;
- (void)removeObjectFromErrorListWithIdentity:(id)arg1;
- (long long)errorCountFromErrorListWithIdentity:(id)arg1;
- (id)downloadingTasks;
- (id)valueFromDownloadingTasksWithKey:(id)arg1;
- (void)removeObjectFromDownloadingTasksWithKey:(id)arg1;
- (void)addToDownloadingTasksWithKey:(id)arg1 Value:(id)arg2;
- (id)downloadList;
- (void)asyncUpdateDownloadStatusWithKey:(id)arg1 Object:(id)arg2;
- (id)valueFromDownloadListWithKey:(id)arg1;
- (void)updateDownloadStatusWithKey:(id)arg1 Object:(id)arg2;
- (void)removeObjectFromDownloadListWithKey:(id)arg1;
- (id)addToDownloadListWithKey:(id)arg1 Object:(id)arg2;
- (void)saveDownloadListToDataCenter;

@end

