//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTService.h"
#import "NBMonitorDelegate.h"

@class DTRpcAsyncCaller, H5EntranceCheck, H5SsoLoginWithEntranceRPC, NSString;

@interface H5Service : NSObject <NBMonitorDelegate, DTService>
{
    DTRpcAsyncCaller *_fishingRpc;
    _Bool _hasStartPSDService;
    _Bool _isProxyWithUC;
    _Bool _isEnableDebugMode;
    int _controllerCount;
    H5EntranceCheck *_entranceCheck;
    H5SsoLoginWithEntranceRPC *_ssoLoginWithEntranceRPC;
    NSString *_userId;
}

+ (_Bool)isH5ApplicationURL:(id)arg1;
+ (id)createWebViewWithVC:(id)arg1 params:(id)arg2 JSApis:(id)arg3;
+ (id)createWebViewWithParams:(id)arg1 JSApis:(id)arg2;
+ (id)createWebViewController:(id)arg1 JSApis:(id)arg2 withDelegate:(id)arg3;
+ (id)sharedService;
@property(nonatomic) _Bool isEnableDebugMode; // @synthesize isEnableDebugMode=_isEnableDebugMode;
@property(nonatomic) _Bool isProxyWithUC; // @synthesize isProxyWithUC=_isProxyWithUC;
@property(nonatomic) _Bool hasStartPSDService; // @synthesize hasStartPSDService=_hasStartPSDService;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) H5SsoLoginWithEntranceRPC *ssoLoginWithEntranceRPC; // @synthesize ssoLoginWithEntranceRPC=_ssoLoginWithEntranceRPC;
@property(nonatomic) int controllerCount; // @synthesize controllerCount=_controllerCount;
@property(retain, nonatomic) H5EntranceCheck *entranceCheck; // @synthesize entranceCheck=_entranceCheck;
- (void).cxx_destruct;
- (void)handleJailBreak;
- (void)installApp:(id)arg1;
- (void)setHttpCacheSize;
- (void)monitor:(id)arg1 logWithLogId:(id)arg2 params:(id)arg3;
- (void)appVerify:(id)arg1;
- (void)removeSharedDataForKey:(id)arg1;
- (id)sharedDataForKey:(id)arg1;
- (void)setSharedData:(id)arg1 forkey:(id)arg2 writeToFile:(_Bool)arg3;
- (id)getApis:(id)arg1;
- (void)unregisterApi:(id)arg1;
- (void)unregisterApi:(id)arg1 Api:(id)arg2;
- (void)registerApi:(id)arg1 Apis:(id)arg2;
- (void)unregisterApiName:(id)arg1;
- (void)registerApis:(id)arg1;
- (id)createWebViewWithVC:(id)arg1 params:(id)arg2 JSApis:(id)arg3;
- (id)createWebViewWithParams:(id)arg1 JSApis:(id)arg2;
- (id)createWebViewController:(id)arg1 JSApis:(id)arg2 withDelegate:(id)arg3;
- (id)createH5Session:(id)arg1 JSApis:(id)arg2 withDelegate:(id)arg3 h5Mode:(int)arg4;
- (id)jsApiListForPublicId:(id)arg1;
- (id)inputBoxWhitelistForPublicId:(id)arg1;
- (id)sessions;
- (id)lastSession;
- (void)removeSession:(id)arg1;
- (void)resetUA;
- (void)decreaseControllerCount;
- (void)increaseControllerCount;
- (void)switchUserCookies:(id)arg1 logoutUserId:(id)arg2;
- (void)loginNotif:(id)arg1;
- (id)finalUrl:(id)arg1;
- (id)createH5Session:(id)arg1;
- (_Bool)isDebugMode;
- (void)setDebugMode:(_Bool)arg1;
- (void)registerLoginNotifications;
- (void)start;
- (void)configNBService;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

