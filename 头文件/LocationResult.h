//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LocationResult : NSObject
{
    int _type;
    int _floorId;
    float _accuracy;
    float _orientation;
    float _stepLength;
    float _zeroAngle;
    float _otherLeft;
    NSString *_buildingId;
    double _longitude;
    double _latitude;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float otherLeft; // @synthesize otherLeft=_otherLeft;
@property(nonatomic) float zeroAngle; // @synthesize zeroAngle=_zeroAngle;
@property(nonatomic) float stepLength; // @synthesize stepLength=_stepLength;
@property(nonatomic) float orientation; // @synthesize orientation=_orientation;
@property(nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) int floorId; // @synthesize floorId=_floorId;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToResult:(id)arg1;
- (_Bool)isValid;
- (_Bool)isValidLongitudeLatitude;
- (_Bool)isValidFloorId;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(double)arg1 latitude:(double)arg2;
- (id)initWithValue:(int)arg1 longitude:(double)arg2 latitude:(double)arg3;

@end

