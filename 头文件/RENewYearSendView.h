//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REEnvelopeView.h"

#import "REPayChannelDelegate.h"

@class APContactInfo, GIFTPRODGiftCrowdCreateResult, NSDictionary, NSString, REBlockButton, REButton, REDataEngine, REMarqueeView, REPayChannelPicker, RERandomMoney, UIButton, UIImageView, UILabel;

@interface RENewYearSendView : REEnvelopeView <REPayChannelDelegate>
{
    NSDictionary *_options;
    REButton *_sendButton;
    RERandomMoney *_randomMoney;
    UILabel *_remarkLabel;
    REMarqueeView *_moneyWrapperView;
    UILabel *_moneyLabel;
    REPayChannelPicker *_payChannelPicker;
    REBlockButton *_closeButton;
    GIFTPRODGiftCrowdCreateResult *_result;
    APContactInfo *_contactInfo;
    REDataEngine *_dataEngine;
    UIImageView *_roosterBgImageView;
    UIButton *_refreshMoneyButton;
    NSString *_safePayToken;
    NSString *_prevBiz;
}

@property(copy, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(copy, nonatomic) NSString *safePayToken; // @synthesize safePayToken=_safePayToken;
@property(retain, nonatomic) UIButton *refreshMoneyButton; // @synthesize refreshMoneyButton=_refreshMoneyButton;
@property(retain, nonatomic) UIImageView *roosterBgImageView; // @synthesize roosterBgImageView=_roosterBgImageView;
@property(retain, nonatomic) REDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) GIFTPRODGiftCrowdCreateResult *result; // @synthesize result=_result;
@property(retain, nonatomic) REBlockButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) REPayChannelPicker *payChannelPicker; // @synthesize payChannelPicker=_payChannelPicker;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) REMarqueeView *moneyWrapperView; // @synthesize moneyWrapperView=_moneyWrapperView;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) RERandomMoney *randomMoney; // @synthesize randomMoney=_randomMoney;
@property(retain, nonatomic) REButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)viewForShowToast;
- (id)buildRemarkLabel:(id)arg1;
- (id)buildMoneyLabel:(id)arg1;
- (id)buildMoneyWrapper:(id)arg1;
- (void)onRefreshButtonClicked;
- (void)onSendButtonClicked;
- (void)tryExitApp;
- (void)handleRPCFailCallBackWithResult:(id)arg1;
- (void)payPanelDismiss;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (void)layoutSubviews;
- (void)sendRedEnvelope;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDismiss;
- (void)startAppNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

