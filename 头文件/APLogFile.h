//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APLogFile : NSObject
{
    int _fd;
    NSString *_name;
    unsigned long long _maxSize;
    double _maxLive;
    NSString *_filePath;
    _Bool _uploadable;
    _Bool _editable;
    unsigned long long _triggerCount;
    CDUnknownBlockType _timeFilter;
    long long _size;
    unsigned long long _unSyncCount;
}

+ (id)logFileWithName:(id)arg1;
+ (char *)checkCode;
@property(nonatomic) unsigned long long unSyncCount; // @synthesize unSyncCount=_unSyncCount;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) CDUnknownBlockType timeFilter; // @synthesize timeFilter=_timeFilter;
@property(nonatomic) unsigned long long triggerCount; // @synthesize triggerCount=_triggerCount;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool uploadable; // @synthesize uploadable=_uploadable;
- (void).cxx_destruct;
- (id)description;
- (_Bool)shouldFlush;
- (id)indexFromOffset:(unsigned long long)arg1;
- (id)makeUnSyncLogIndex;
- (void)markIndex:(id)arg1;
- (id)dataForIndex:(id)arg1;
- (id)writeLog:(id)arg1;
- (_Bool)isUsing;
- (_Bool)isMarked;
- (void)markFile;
- (_Bool)isExist;
- (id)initWithName:(id)arg1;
- (void)removeWeakCache;
- (void)dealloc;

@end

