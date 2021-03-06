//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMAttitude, CMMotionManager;

@interface APScanAREMotionMonitor : NSObject
{
    _Bool _hadStop;
    CMMotionManager *_motionManager;
    CMAttitude *_refAttitude;
    long long _count;
}

@property(nonatomic) _Bool hadStop; // @synthesize hadStop=_hadStop;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) CMAttitude *refAttitude; // @synthesize refAttitude=_refAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)startMonitorWithComplete:(CDUnknownBlockType)arg1;
- (id)init;

@end

