//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTLongLinkAsyncDelegate.h"
#import "DTLonglinkDataDispatchDelegate.h"

@class NSString, NSTimer;

@interface DTLongLinkControl : NSObject <DTLongLinkAsyncDelegate, DTLonglinkDataDispatchDelegate>
{
    _Bool _syncHasIdle;
    _Bool _isSpdy;
    _Bool _isValid;
    int _switchTimeforWifi;
    int _switchTimeforWlan;
    NSString *_language;
    id <SyncInfoDelegate> _infoDelegate;
    NSString *_isActivate;
    NSTimer *_ackTime;
    NSString *_isConnected;
    NSTimer *_switchTimer;
    long long _overtimeTimer;
}

+ (id)sharedInstance;
+ (void)doMTLoadWork;
@property(nonatomic) long long overtimeTimer; // @synthesize overtimeTimer=_overtimeTimer;
@property(retain, nonatomic) NSTimer *switchTimer; // @synthesize switchTimer=_switchTimer;
@property(nonatomic) int switchTimeforWlan; // @synthesize switchTimeforWlan=_switchTimeforWlan;
@property(nonatomic) int switchTimeforWifi; // @synthesize switchTimeforWifi=_switchTimeforWifi;
@property(retain, nonatomic) NSString *isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSTimer *ackTime; // @synthesize ackTime=_ackTime;
@property(retain, nonatomic) NSString *isActivate; // @synthesize isActivate=_isActivate;
@property(nonatomic) _Bool isSpdy; // @synthesize isSpdy=_isSpdy;
@property(nonatomic) __weak id <SyncInfoDelegate> infoDelegate; // @synthesize infoDelegate=_infoDelegate;
@property(nonatomic) _Bool syncHasIdle; // @synthesize syncHasIdle=_syncHasIdle;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (void)setSyncConfig:(id)arg1;
- (void)setSyncSendAllBiz:(_Bool)arg1;
- (void)setSyncPollTime:(id)arg1;
- (void)setShortLinkOpen:(_Bool)arg1;
- (void)setShortLinkList:(id)arg1;
- (void)syncChangeDataChannel;
- (void)logSubType:(id)arg1 connTime:(id)arg2;
- (void)logSubType:(id)arg1 error:(id)arg2;
- (void)deleteSwitchTimer;
- (void)createSwitchTimer;
- (void)deleteTimer;
- (void)createTimer;
- (void)acitveInitResponse;
- (void)spdyAckResponse;
- (void)startHeartWithSocket;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 needResponse:(_Bool)arg4;
- (void)closeAndActive;
- (void)switchConnect;
- (void)startLongLinkLimitFlowFinish;
- (void)limitFlowWithClose;
- (void)closeWithTimeOut;
- (void)didDisconnect;
- (void)spdyConnect;
- (void)spdyTimeToFail;
- (void)spdyError;
- (void)willDisconnectWithError:(id)arg1;
- (void)didConnect;
- (void)didReceiveData:(id)arg1;
- (void)closeAsyncSocketAndResetData;
- (void)closeAsyncSocket;
- (void)sendUnBindUser;
- (void)dispatchCacheMessageAllUserResgBiz;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (void)updateUserId:(id)arg1 sessionId:(id)arg2;
- (void)sendBindUser:(id)arg1 sessionId:(id)arg2;
- (void)createAsyncSocket;
- (id)getCdid;
- (void)setDid:(id)arg1 tid:(id)arg2;
- (void)setDirectAsyncURL:(id)arg1 port:(long long)arg2 appName:(id)arg3 appVer:(id)arg4;
- (void)reachabilityNetChangedCtl:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)resetdb;
- (void)syncIdle;
- (id)init;
- (void)writeData_Mate:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 needResponse:(_Bool)arg4;
- (void)didReceiveData_Mate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

