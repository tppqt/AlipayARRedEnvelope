//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperationManager.h"

@class DjangoHTTPRequestSerializer<AFURLRequestSerialization>;

@interface DjangoHTTPRequestOperationManager : AFHTTPRequestOperationManager
{
}

- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain, nonatomic) DjangoHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer; // @dynamic requestSerializer;

@end

