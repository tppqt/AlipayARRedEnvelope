//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QualityModelMgr : NSObject
{
    _Bool _inited;
    NSMutableDictionary *_startRpcTrafficDict;
    double _trafficSpeed;
    double _westSpeed;
    double _bw_ns_est;
    double _bw_est;
    NSMutableDictionary *_qosDictionary;
    double _rtoA;
    double _rtoB;
    double _rtoC;
    double _spdA;
    double _spdB;
    double _spdC;
    long long _lastRecordTime;
    double _lastLevel;
}

+ (id)shareInstance;
@property(nonatomic) double lastLevel; // @synthesize lastLevel=_lastLevel;
@property(nonatomic) long long lastRecordTime; // @synthesize lastRecordTime=_lastRecordTime;
@property(nonatomic) double spdC; // @synthesize spdC=_spdC;
@property(nonatomic) double spdB; // @synthesize spdB=_spdB;
@property(nonatomic) double spdA; // @synthesize spdA=_spdA;
@property(nonatomic) double rtoC; // @synthesize rtoC=_rtoC;
@property(nonatomic) double rtoB; // @synthesize rtoB=_rtoB;
@property(nonatomic) double rtoA; // @synthesize rtoA=_rtoA;
@property(retain) NSMutableDictionary *qosDictionary; // @synthesize qosDictionary=_qosDictionary;
@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
@property(nonatomic) double bw_est; // @synthesize bw_est=_bw_est;
@property(nonatomic) double bw_ns_est; // @synthesize bw_ns_est=_bw_ns_est;
@property(nonatomic) double westSpeed; // @synthesize westSpeed=_westSpeed;
@property(nonatomic) double trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(retain, nonatomic) NSMutableDictionary *startRpcTrafficDict; // @synthesize startRpcTrafficDict=_startRpcTrafficDict;
- (void).cxx_destruct;
- (int)getQosLevel;
- (unsigned int)getCurrentTotalTraffic;
- (double)calculateWestwoodSpeed:(double)arg1;
- (void)calculateRpcTraffic:(unsigned long long)arg1 timeInterval:(double)arg2;
- (void)saveStartRpcTraffic:(unsigned long long)arg1;
- (void)setQosConfig:(id)arg1;
- (id)init;

@end

