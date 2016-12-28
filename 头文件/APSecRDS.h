//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliSecXDeviceSensorInfo, NSString, RDSBehaviorManager, RDSSecurityCheck;

@interface APSecRDS : NSObject
{
    _Bool _rdsPbSwitch;
    NSString *_apdid;
    NSString *_umid;
    NSString *_tid;
    NSString *_utdid;
    NSString *_sensorTime;
    NSString *_version_flag;
    NSString *_signatureName;
    AliSecXDeviceSensorInfo *_sensorInfo;
    RDSBehaviorManager *_manager;
    NSString *_networkType;
    RDSSecurityCheck *_securityCheck;
}

@property(retain, nonatomic) RDSSecurityCheck *securityCheck; // @synthesize securityCheck=_securityCheck;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) RDSBehaviorManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) AliSecXDeviceSensorInfo *sensorInfo; // @synthesize sensorInfo=_sensorInfo;
@property(nonatomic) _Bool rdsPbSwitch; // @synthesize rdsPbSwitch=_rdsPbSwitch;
@property(retain, nonatomic) NSString *signatureName; // @synthesize signatureName=_signatureName;
@property(retain, nonatomic) NSString *version_flag; // @synthesize version_flag=_version_flag;
@property(retain, nonatomic) NSString *sensorTime; // @synthesize sensorTime=_sensorTime;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *umid; // @synthesize umid=_umid;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
- (void).cxx_destruct;
- (id)encryptAndZipAndSign:(id)arg1;
- (id)encryptAndZipAndSignRdsV3;
- (id)encryptAndZipAndSignRdsV2;
- (id)encryptAndZipAndSignRds;
- (id)onPageEndZipDataWithView:(id)arg1 user:(id)arg2;
- (void)fetchApdid;
- (id)getAccessSubtype;
- (id)encryptAndSign:(id)arg1;
- (id)getPortalDataPB;
- (id)getPortalData;
- (id)verifyNotnil:(id)arg1;
- (id)checkJB;
- (id)stringFromInteger:(long long)arg1;
- (id)stringFromDouble:(double)arg1;
- (id)stringFromInt:(int)arg1;
- (void)onTouchScreenWithView:(id)arg1 ctrl:(id)arg2 point:(struct CGPoint)arg3;
- (void)onLostFocusWithView:(id)arg1 ctrl:(id)arg2;
- (void)onGetFocusWithView:(id)arg1 ctrl:(id)arg2;
- (void)onKeyDownWithView:(id)arg1 ctrl:(id)arg2 keyCode:(id)arg3;
- (void)onControlClickWithView:(id)arg1 ctrl:(id)arg2;
- (id)onPageEndWithView:(id)arg1 user:(id)arg2;
- (void)dynamicCreate;
- (void)onPageWithView:(id)arg1 args:(id)arg2;
- (id)init;

@end

