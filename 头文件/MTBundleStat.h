//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTModel.h"

@class NSNumber, NSString;

@interface MTBundleStat : MTModel
{
    NSNumber *_times;
    NSNumber *_size;
    NSNumber *_failTimes;
    NSString *_bundle;
}

@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSNumber *failTimes; // @synthesize failTimes=_failTimes;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *times; // @synthesize times=_times;
- (void).cxx_destruct;

@end

