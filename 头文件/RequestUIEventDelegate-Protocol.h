//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSException, NSString;

@protocol RequestUIEventDelegate <NSObject>
- (void)onHandleException:(NSException *)arg1;
- (void)onFetchUniqueIDAndSendWave;
- (void)onDisplayAutopaySucc:(id)arg1;
- (void)onFinishedAutoPay:(id)arg1;
- (void)onFinishedSafePay:(struct MQPResult *)arg1;
- (void)onStartSafePay;
- (void)onDidCreateTrade:(id)arg1;
- (void)onDidObtainDynamicId:(NSString *)arg1;
- (void)onStartObtainDynamicId;

@optional
- (void)onStopAnimation;
@end

