//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface CBRYCountDownTask : NSObject
{
    _Bool _isCancel;
    NSTimer *_timer;
}

+ (long long)nowTimeInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
- (void).cxx_destruct;
- (id)splitTimeForCBRYCountDownWithDelta:(long long)arg1;
- (void)cancelTask;
- (void)mainCallFinish:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)timerInvocation:(id)arg1;
- (void)startTimer:(double)arg1 repeats:(_Bool)arg2 fire:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)startTask:(id)arg1 process:(CDUnknownBlockType)arg2 finish:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

