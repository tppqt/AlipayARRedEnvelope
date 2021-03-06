//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface PermissionQueryRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAppKey;
    _Bool _hasUrl;
    NSString *_appKey;
    NSString *_url;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly) _Bool hasUrl; // @synthesize hasUrl=_hasUrl;
@property(readonly) _Bool hasAppKey; // @synthesize hasAppKey=_hasAppKey;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

