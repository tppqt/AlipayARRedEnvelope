//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BLDataEngine : NSObject
{
    NSMutableArray *_RPCQueue;
}

@property(retain, nonatomic) NSMutableArray *RPCQueue; // @synthesize RPCQueue=_RPCQueue;
- (void).cxx_destruct;
- (void)queryBillContactDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryBillContactBaseWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)operateBillDetailWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryBillDetailDicWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryRelatedListWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteBillListWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)querySubListBasicInfoWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)querySubBillListWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryBillListWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2 exceptionCallback:(CDUnknownBlockType)arg3;
- (void)storeCacheRewardBaseInfoWithKey:(id)arg1 data:(id)arg2;
- (id)queryCacheRewardBaseInfoWithKey:(id)arg1;
- (void)removeCacheBillListWithKey:(id)arg1;
- (void)storeCacheBillListWithKey:(id)arg1 data:(id)arg2;
- (id)queryCacheBillListWithKey:(id)arg1;
- (void)queryCategoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)storeCacheBillCategory:(id)arg1;
- (id)queryCacheBillCategory;
- (void)cancel;
- (id)init;

@end

