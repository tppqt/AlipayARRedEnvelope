//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQPBaseService.h"

@class ImmPayEventHandler;

@interface ImmersionPayService : MQPBaseService
{
    ImmPayEventHandler *_eventHandler;
}

@property(retain, nonatomic) ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)switchToAlipay;
- (void)switchToWapPayWithUrl:(id)arg1;
- (void)closeImmersionPay:(id)arg1;
- (void)preHandleMessage;
- (void)payWithAction:(id)arg1 andOrder:(id)arg2;
- (void)handleMessage:(id)arg1;
- (void)exit;
- (void)shouldExitCashier:(id)arg1;
- (void)doExit;
- (void)doReset;
- (void)reset;
- (void)stop;
- (_Bool)startWithOptions:(id)arg1;
- (id)getEventHandler;
- (void)cleanService;
- (void)dealloc;
- (id)init;

@end

