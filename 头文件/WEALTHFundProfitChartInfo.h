//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHToString.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface WEALTHFundProfitChartInfo : WEALTHToString <NSCoding>
{
    NSString *_chartName;
    NSString *_chartFlag;
    NSArray *_fundIncomeRateList;
}

+ (Class)fundIncomeRateListElementClass;
@property(retain, nonatomic) NSArray *fundIncomeRateList; // @synthesize fundIncomeRateList=_fundIncomeRateList;
@property(retain, nonatomic) NSString *chartFlag; // @synthesize chartFlag=_chartFlag;
@property(retain, nonatomic) NSString *chartName; // @synthesize chartName=_chartName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

