//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface CLMessageManager : NSObject
{
    _Bool _isRPCRunning;
    _Bool _hasJoinedDefault;
    double _lastEnterForground;
    double _lastUpdateRPC;
    unsigned long long _rpcInterval;
    NSTimer *_timerRPC;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasJoinedDefault; // @synthesize hasJoinedDefault=_hasJoinedDefault;
@property(nonatomic) _Bool isRPCRunning; // @synthesize isRPCRunning=_isRPCRunning;
@property(retain, nonatomic) NSTimer *timerRPC; // @synthesize timerRPC=_timerRPC;
@property(nonatomic) unsigned long long rpcInterval; // @synthesize rpcInterval=_rpcInterval;
@property(nonatomic) double lastUpdateRPC; // @synthesize lastUpdateRPC=_lastUpdateRPC;
@property(nonatomic) double lastEnterForground; // @synthesize lastEnterForground=_lastEnterForground;
- (void).cxx_destruct;
- (void)saveHasJoined:(_Bool)arg1;
- (id)cacheKeyForHasJoined;
- (id)queryMessages:(id)arg1;
- (void)requestDataCompletion:(CDUnknownBlockType)arg1;
- (id)parseMessages:(id)arg1;
- (_Bool)parseHasJoined:(id)arg1;
- (void)mockOneMessageBox:(id)arg1;
- (void)insertContactToDB:(id)arg1;
- (void)updateSocialUI:(id)arg1;
- (void)onTimerAction;
- (void)queryForEnterForeground;
- (void)queryForLogin;
- (void)stopTimer;
- (void)startTimer;
- (void)resetTimer;
- (unsigned long long)updateRPCINterval;
- (void)onWillEnterForegroundLoginNotification:(id)arg1;
- (void)onDidEnterBackgroundNotification:(id)arg1;
- (void)onLogOutNotification:(id)arg1;
- (void)onLoginNotification:(id)arg1;
- (void)noDisturb:(_Bool)arg1 forClub:(id)arg2;
- (void)pinOneMessageBox:(_Bool)arg1 clubInfo:(id)arg2;
- (void)removeRedReminder:(id)arg1;
- (void)didQuitOrUnSubscribedClub:(id)arg1;
- (void)didJoinOrSubscribedClub:(id)arg1;
- (void)stop;
- (void)start;
- (id)_init;

@end

