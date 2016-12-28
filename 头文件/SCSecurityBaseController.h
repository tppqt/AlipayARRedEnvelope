//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDTViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, SecurityAlertAgency;

@interface SCSecurityBaseController : SCDTViewController <UIAlertViewDelegate>
{
    NSString *_rpcIndentifier;
    NSString *_resultCode;
    NSString *_message;
    SecurityAlertAgency *_agency;
}

@property(retain, nonatomic) SecurityAlertAgency *agency; // @synthesize agency=_agency;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *rpcIndentifier; // @synthesize rpcIndentifier=_rpcIndentifier;
- (void).cxx_destruct;
- (void)doBeforeHandleRpcException:(id)arg1 resultCode:(id)arg2 message:(id)arg3;
- (void)doHandleRpcException:(id)arg1 resultCode:(id)arg2 message:(id)arg3;
- (void)doHandleRpcCallback:(id)arg1 resultCode:(id)arg2 message:(id)arg3;
- (void)handleRpcrResultCode:(id)arg1 resultCode:(id)arg2 message:(id)arg3;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

