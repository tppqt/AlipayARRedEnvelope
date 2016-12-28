//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSString, PEFundChannelData, PEFundChannelManager, TRANSFERPRODQueryReceiverInfoResp;

@interface PEPayAmountViewModel : NSObject
{
    TRANSFERPRODQueryReceiverInfoResp *_reciverInfoResp;
    PEFundChannelData *_fundData;
    id <PEPayAmountViewModelDelegate> _delegate;
    PEFundChannelManager *_fundManager;
    DTRpcAsyncCaller *_payeeCaller;
    DTRpcAsyncCaller *_startPayCaller;
    DTRpcAsyncCaller *_billCaller;
    NSString *_paySessionId;
}

@property(retain, nonatomic) NSString *paySessionId; // @synthesize paySessionId=_paySessionId;
@property(retain, nonatomic) DTRpcAsyncCaller *billCaller; // @synthesize billCaller=_billCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *startPayCaller; // @synthesize startPayCaller=_startPayCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *payeeCaller; // @synthesize payeeCaller=_payeeCaller;
@property(retain, nonatomic, getter=getPeFundManager) PEFundChannelManager *fundManager; // @synthesize fundManager=_fundManager;
@property(nonatomic) __weak id <PEPayAmountViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PEFundChannelData *fundData; // @synthesize fundData=_fundData;
@property(retain, nonatomic) TRANSFERPRODQueryReceiverInfoResp *reciverInfoResp; // @synthesize reciverInfoResp=_reciverInfoResp;
- (void).cxx_destruct;
- (void)clearVM;
- (_Bool)hasPayRecords;
- (void)updatePayRecords;
- (id)payeeBiz;
- (void)deleteBill:(id)arg1;
- (void)createPayBillWithAmount:(id)arg1 rUserId:(id)arg2 memo:(id)arg3 codeId:(id)arg4 source:(id)arg5 hasConfirmed:(_Bool)arg6;
- (void)postQuitPay;
- (void)postStartPay:(id)arg1;
- (void)updateFundDataWithChannelDict:(id)arg1;
- (void)queryPayeeInfoWithUserAccount:(id)arg1 userId:(id)arg2;
- (void)loadDefaultFundChannelWithAmount:(id)arg1;

@end

