//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSArray;

@interface MOBILECSASuitShopQueryResponse : MOBILECSABaseRpcResponse
{
    _Bool _hasNext;
    NSArray *_shopDetails;
    long long _totolShops;
}

+ (Class)shopDetailsElementClass;
@property(nonatomic) long long totolShops; // @synthesize totolShops=_totolShops;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSArray *shopDetails; // @synthesize shopDetails=_shopDetails;
- (void).cxx_destruct;

@end

