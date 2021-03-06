//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonResult.h"

@class NSArray, NSString;

@interface WEALTHProfitRateQueryResult : WEALTHCommonResult
{
    NSString *_monthAvgProfit;
    NSString *_minProfitRate;
    NSString *_maxProfitRate;
    NSString *_title;
    NSString *_maxProfitContent;
    NSString *_minProfitContent;
    NSArray *_profitRateList;
}

+ (Class)profitRateListElementClass;
@property(retain, nonatomic) NSArray *profitRateList; // @synthesize profitRateList=_profitRateList;
@property(retain, nonatomic) NSString *minProfitContent; // @synthesize minProfitContent=_minProfitContent;
@property(retain, nonatomic) NSString *maxProfitContent; // @synthesize maxProfitContent=_maxProfitContent;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *maxProfitRate; // @synthesize maxProfitRate=_maxProfitRate;
@property(retain, nonatomic) NSString *minProfitRate; // @synthesize minProfitRate=_minProfitRate;
@property(retain, nonatomic) NSString *monthAvgProfit; // @synthesize monthAvgProfit=_monthAvgProfit;
- (void).cxx_destruct;

@end

