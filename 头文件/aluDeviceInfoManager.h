//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface aluDeviceInfoManager : NSObject
{
    _Bool _isPrisonBreak;
    _Bool _isSimulator;
    _Bool _hasGotTid;
    NSString *_imsi;
    NSString *_imei;
    NSString *_tid;
    NSString *_screenWidth;
    NSString *_screenHigh;
    NSString *_screenPX;
    NSString *_host;
    NSString *_mobileBrand;
    NSString *_mobileModel;
    NSString *_machine;
    NSString *_clientPostion;
    NSString *_systemType;
    NSString *_systemVersion;
    NSString *_deviceModel;
    NSString *_netWorkType;
    NSString *_mcc;
    NSString *_mnc;
    NSString *_wifiMac;
    NSString *_wifiNoteName;
    NSString *_wifiActive;
    NSString *_lacId;
    NSString *_cellId;
    NSString *_ipAddress;
    NSString *_idfa;
    NSMutableDictionary *_coreMotionData;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasGotTid; // @synthesize hasGotTid=_hasGotTid;
@property(retain, nonatomic) NSMutableDictionary *coreMotionData; // @synthesize coreMotionData=_coreMotionData;
@property(retain, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(nonatomic) _Bool isSimulator; // @synthesize isSimulator=_isSimulator;
@property(nonatomic) _Bool isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(retain, nonatomic) NSString *lacId; // @synthesize lacId=_lacId;
@property(retain, nonatomic) NSString *wifiActive; // @synthesize wifiActive=_wifiActive;
@property(retain, nonatomic) NSString *wifiNoteName; // @synthesize wifiNoteName=_wifiNoteName;
@property(retain, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
@property(retain, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(retain, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *netWorkType; // @synthesize netWorkType=_netWorkType;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *clientPostion; // @synthesize clientPostion=_clientPostion;
@property(retain, nonatomic) NSString *machine; // @synthesize machine=_machine;
@property(retain, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(retain, nonatomic) NSString *mobileBrand; // @synthesize mobileBrand=_mobileBrand;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *screenPX; // @synthesize screenPX=_screenPX;
@property(retain, nonatomic) NSString *screenHigh; // @synthesize screenHigh=_screenHigh;
@property(retain, nonatomic) NSString *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
- (void).cxx_destruct;
- (id)monitorTraceIdForKey:(id)arg1;
- (id)doGetUmid;
@property(readonly, nonatomic) NSString *umid;
- (void)getTidAsync:(CDUnknownBlockType)arg1;
- (id)getTidSync;
- (void)setApdidTokenCookie:(id)arg1;
@property(readonly, nonatomic) NSString *apdidToken;
@property(readonly, nonatomic) NSString *apdid;
- (void)doInitSecureSDK;
- (void)initSecureSDK;
@property(readonly, nonatomic) NSString *utdid;
- (id)getIPAddresses;
- (id)init;

@end

