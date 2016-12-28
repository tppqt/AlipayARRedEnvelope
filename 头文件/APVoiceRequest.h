//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APVoiceRequest : NSObject
{
    _Bool _useHttps;
    NSString *_md5;
    NSString *_business;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _downloadReuestCompletion;
    unsigned long long _priority;
}

@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType downloadReuestCompletion; // @synthesize downloadReuestCompletion=_downloadReuestCompletion;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(nonatomic) _Bool useHttps; // @synthesize useHttps=_useHttps;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (id)init;

@end

