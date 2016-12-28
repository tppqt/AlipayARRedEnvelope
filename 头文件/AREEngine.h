//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMAttitude, CMMotionManager;

@interface AREEngine : NSObject
{
    CMMotionManager *_motionManager;
    CMAttitude *_refAttitude;
    double _arRotX;
    double _arRotZ;
    double _arPositionX;
    double _arPositionY;
    double _arPositionZ;
}

@property(nonatomic) double arPositionZ; // @synthesize arPositionZ=_arPositionZ;
@property(nonatomic) double arPositionY; // @synthesize arPositionY=_arPositionY;
@property(nonatomic) double arPositionX; // @synthesize arPositionX=_arPositionX;
@property(nonatomic) double arRotZ; // @synthesize arRotZ=_arRotZ;
@property(nonatomic) double arRotX; // @synthesize arRotX=_arRotX;
@property(retain, nonatomic) CMAttitude *refAttitude; // @synthesize refAttitude=_refAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)updateView:(id)arg1;
- (id)init;

@end

