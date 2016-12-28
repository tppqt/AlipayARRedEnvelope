//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SafePayDelegate.h"
#import "SonicWaveNFCHandler.h"

@class NSMutableArray, NSString, OPTimeOffsetHelper, OSPPayChannelModel, PollingQueryEngine;

@interface OnsitePayBizManager : NSObject <SonicWaveNFCHandler, SafePayDelegate>
{
    double _backupUniqueIDGotTime;
    NSString *_backupUniqueID;
    _Bool _backupIsWave;
    _Bool _backupHasOtpSeed;
    _Bool isWave;
    unsigned char hasOtpSeed;
    NSString *_dyidForQuery;
    _Bool _isStopQuery;
    NSMutableArray *historyUniqueIdArray;
    NSString *_payType;
    _Bool _getDyidRuning;
    _Bool _isPaying;
    NSString *uniqueID;
    NSString *payTradeNo;
    double uniqueIDGotTime;
    id <RequestUIEventDelegate> requestDelegate;
    double startActionTime;
    PollingQueryEngine *queryEngine;
    OPTimeOffsetHelper *_timeOffsetHelper;
    OSPPayChannelModel *_payChannelModel;
}

@property(nonatomic) _Bool isPaying; // @synthesize isPaying=_isPaying;
@property(nonatomic) _Bool getDyidRuning; // @synthesize getDyidRuning=_getDyidRuning;
@property(retain, nonatomic) OSPPayChannelModel *payChannelModel; // @synthesize payChannelModel=_payChannelModel;
@property(retain, nonatomic) OPTimeOffsetHelper *timeOffsetHelper; // @synthesize timeOffsetHelper=_timeOffsetHelper;
@property(retain, nonatomic) PollingQueryEngine *queryEngine; // @synthesize queryEngine;
@property(nonatomic) double startActionTime; // @synthesize startActionTime;
@property(nonatomic) unsigned char hasOtpSeed; // @synthesize hasOtpSeed;
@property(nonatomic) __weak id <RequestUIEventDelegate> requestDelegate; // @synthesize requestDelegate;
@property(nonatomic) double uniqueIDGotTime; // @synthesize uniqueIDGotTime;
@property(retain, nonatomic) NSString *payTradeNo; // @synthesize payTradeNo;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID;
- (void).cxx_destruct;
- (id)getPayType;
- (id)getQueryDyid;
- (_Bool)isBarcodeRuning;
- (void)creatLbsTrade:(id)arg1 userId:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)stopQuery;
- (void)doStartQueryWithDyid:(id)arg1;
- (void)startQueryWithDyid:(id)arg1;
- (void)dealloc;
- (void)onHeadsetOff;
- (void)onHeadsetOn;
- (void)onReceiveDataInfo:(id)arg1;
- (void)onReceiveDataFailed:(int)arg1;
- (void)onReceiveDataTimeout;
- (void)onDataReceived:(id)arg1;
- (void)onReceiveDataStarted;
- (void)onSendDataInfo:(id)arg1;
- (void)onSendDataFailed:(int)arg1;
- (void)onSendDataTimeout;
- (void)onSendDataStarted;
- (void)stopSendWave;
- (void)sendUniqueIDByWave:(id)arg1 iTimeoutSeconds:(int)arg2;
- (void)safepayDidFinishWithResult:(id)arg1;
- (void)callSafepayFast:(id)arg1 withPerfectFlag:(_Bool)arg2 type:(id)arg3;
- (void)fundAuthFreeze:(id)arg1 bizType:(id)arg2;
- (void)chooseVoucher:(id)arg1 outBizId:(id)arg2;
- (void)callConfirmSafepay:(id)arg1 type:(id)arg2;
- (void)autoPayOperationDidFinsih:(id)arg1 payType:(id)arg2;
- (void)displayAutopaySuccFinish:(id)arg1;
- (void)autoPay:(id)arg1 payType:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)onCreateFastPayAndAutoPayFinish:(id)arg1;
- (_Bool)hasUniqueIdInHistoryArray:(id)arg1;
- (void)addToUniqueIdArray:(id)arg1;
- (id)getTimeOffset;
- (id)getCurrentUserId;
- (void)initStartTimeOffset;
- (void)createTradeAndAutopay:(id)arg1 withID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)obtainOffLineBarcodeID;
- (id)obtainOffLineUniqueID;
- (void)obtainUniqueID;
- (id)initWithDelegate:(id)arg1 isBarcode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

