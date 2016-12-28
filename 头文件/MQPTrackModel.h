//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableString, NSString;

@interface MQPTrackModel : NSObject <NSCoding>
{
    NSString *_logId;
    NSString *_logTime;
    NSString *_logTimeInterval;
    NSString *_orderStr;
    NSString *_orderInfo;
    NSString *_appInfo;
    NSString *_sdkInfo;
    NSString *_tidInfo;
    NSString *_devInfo;
    NSString *_payResult;
    NSMutableString *_errorTrack;
    NSMutableString *_normalTrack;
    NSMutableString *_tplTrack;
    NSMutableString *_perfTrack;
    NSMutableString *_countTrack;
}

@property(copy, nonatomic) NSMutableString *countTrack; // @synthesize countTrack=_countTrack;
@property(copy, nonatomic) NSMutableString *perfTrack; // @synthesize perfTrack=_perfTrack;
@property(copy, nonatomic) NSMutableString *tplTrack; // @synthesize tplTrack=_tplTrack;
@property(copy, nonatomic) NSMutableString *normalTrack; // @synthesize normalTrack=_normalTrack;
@property(copy, nonatomic) NSMutableString *errorTrack; // @synthesize errorTrack=_errorTrack;
@property(copy, nonatomic) NSString *payResult; // @synthesize payResult=_payResult;
@property(copy, nonatomic) NSString *devInfo; // @synthesize devInfo=_devInfo;
@property(copy, nonatomic) NSString *tidInfo; // @synthesize tidInfo=_tidInfo;
@property(copy, nonatomic) NSString *sdkInfo; // @synthesize sdkInfo=_sdkInfo;
@property(copy, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(copy, nonatomic) NSString *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(copy, nonatomic) NSString *orderStr; // @synthesize orderStr=_orderStr;
@property(copy, nonatomic) NSString *logTimeInterval; // @synthesize logTimeInterval=_logTimeInterval;
@property(copy, nonatomic) NSString *logTime; // @synthesize logTime=_logTime;
@property(copy, nonatomic) NSString *logId; // @synthesize logId=_logId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fetchDevInfo;
- (id)fetchTidInfo;
- (id)fetchSdkInfo;
- (id)fetchAppInfo;
- (id)fetchOrderInfo;
- (id)storeToLocal;
- (_Bool)hasExpired;
- (id)getTrackLogData;
- (id)description;
- (void)appendTracks:(id)arg1 withTrack:(id)arg2;
- (void)addCountTrack:(id)arg1;
- (void)addPerfTrack:(id)arg1;
- (void)addTplTrack:(id)arg1;
- (void)addNormalTrack:(id)arg1;
- (void)addErrorTrack:(id)arg1;
- (void)addResultTrack:(id)arg1;
- (void)onTrackResult:(id)arg1;
- (void)onTrackBiz:(id)arg1 api:(id)arg2 desc:(id)arg3;
- (void)onTrackEnd:(id)arg1;
- (id)onTrackBiz:(id)arg1 andProgress:(id)arg2;
- (void)onTrackWithView:(id)arg1 actType:(id)arg2 actName:(id)arg3 nextView:(id)arg4;
- (void)onTrackTpl:(id)arg1;
- (void)onTrackEvent:(id)arg1;
- (void)onTrackError:(int)arg1 code:(id)arg2 error:(id)arg3;
- (void)onTrackCrashError:(id)arg1 error:(id)arg2;
- (void)onTrackBizError:(id)arg1 error:(id)arg2;
- (void)onTrackNetError:(id)arg1 error:(id)arg2;
- (void)onTrackWarn:(id)arg1 error:(id)arg2;
- (void)onTrackData:(id)arg1 error:(id)arg2;
- (void)doResignActive:(id)arg1;
- (void)dealloc;
- (id)initWithOrderInfo:(id)arg1;
- (id)initWithBizType:(id)arg1;

@end

