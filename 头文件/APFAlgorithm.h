//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APFAlgorithm : NSObject
{
    long long _differ;
    double _eyeHwratio;
    long long _blink;
    long long _mouth;
    long long _facesize;
    long long _yunqiQuality;
    long long _yawWeight;
    long long _pitchWeight;
    long long _minpose;
    long long _disWeight;
}

+ (id)defaultConfig;
@property(nonatomic) long long disWeight; // @synthesize disWeight=_disWeight;
@property(nonatomic) long long minpose; // @synthesize minpose=_minpose;
@property(nonatomic) long long pitchWeight; // @synthesize pitchWeight=_pitchWeight;
@property(nonatomic) long long yawWeight; // @synthesize yawWeight=_yawWeight;
@property(nonatomic) long long yunqiQuality; // @synthesize yunqiQuality=_yunqiQuality;
@property(nonatomic) long long facesize; // @synthesize facesize=_facesize;
@property(nonatomic) long long mouth; // @synthesize mouth=_mouth;
@property(nonatomic) long long blink; // @synthesize blink=_blink;
@property(nonatomic) double eyeHwratio; // @synthesize eyeHwratio=_eyeHwratio;
@property(nonatomic) long long differ; // @synthesize differ=_differ;

@end

