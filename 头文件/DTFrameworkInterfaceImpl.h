//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTFrameworkInterface.h"

@class DTBootLoaderImpl, UIWindow;

@interface DTFrameworkInterfaceImpl : DTFrameworkInterface
{
    DTBootLoaderImpl *_bootLoader;
    _Bool _isBackgroundFetchWhenProcessLive;
    double _lastNetworkNeedAliveNotificationTimestamp;
    CDUnknownBlockType _backgroundFetchCompletionHandler;
    long long _spProcessPhase;
    UIWindow *_splashScreenWindow;
}

@property(retain, nonatomic) UIWindow *splashScreenWindow; // @synthesize splashScreenWindow=_splashScreenWindow;
@property(nonatomic) long long spProcessPhase; // @synthesize spProcessPhase=_spProcessPhase;
- (void).cxx_destruct;
- (void)initAntUI;
- (unsigned long long)computeBackgroundFetchResult;
- (void)callBackgroundFetchCompletionHandler;
- (void)stopBackgroundFetchAndPostNotification;
- (void)initNetworkNeedAliveInBackgroundObserver;
- (void)initBackgroundFetch;
- (void)refreshBackgroundFetchConfig;
- (void)configBackgroundFetch;
- (void)logBackgroundFetch;
- (_Bool)isBackgroundFetchEnabled;
- (long long)getBackgroundFetchDelaySeconds;
- (long long)appVersionCompare:(id)arg1 version:(id)arg2 number:(long long)arg3;
- (void)checkInstallationStatus;
- (long long)handleOpenURL:(id)arg1 newURL:(id *)arg2 convertForRC:(_Bool *)arg3;
- (void)onSafePayFinished;
- (_Bool)handleSafePayScheme:(id)arg1;
- (_Bool)isSafePayScheme:(id)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (long long)applicationWillEnterForeground:(id)arg1;
- (long long)applicationWillTerminate:(id)arg1;
- (long long)applicationDidBecomeActive:(id)arg1;
- (long long)application:(id)arg1 openURL:(id)arg2 newURL:(id *)arg3 sourceApplication:(id)arg4 annotation:(id)arg5;
- (long long)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 afterDidFinishLaunchingWithOptions:(id)arg2;
- (long long)application:(id)arg1 handleDidFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 beforeDidFinishLaunchingWithOptions:(id)arg2;
- (void)doDismiss;
- (void)splashScreenDidDismiss;
- (void)notifySplashScreenDismiss;
- (id)navigationBarLoadingViewClass;
- (id)defaultBackgroundColor;
- (_Bool)shouldAutoconvertSchemesForRCVersion:(id *)arg1;
- (_Bool)suspendLazyloadBandages;
- (_Bool)shouldLogStartupConsumption;
- (_Bool)shouldLogReportActive;
- (id)schemeHandlerClasses;
- (id)servicesAllConfiguration;
- (id)servicesMapConfiguration;
- (id)servicesConfiguration;
- (id)applicationsConfiguration;
- (_Bool)isRCVersion;
- (id)bootLoader;
- (id)init;

@end

