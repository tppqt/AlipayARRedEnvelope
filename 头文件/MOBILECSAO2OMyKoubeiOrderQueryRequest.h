//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSString;

@interface MOBILECSAO2OMyKoubeiOrderQueryRequest : MOBILECSAToString
{
    int _queryCondition;
    int _pageSize;
    int _pageNumber;
    NSString *_endTime;
}

@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int queryCondition; // @synthesize queryCondition=_queryCondition;
- (void).cxx_destruct;

@end

