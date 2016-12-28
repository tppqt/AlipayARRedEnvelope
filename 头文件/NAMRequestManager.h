//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NAMRequestManager : NSObject
{
    _Bool _isRequesting;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (id)extraParams:(id)arg1;
- (void)logNoExpired:(id)arg1;
- (void)logRequestFinished:(id)arg1 reqlist:(id)arg2 error:(id)arg3;
- (void)logRequestStart:(id)arg1 params:(id)arg2;
- (_Bool)forceRequest:(id)arg1;
- (id)reqParams:(id)arg1 reqlist:(id)arg2;
- (id)reqlist:(id)arg1 params:(id)arg2;
- (void)processRequestError:(id)arg1 reqlist:(id)arg2;
- (void)processData:(id)arg1 reqlist:(id)arg2;
- (void)startRequest:(id)arg1 autoDownload:(_Bool)arg2 params:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)requestApps:(id)arg1 autoDownload:(_Bool)arg2 params:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)requestAllApps:(id)arg1 autoDownload:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;

@end

