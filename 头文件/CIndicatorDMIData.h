//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface CIndicatorDMIData : NSObject <NSCoding>
{
    NSString *_market;
    NSString *_code;
    NSString *_args;
    NSMutableArray *_dmiPara;
    CDStruct_1ed7117a _startTime;
    CDStruct_1ed7117a _endTime;
}

@property(retain, nonatomic) NSMutableArray *dmiPara; // @synthesize dmiPara=_dmiPara;
@property(nonatomic) CDStruct_1ed7117a endTime; // @synthesize endTime=_endTime;
@property(nonatomic) CDStruct_1ed7117a startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

