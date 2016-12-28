//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SyncInfoDelegate.h"

@class NSString, NSURL;

@interface AMNetworkService : NSObject <SyncInfoDelegate>
{
    NSURL *_URL;
}

+ (id)massSvrInfo:(id)arg1;
+ (void)refreshMASSIpNeedStorage:(_Bool)arg1;
+ (void)refreshMASSIp;
+ (void)refreshShortHost;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshSyncLan;
- (void)languageSettingDidChange:(id)arg1;
- (void)syncReLoginNotification:(id)arg1;
- (void)reLoginNotice;
- (void)direct2mmtp;
- (void)mmtp2Direct;
- (void)AMRPCSwitchChange:(id)arg1;
- (void)sendUnBindUser;
- (id)shortLinkCookie;
- (_Bool)isUserLogin;
- (id)userId;
- (void)sendBindUser;
- (void)userOffline:(id)arg1;
- (id)curTime;
- (id)appState;
- (void)logWithLoginAction:(id)arg1;
- (void)onDidExit:(id)arg1;
- (void)onLoginSuccess:(id)arg1;
- (void)logPushDispatch:(id)arg1 msg:(id)arg2 bizKey:(id)arg3;
- (_Bool)hasCategoryPara:(id)arg1;
- (long long)dispatchSyncPush:(id)arg1;
- (void)observerSyncPushData:(id)arg1;
- (void)massInit;
- (void)syncPushInit;
- (void)syncInit;
- (void)refreshDNSHost;
- (void)updateShortHost:(id)arg1;
- (void)startAMNet;
- (void)accessInit;
- (void)addLoginEventObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

