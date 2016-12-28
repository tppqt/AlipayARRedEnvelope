//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface QueryScoreRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultStatus;
    _Bool _hasMemo;
    _Bool _hasScore;
    _Bool _hasUserId;
    _Bool _hasHeadImg;
    _Bool _hasNickName;
    int _resultStatus;
    NSString *_memo;
    long long _score;
    NSString *_userId;
    NSString *_headImg;
    NSString *_nickName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) int resultStatus; // @synthesize resultStatus=_resultStatus;
@property(readonly) _Bool hasNickName; // @synthesize hasNickName=_hasNickName;
@property(readonly) _Bool hasHeadImg; // @synthesize hasHeadImg=_hasHeadImg;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasScore; // @synthesize hasScore=_hasScore;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
@property(readonly) _Bool hasResultStatus; // @synthesize hasResultStatus=_hasResultStatus;
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

