//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSMutableArray, PPCommendAll;

@interface PPAddPublicAccountService : NSObject
{
    NSMutableArray *recommendList;
    NSMutableArray *categroyList;
    NSMutableArray *subsRmdList;
    PPCommendAll *recommendIncrease;
    PPCommendAll *rmdSubscriptionIncrease;
    DTRpcAsyncCaller *_recommendCaller;
}

- (void).cxx_destruct;
- (_Bool)isEqualNull:(id)arg1 andStr:(id)arg2;
- (_Bool)compareWithCategroyCache:(id)arg1;
- (_Bool)compareWithSubsCache:(id)arg1;
- (_Bool)compareWithCache:(id)arg1;
- (void)saveCategroyCache:(id)arg1;
- (void)saveSubsCache:(id)arg1;
- (void)saveCache:(id)arg1;
- (id)readSubsCache;
- (id)readCache;
- (id)convertCategroyRpcResult2LocalArray:(id)arg1;
- (id)getSubsLastPublicId:(id)arg1;
- (id)getLastPublicId:(id)arg1;
- (id)convertSubsPbResultToLoaclArray:(id)arg1;
- (id)convertRpcResultToLoaclArray:(id)arg1;
- (id)categroyList;
- (void)readCategroyFromRPC;
- (id)readCategroyCache;
- (id)readRmdSubscriptionListNextPageWithCompletion:(CDUnknownBlockType)arg1;
- (id)readRecommendListNextPageWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

