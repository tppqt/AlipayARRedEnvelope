//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHRiskFactor.h"

@class NSString, WEALTHBankCardForFixed;

@interface WEALTHAutoTransferRule : WEALTHRiskFactor
{
    NSString *_ruleId;
    NSString *_ruleType;
    NSString *_ruleSubType;
    NSString *_status;
    NSString *_amount;
    WEALTHBankCardForFixed *_bankCard;
    NSString *_day;
    NSString *_setDayForView;
    NSString *_setAmountForView;
    NSString *_setCardForView;
    NSString *_lastApplyTime;
    NSString *_lastApplyStatus;
    NSString *_lastArrivingTime;
    NSString *_nextApplyTime;
    NSString *_nextArrivingTime;
    NSString *_arrivingCardView;
    NSString *_setAmountView;
    NSString *_arrivingDayView;
    NSString *_lastExcuteStatusView;
}

@property(retain, nonatomic) NSString *lastExcuteStatusView; // @synthesize lastExcuteStatusView=_lastExcuteStatusView;
@property(retain, nonatomic) NSString *arrivingDayView; // @synthesize arrivingDayView=_arrivingDayView;
@property(retain, nonatomic) NSString *setAmountView; // @synthesize setAmountView=_setAmountView;
@property(retain, nonatomic) NSString *arrivingCardView; // @synthesize arrivingCardView=_arrivingCardView;
@property(retain, nonatomic) NSString *nextArrivingTime; // @synthesize nextArrivingTime=_nextArrivingTime;
@property(retain, nonatomic) NSString *nextApplyTime; // @synthesize nextApplyTime=_nextApplyTime;
@property(retain, nonatomic) NSString *lastArrivingTime; // @synthesize lastArrivingTime=_lastArrivingTime;
@property(retain, nonatomic) NSString *lastApplyStatus; // @synthesize lastApplyStatus=_lastApplyStatus;
@property(retain, nonatomic) NSString *lastApplyTime; // @synthesize lastApplyTime=_lastApplyTime;
@property(retain, nonatomic) NSString *setCardForView; // @synthesize setCardForView=_setCardForView;
@property(retain, nonatomic) NSString *setAmountForView; // @synthesize setAmountForView=_setAmountForView;
@property(retain, nonatomic) NSString *setDayForView; // @synthesize setDayForView=_setDayForView;
@property(retain, nonatomic) NSString *day; // @synthesize day=_day;
@property(retain, nonatomic) WEALTHBankCardForFixed *bankCard; // @synthesize bankCard=_bankCard;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *ruleSubType; // @synthesize ruleSubType=_ruleSubType;
@property(retain, nonatomic) NSString *ruleType; // @synthesize ruleType=_ruleType;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;

@end

