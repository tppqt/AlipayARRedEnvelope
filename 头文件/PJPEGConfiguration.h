//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PJPEGConfiguration : NSObject
{
    int _maxDecodeTimes;
    double _minPercent;
    double _secPercent;
    double _maxPercent;
    long long _minFileLen;
    long long _maxFileLen;
}

@property(nonatomic) long long maxFileLen; // @synthesize maxFileLen=_maxFileLen;
@property(nonatomic) long long minFileLen; // @synthesize minFileLen=_minFileLen;
@property(nonatomic) double maxPercent; // @synthesize maxPercent=_maxPercent;
@property(nonatomic) double secPercent; // @synthesize secPercent=_secPercent;
@property(nonatomic) double minPercent; // @synthesize minPercent=_minPercent;
@property(nonatomic) int maxDecodeTimes; // @synthesize maxDecodeTimes=_maxDecodeTimes;
- (id)init;

@end

