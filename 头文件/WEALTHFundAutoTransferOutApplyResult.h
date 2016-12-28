//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonResult.h"

@class NSDictionary, NSString, WEALTHFundAutoTransferOutRuleSetResult, WEALTHRuleListResult;

@interface WEALTHFundAutoTransferOutApplyResult : WEALTHCommonResult
{
    _Bool _canAddRule;
    NSString *_passwordType;
    NSString *_forwardTo;
    WEALTHFundAutoTransferOutRuleSetResult *_fundAutoTransferRuleSetResult;
    WEALTHRuleListResult *_ruleListResult;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WEALTHRuleListResult *ruleListResult; // @synthesize ruleListResult=_ruleListResult;
@property(retain, nonatomic) WEALTHFundAutoTransferOutRuleSetResult *fundAutoTransferRuleSetResult; // @synthesize fundAutoTransferRuleSetResult=_fundAutoTransferRuleSetResult;
@property(retain, nonatomic) NSString *forwardTo; // @synthesize forwardTo=_forwardTo;
@property(nonatomic) _Bool canAddRule; // @synthesize canAddRule=_canAddRule;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
- (void).cxx_destruct;

@end

