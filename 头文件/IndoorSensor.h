//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IndoorSensorSingleDelegate.h"
#import "LocationMotionDelegate.h"

@class IndoorSensorSingle, NSString;

@interface IndoorSensor : NSObject <LocationMotionDelegate, IndoorSensorSingleDelegate>
{
    int _step;
    float _orientation;
    id <IndoorSensorDelegate> _delegate;
    IndoorSensorSingle *_single;
}

+ (id)getSubVersion;
+ (id)getVersion;
@property(retain, nonatomic) IndoorSensorSingle *single; // @synthesize single=_single;
@property(nonatomic) __weak id <IndoorSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) int step; // @synthesize step=_step;
- (void).cxx_destruct;
- (void)dealloc;
- (void)indoorSensor:(id)arg1 didUpdateHeading:(float)arg2;
- (void)indoorSensor:(id)arg1 didUpdatePressure:(float)arg2;
- (void)indoorSensor:(id)arg1 didUpdateOrientation:(float)arg2;
- (void)indoorSensor:(id)arg1 didUpdateStep:(int)arg2;
@property(readonly, nonatomic) NSString *debugString;
- (int)stopSensor;
- (int)startSensor;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

