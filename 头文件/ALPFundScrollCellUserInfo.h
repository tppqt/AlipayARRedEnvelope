//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALPFundScrollCellUserInfo : NSObject
{
    _Bool _isDesc;
    _Bool _isAppearing;
    float _progressPercent;
    float _offset;
}

+ (id)buildWithProgressPercent:(double)arg1 isDesc:(_Bool)arg2 isAppearing:(_Bool)arg3 idx:(long long)arg4;
+ (void)initialize;
@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) _Bool isDesc; // @synthesize isDesc=_isDesc;
@property(nonatomic) float progressPercent; // @synthesize progressPercent=_progressPercent;

@end

