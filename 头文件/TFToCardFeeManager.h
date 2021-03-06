//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BEEFeePopView, NSDecimalNumber, NSString, TFToCardFeeDetail;

@interface TFToCardFeeManager : NSObject
{
    _Bool _enableFee;
    _Bool _isPointUsed;
    NSDecimalNumber *_feeRate;
    NSString *_chargeMemo;
    TFToCardFeeDetail *_feeDetail;
    NSDecimalNumber *_availableAmount;
    NSDecimalNumber *_transferAmount;
    NSDecimalNumber *_remainPoints;
    NSDecimalNumber *_exchangeRate;
    NSDecimalNumber *_minChargeAmount;
    NSString *_noticeUrl;
    BEEFeePopView *_feePopupView;
    CDUnknownBlockType _continueBlock;
}

@property(copy, nonatomic) CDUnknownBlockType continueBlock; // @synthesize continueBlock=_continueBlock;
@property(retain, nonatomic) BEEFeePopView *feePopupView; // @synthesize feePopupView=_feePopupView;
@property(copy, nonatomic) NSString *noticeUrl; // @synthesize noticeUrl=_noticeUrl;
@property(retain, nonatomic) NSDecimalNumber *minChargeAmount; // @synthesize minChargeAmount=_minChargeAmount;
@property(retain, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(retain, nonatomic) NSDecimalNumber *remainPoints; // @synthesize remainPoints=_remainPoints;
@property(nonatomic) _Bool isPointUsed; // @synthesize isPointUsed=_isPointUsed;
@property(nonatomic) _Bool enableFee; // @synthesize enableFee=_enableFee;
@property(retain, nonatomic) NSDecimalNumber *transferAmount; // @synthesize transferAmount=_transferAmount;
@property(retain, nonatomic) NSDecimalNumber *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(retain, nonatomic) TFToCardFeeDetail *feeDetail; // @synthesize feeDetail=_feeDetail;
@property(copy, nonatomic) NSString *chargeMemo; // @synthesize chargeMemo=_chargeMemo;
@property(retain, nonatomic) NSDecimalNumber *feeRate; // @synthesize feeRate=_feeRate;
- (void).cxx_destruct;
- (void)hidePopView;
- (id)createFeePopView;
- (id)convertToNumber:(id)arg1;
- (void)showFeeDetailWithPointConsume;
- (void)showFeeDetailWithFreeAmount;
- (void)showFeeDetailInfoWithContinueBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *feeRateDesc;
@property(readonly, nonatomic) _Bool realtimeCaculate;
- (id)calculateFee:(id)arg1;
- (void)optimizePointConsume;
- (void)calculateFeeForTransferAmount:(id)arg1;
- (void)reloadData:(id)arg1 transferAmount:(id)arg2;
- (void)resetProperty;
- (id)init;

@end

