//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface MonthBillAccountUIModel : NSObject
{
    NSMutableDictionary *_cacheDictionary;
    NSDate *_selectedMonth;
}

@property(retain, nonatomic) NSDate *selectedMonth; // @synthesize selectedMonth=_selectedMonth;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
- (void).cxx_destruct;
- (id)accountDataWithMonth:(id)arg1;
- (id)billFlowWithMonth:(id)arg1;
- (void)clearData;
- (void)loadWithMonth:(id)arg1;
- (id)init;

@end

