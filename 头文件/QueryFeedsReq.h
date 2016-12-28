//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface QueryFeedsReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasCommunityId;
    _Bool _hasLastFeedId;
    _Bool _hasGroupId;
    _Bool _hasGroupType;
    _Bool _hasCache;
    _Bool _cache;
    NSString *_communityId;
    NSString *_lastFeedId;
    NSString *_groupId;
    NSString *_groupType;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *lastFeedId; // @synthesize lastFeedId=_lastFeedId;
@property(retain, nonatomic) NSString *communityId; // @synthesize communityId=_communityId;
@property(readonly) _Bool hasCache; // @synthesize hasCache=_hasCache;
@property(readonly) _Bool hasGroupType; // @synthesize hasGroupType=_hasGroupType;
@property(readonly) _Bool hasGroupId; // @synthesize hasGroupId=_hasGroupId;
@property(readonly) _Bool hasLastFeedId; // @synthesize hasLastFeedId=_hasLastFeedId;
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

