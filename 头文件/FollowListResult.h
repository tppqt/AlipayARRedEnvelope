//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface FollowListResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasDynamicConfigUid;
    _Bool _hasUserId;
    _Bool _hasSyncMaxOpLogId;
    _Bool _hasPageNum;
    _Bool _hasPageSize;
    _Bool _hasRowCount;
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    _Bool _success;
    int _pageNum;
    int _pageSize;
    int _rowCount;
    int _resultCode;
    NSString *_dynamicConfigUid;
    NSString *_userId;
    NSString *_syncMaxOpLogId;
    NSMutableArray *_followAccountList;
    NSString *_resultMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSMutableArray *followAccountList; // @synthesize followAccountList=_followAccountList;
@property(retain, nonatomic) NSString *syncMaxOpLogId; // @synthesize syncMaxOpLogId=_syncMaxOpLogId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *dynamicConfigUid; // @synthesize dynamicConfigUid=_dynamicConfigUid;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
@property(readonly) _Bool hasRowCount; // @synthesize hasRowCount=_hasRowCount;
@property(readonly) _Bool hasPageSize; // @synthesize hasPageSize=_hasPageSize;
@property(readonly) _Bool hasPageNum; // @synthesize hasPageNum=_hasPageNum;
@property(readonly) _Bool hasSyncMaxOpLogId; // @synthesize hasSyncMaxOpLogId=_hasSyncMaxOpLogId;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasDynamicConfigUid; // @synthesize hasDynamicConfigUid=_hasDynamicConfigUid;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addFollowAccountList:(id)arg1;
- (void)setFollowAccountListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

