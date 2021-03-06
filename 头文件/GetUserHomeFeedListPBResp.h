//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class LFCPBRpcResult, NSMutableArray, NSString;

@interface GetUserHomeFeedListPBResp : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResult;
    _Bool _hasHasMore;
    _Bool _hasRelationType;
    _Bool _hasNowTime;
    _Bool _hasMore;
    LFCPBRpcResult *_result;
    NSMutableArray *_feedList;
    NSString *_relationType;
    long long _nowTime;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long nowTime; // @synthesize nowTime=_nowTime;
@property(retain, nonatomic) NSString *relationType; // @synthesize relationType=_relationType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *feedList; // @synthesize feedList=_feedList;
@property(retain, nonatomic) LFCPBRpcResult *result; // @synthesize result=_result;
@property(readonly) _Bool hasNowTime; // @synthesize hasNowTime=_hasNowTime;
@property(readonly) _Bool hasRelationType; // @synthesize hasRelationType=_hasRelationType;
@property(readonly) _Bool hasHasMore; // @synthesize hasHasMore=_hasHasMore;
@property(readonly) _Bool hasResult; // @synthesize hasResult=_hasResult;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addFeedList:(id)arg1;
- (void)setFeedListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

