//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEDataController.h"

@class NSString;

@interface AFStockMangerUtils : BEEDataController
{
    _Bool _isLoading;
    NSString *_pageUrl;
}

+ (void)pushAccountVerifyPage;
+ (void)pushAddAccountPage;
+ (void)delayLoadTime;
+ (void)loadStockAcountModel:(id)arg1;
+ (void)pushStockDetail:(id)arg1;
+ (void)pushStockDetail;
+ (id)sharedInstance;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
- (void).cxx_destruct;
- (void)pushAcountManager:(_Bool)arg1;
- (void)verifyAcount:(id)arg1;
- (void)loadEnded:(id)arg1;
- (void)loadRpcException:(id)arg1;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;

@end

