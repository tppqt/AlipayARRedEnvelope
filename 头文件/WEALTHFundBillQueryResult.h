//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonPageResult.h"

#import "NSCoding.h"

@class NSArray;

@interface WEALTHFundBillQueryResult : WEALTHCommonPageResult <NSCoding>
{
    _Bool _canRedirect;
    NSArray *_fundTradeRecordList;
}

+ (Class)fundTradeRecordListElementClass;
@property(nonatomic) _Bool canRedirect; // @synthesize canRedirect=_canRedirect;
@property(retain, nonatomic) NSArray *fundTradeRecordList; // @synthesize fundTradeRecordList=_fundTradeRecordList;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

