//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MonthBillModel, NSArray;

@interface MonthReportUIModel : NSObject
{
    int _categoryMode;
    MonthBillModel *_monthBill;
    NSArray *_topBillFlow;
    NSArray *_monthBillArray;
}

@property(retain, nonatomic) NSArray *monthBillArray; // @synthesize monthBillArray=_monthBillArray;
@property(retain, nonatomic) NSArray *topBillFlow; // @synthesize topBillFlow=_topBillFlow;
@property(retain, nonatomic) MonthBillModel *monthBill; // @synthesize monthBill=_monthBill;
@property(nonatomic) int categoryMode; // @synthesize categoryMode=_categoryMode;
- (void).cxx_destruct;
- (void)dealloc;

@end

