//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class APCoreLocationCache, CLLocation, CLLocationManager, DTRpcAsyncCaller, NSError, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString;

@interface LBSLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _success;
    _Bool _locatingErrorOnWifiRPC;
    APCoreLocationCache *_cache;
    CLLocationManager *_appleLocationManager;
    NSOperationQueue *_operationQueue;
    CLLocation *_lastLocation;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_semaphore> *_authLocatingSemaphore;
    NSString *_appKey;
    DTRpcAsyncCaller *_wifiRpc;
    double _currentAccuracy;
    double _startTime;
    NSLock *_writeLock;
    NSOperationQueue *_reveseOperationQueue;
    NSOperationQueue *_reGeoCodeOperationQueue;
    NSOperationQueue *_reGeoCodeToCityOperationQueue;
    NSOperationQueue *_reGeoCodeAllOperationQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSObject<OS_dispatch_queue> *_countryChangedQueue;
    NSLock *_countryChangedLock;
    NSLock *_errorLock;
    double _lastErrorTime;
    NSMutableArray *_bestLocations;
}

+ (id)locationToDict:(id)arg1;
+ (void)locatingWithDesiredAccuracy:(double)arg1 bizType:(id)arg2 cacheAvaliableTimeInterval:(double)arg3 timeOut:(double)arg4 reGeoCodeType:(long long)arg5 onFinishedLocating:(CDUnknownBlockType)arg6 onFinishedReversingGeocode:(CDUnknownBlockType)arg7;
+ (void)locationWithRequestBlock:(CDUnknownBlockType)arg1 onFinishedLocating:(CDUnknownBlockType)arg2 onFinishedReversingGeocode:(CDUnknownBlockType)arg3;
+ (void)locationWithRequestBlock:(CDUnknownBlockType)arg1 onFinishedReversingGeocode:(CDUnknownBlockType)arg2;
+ (void)privateLocatingWithDesiredAccuracy:(double)arg1 bizType:(id)arg2 cacheAvaliableTimeInterval:(double)arg3 timeOut:(double)arg4 onFinishedLocating:(CDUnknownBlockType)arg5;
+ (void)locationWithRequestBlock:(CDUnknownBlockType)arg1 onFinishedLocating:(CDUnknownBlockType)arg2;
+ (id)converToAPLBSLocationWithCLLocation:(id)arg1;
+ (void)cancelWithBizType:(id)arg1;
+ (void)stop;
+ (id)loadLastLocationData;
+ (id)defaultCoreLocationManager;
+ (void)hookRequestWithDelegate:(id)arg1 instance:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NSMutableArray *bestLocations; // @synthesize bestLocations=_bestLocations;
@property(nonatomic) double lastErrorTime; // @synthesize lastErrorTime=_lastErrorTime;
@property(nonatomic) _Bool locatingErrorOnWifiRPC; // @synthesize locatingErrorOnWifiRPC=_locatingErrorOnWifiRPC;
@property(retain, nonatomic) NSLock *errorLock; // @synthesize errorLock=_errorLock;
@property(retain, nonatomic) NSLock *countryChangedLock; // @synthesize countryChangedLock=_countryChangedLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *countryChangedQueue; // @synthesize countryChangedQueue=_countryChangedQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) NSOperationQueue *reGeoCodeAllOperationQueue; // @synthesize reGeoCodeAllOperationQueue=_reGeoCodeAllOperationQueue;
@property(retain, nonatomic) NSOperationQueue *reGeoCodeToCityOperationQueue; // @synthesize reGeoCodeToCityOperationQueue=_reGeoCodeToCityOperationQueue;
@property(retain, nonatomic) NSOperationQueue *reGeoCodeOperationQueue; // @synthesize reGeoCodeOperationQueue=_reGeoCodeOperationQueue;
@property(retain, nonatomic) NSOperationQueue *reveseOperationQueue; // @synthesize reveseOperationQueue=_reveseOperationQueue;
@property(retain, nonatomic) NSLock *writeLock; // @synthesize writeLock=_writeLock;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double currentAccuracy; // @synthesize currentAccuracy=_currentAccuracy;
@property(retain, nonatomic) DTRpcAsyncCaller *wifiRpc; // @synthesize wifiRpc=_wifiRpc;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *authLocatingSemaphore; // @synthesize authLocatingSemaphore=_authLocatingSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CLLocationManager *appleLocationManager; // @synthesize appleLocationManager=_appleLocationManager;
@property(retain, nonatomic) APCoreLocationCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)addBehaviorLocationPointWithSuccess:(_Bool)arg1 usingCache:(_Bool)arg2 controllerName:(id)arg3 location:(id)arg4 errorCode:(long long)arg5 locatingStartTime:(double)arg6 regeoStartTime:(double)arg7 regeoUsingCache:(_Bool)arg8;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)timeOutAction;
- (id)constructLBSAddressInfo:(id)arg1 type:(long long)arg2 location:(id)arg3;
- (void)reGeoCodeWithType:(long long)arg1 location:(id)arg2 regeoRequest:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)reGeoCodeWithLocation:(id)arg1 cacheAvaliableTimeInterval:(double)arg2 reGeoCodeType:(long long)arg3 callBack:(CDUnknownBlockType)arg4;
- (id)appendExtendInfo:(id)arg1;
- (id)appendExtendInfo:(id)arg1 offset:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

