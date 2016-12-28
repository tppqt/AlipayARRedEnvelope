//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class COMLocationInfo, NSString;

@interface QueryCommunityReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasCommunityId;
    _Bool _hasVersion;
    _Bool _hasSourceId;
    _Bool _hasBizType;
    _Bool _hasRealLocation;
    _Bool _hasCache;
    _Bool _cache;
    int _version;
    NSString *_communityId;
    NSString *_sourceId;
    NSString *_bizType;
    COMLocationInfo *_realLocation;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(retain, nonatomic) COMLocationInfo *realLocation; // @synthesize realLocation=_realLocation;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *communityId; // @synthesize communityId=_communityId;
@property(readonly) _Bool hasCache; // @synthesize hasCache=_hasCache;
@property(readonly) _Bool hasRealLocation; // @synthesize hasRealLocation=_hasRealLocation;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasSourceId; // @synthesize hasSourceId=_hasSourceId;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasCommunityId; // @synthesize hasCommunityId=_hasCommunityId;
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

