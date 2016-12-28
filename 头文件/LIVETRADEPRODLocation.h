//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface LIVETRADEPRODLocation : NSObject
{
    double _longitude;
    double _latitude;
    double _altitude;
    double _accuracy;
    double _speed;
    double _direction;
    NSArray *_bluetoothDevices;
    NSArray *_gsmInfos;
    NSArray *_wifiInfos;
    NSArray *_cdmaInfos;
    NSDictionary *_extraInfos;
}

+ (Class)extraInfosElementClass;
+ (Class)cdmaInfosElementClass;
+ (Class)wifiInfosElementClass;
+ (Class)gsmInfosElementClass;
+ (Class)bluetoothDevicesElementClass;
@property(retain, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(retain, nonatomic) NSArray *cdmaInfos; // @synthesize cdmaInfos=_cdmaInfos;
@property(retain, nonatomic) NSArray *wifiInfos; // @synthesize wifiInfos=_wifiInfos;
@property(retain, nonatomic) NSArray *gsmInfos; // @synthesize gsmInfos=_gsmInfos;
@property(retain, nonatomic) NSArray *bluetoothDevices; // @synthesize bluetoothDevices=_bluetoothDevices;
@property(nonatomic) double direction; // @synthesize direction=_direction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;

@end

