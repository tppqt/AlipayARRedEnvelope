//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MMTPInitInfoStorage : NSObject
{
    _Bool _prisonBreak;
    _Bool _compose;
    NSString *_network;
    NSString *_utdid;
    NSString *_mobileSystem;
    NSString *_systemVersion;
    NSString *_publishChannel;
    NSString *_productID;
    NSString *_productVersion;
    NSString *_brand;
    NSString *_model;
    NSString *_clientType;
    NSString *_clientPosition;
    NSString *_appType;
    NSString *_deviceToken;
    NSString *_imei;
    NSString *_imsi;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_isPushEnable;
    NSString *_language;
    NSMutableArray *_channelExtbytes;
    NSMutableArray *_channelExtParams;
    NSString *_apdidInFile;
    long long _switchIncrement;
    NSString *_apdid;
    NSString *_cachesessionid;
    unsigned long long _settingversion;
    NSString *_userid;
    unsigned long long _appstatus;
    unsigned long long _networkenum;
    unsigned long long _mobilesystemenum;
    long long _latLonTime;
}

+ (id)shareInstance;
@property(nonatomic, getter=isCompose) _Bool compose; // @synthesize compose=_compose;
@property(nonatomic) long long latLonTime; // @synthesize latLonTime=_latLonTime;
@property(nonatomic) unsigned long long mobilesystemenum; // @synthesize mobilesystemenum=_mobilesystemenum;
@property(nonatomic) unsigned long long networkenum; // @synthesize networkenum=_networkenum;
@property(nonatomic) unsigned long long appstatus; // @synthesize appstatus=_appstatus;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(nonatomic) unsigned long long settingversion; // @synthesize settingversion=_settingversion;
@property(retain, nonatomic) NSString *cachesessionid; // @synthesize cachesessionid=_cachesessionid;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(nonatomic) long long switchIncrement; // @synthesize switchIncrement=_switchIncrement;
@property(retain, nonatomic) NSString *apdidInFile; // @synthesize apdidInFile=_apdidInFile;
@property(retain, nonatomic) NSMutableArray *channelExtParams; // @synthesize channelExtParams=_channelExtParams;
@property(retain, nonatomic) NSMutableArray *channelExtbytes; // @synthesize channelExtbytes=_channelExtbytes;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *isPushEnable; // @synthesize isPushEnable=_isPushEnable;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool prisonBreak; // @synthesize prisonBreak=_prisonBreak;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *clientPosition; // @synthesize clientPosition=_clientPosition;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *publishChannel; // @synthesize publishChannel=_publishChannel;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *mobileSystem; // @synthesize mobileSystem=_mobileSystem;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (id)isOnlyExistInOldExtParams:(id)arg1;
- (id)channelExtParamsChanged:(long long)arg1 withParam:(id)arg2;
- (_Bool)isLatLonTimeNotChanged:(long long)arg1;
- (_Bool)isMobilesystemnumNotChanged:(unsigned long long)arg1;
- (_Bool)isNetworkenumNotChanged:(unsigned long long)arg1;
- (_Bool)isAppstatusNotChanged:(unsigned long long)arg1;
- (_Bool)isUseridNotChanged:(id)arg1;
- (_Bool)isSettingversionNotChanged:(unsigned long long)arg1;
- (_Bool)isCachesessionidNotChanged:(id)arg1;
- (_Bool)isApdidNotChanged:(id)arg1;
- (_Bool)isChannelExtbytesNotChanged:(long long)arg1 withData:(id)arg2;
- (_Bool)isLanguageNotChanged:(id)arg1;
- (_Bool)isIsPushEnableNotChanged:(id)arg1;
- (_Bool)isLongitudeNotChanged:(id)arg1;
- (_Bool)isLatitudeNotChanged:(id)arg1;
- (_Bool)isImsiNotChanged:(id)arg1;
- (_Bool)isImeiNotChanged:(id)arg1;
- (_Bool)isDeviceTokenNotChanged:(id)arg1;
- (_Bool)isAppTypeNotChanged:(id)arg1;
- (_Bool)isClientPositionNotChanged:(id)arg1;
- (_Bool)isClientTypeNotChanged:(id)arg1;
- (_Bool)isModelNotChanged:(id)arg1;
- (_Bool)isBrandNotChanged:(id)arg1;
- (_Bool)isProductVersionNotChanged:(id)arg1;
- (_Bool)isProductIDNotChanged:(id)arg1;
- (_Bool)isPublishChannelNotChanged:(id)arg1;
- (_Bool)isSystemVersionNotChanged:(id)arg1;
- (_Bool)isUtdidNotChanged:(id)arg1;
- (_Bool)numNotChanged:(unsigned long long)arg1 with:(unsigned long long)arg2;
- (_Bool)strNotChanged:(id)arg1 with:(id)arg2;
- (void)setComposeSwitch:(_Bool)arg1;
- (void)saveInitIncrementSwitch:(_Bool)arg1;
- (void)saveInitDataToFile:(id)arg1;
- (id)init;

@end

