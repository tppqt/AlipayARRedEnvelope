//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface NAMDownloadManager : NSObject
{
    NSMutableDictionary *_dicTasks;
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableDictionary *dicTasks; // @synthesize dicTasks=_dicTasks;
- (void).cxx_destruct;
- (void)cancelTasks:(id)arg1;
- (_Bool)canDownload:(id)arg1 params:(id)arg2;
- (void)addTask:(id)arg1 tag:(id)arg2 params:(id)arg3;
- (void)removeTask:(id)arg1;
- (void)cancelAllDownloadTask;
- (void)downloadApp:(id)arg1 params:(id)arg2 process:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (_Bool)isDownloadingApp:(id)arg1;
- (id)init;

@end

