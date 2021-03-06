//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluSMSVerifyViewController.h"

@class NSString, aluRegisterBizModel;

@interface aluRegSMSVerifyViewController : aluSMSVerifyViewController
{
    double _beginTime;
    _Bool _uIRectEdgeTopFlag;
    NSString *_regToken;
    aluRegisterBizModel *_bizModel;
}

@property(retain, nonatomic) aluRegisterBizModel *bizModel; // @synthesize bizModel=_bizModel;
@property(retain, nonatomic) NSString *regToken; // @synthesize regToken=_regToken;
@property(nonatomic) _Bool uIRectEdgeTopFlag; // @synthesize uIRectEdgeTopFlag=_uIRectEdgeTopFlag;
- (void).cxx_destruct;
- (id)nextStepButton;
- (id)viewController;
- (void)monitorPoint_smsVerifyBehavior:(id)arg1 timeCost:(double)arg2;
- (id)rootRegisterController;
- (void)doVerifySMSCheckCode;
- (void)doRequireSMSCheckCode;
- (void)aluSMSVerifyBoxTextInputDidChange:(id)arg1;
- (void)aluSMSVerifyBoxResendClicked:(id)arg1;
- (void)handleMonitorPoint;
- (void)onNext;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

