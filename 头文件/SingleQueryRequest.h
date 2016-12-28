//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface SingleQueryRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSign;
    _Bool _hasCrowdNo;
    _Bool _hasNeedPicFeatures;
    _Bool _hasPrevBiz;
    _Bool _hasGroupId;
    _Bool _needPicFeatures;
    NSString *_sign;
    NSString *_crowdNo;
    NSString *_prevBiz;
    NSString *_groupId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(nonatomic) _Bool needPicFeatures; // @synthesize needPicFeatures=_needPicFeatures;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(readonly) _Bool hasGroupId; // @synthesize hasGroupId=_hasGroupId;
@property(readonly) _Bool hasPrevBiz; // @synthesize hasPrevBiz=_hasPrevBiz;
@property(readonly) _Bool hasNeedPicFeatures; // @synthesize hasNeedPicFeatures=_hasNeedPicFeatures;
@property(readonly) _Bool hasCrowdNo; // @synthesize hasCrowdNo=_hasCrowdNo;
@property(readonly) _Bool hasSign; // @synthesize hasSign=_hasSign;
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

