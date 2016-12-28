//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface QueryCommunityMembersResp : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasResultStatus;
    _Bool _hasMemo;
    _Bool _hasEnd;
    _Bool _hasCurrentPageNum;
    _Bool _hasVersion;
    _Bool _end;
    int _currentPageNum;
    NSString *_resultStatus;
    NSString *_memo;
    NSMutableArray *_members;
    long long _version;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) int currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(nonatomic) _Bool end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasCurrentPageNum; // @synthesize hasCurrentPageNum=_hasCurrentPageNum;
@property(readonly) _Bool hasEnd; // @synthesize hasEnd=_hasEnd;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
@property(readonly) _Bool hasResultStatus; // @synthesize hasResultStatus=_hasResultStatus;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addMembers:(id)arg1;
- (void)setMembersArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

