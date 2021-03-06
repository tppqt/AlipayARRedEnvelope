//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, PrimiryField;

@interface CardInfoResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDesc;
    _Bool _hasResultView;
    _Bool _hasPassId;
    _Bool _hasCanBuy;
    _Bool _hasShareSuport;
    _Bool _hasPresentSuport;
    _Bool _hasPrimiryField;
    _Bool _hasRechargeField;
    _Bool _hasOperations;
    _Bool _hasExtResult;
    _Bool _hasStatus;
    _Bool _hasPartnerId;
    _Bool _hasRechargeText;
    _Bool _hasBackgroupImg;
    _Bool _success;
    _Bool _canBuy;
    _Bool _shareSuport;
    _Bool _presentSuport;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSMutableArray *_weavingList;
    NSString *_passId;
    PrimiryField *_primiryField;
    NSString *_rechargeField;
    NSMutableArray *_auxiliaryField;
    NSString *_operations;
    NSString *_extResult;
    NSString *_status;
    NSString *_partnerId;
    NSString *_rechargeText;
    NSString *_backgroupImg;
    NSMutableArray *_discountList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *discountList; // @synthesize discountList=_discountList;
@property(retain, nonatomic) NSString *backgroupImg; // @synthesize backgroupImg=_backgroupImg;
@property(retain, nonatomic) NSString *rechargeText; // @synthesize rechargeText=_rechargeText;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *extResult; // @synthesize extResult=_extResult;
@property(retain, nonatomic) NSString *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableArray *auxiliaryField; // @synthesize auxiliaryField=_auxiliaryField;
@property(retain, nonatomic) NSString *rechargeField; // @synthesize rechargeField=_rechargeField;
@property(retain, nonatomic) PrimiryField *primiryField; // @synthesize primiryField=_primiryField;
@property(nonatomic) _Bool presentSuport; // @synthesize presentSuport=_presentSuport;
@property(nonatomic) _Bool shareSuport; // @synthesize shareSuport=_shareSuport;
@property(nonatomic) _Bool canBuy; // @synthesize canBuy=_canBuy;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSMutableArray *weavingList; // @synthesize weavingList=_weavingList;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasBackgroupImg; // @synthesize hasBackgroupImg=_hasBackgroupImg;
@property(readonly) _Bool hasRechargeText; // @synthesize hasRechargeText=_hasRechargeText;
@property(readonly) _Bool hasPartnerId; // @synthesize hasPartnerId=_hasPartnerId;
@property(readonly) _Bool hasStatus; // @synthesize hasStatus=_hasStatus;
@property(readonly) _Bool hasExtResult; // @synthesize hasExtResult=_hasExtResult;
@property(readonly) _Bool hasOperations; // @synthesize hasOperations=_hasOperations;
@property(readonly) _Bool hasRechargeField; // @synthesize hasRechargeField=_hasRechargeField;
@property(readonly) _Bool hasPrimiryField; // @synthesize hasPrimiryField=_hasPrimiryField;
@property(readonly) _Bool hasPresentSuport; // @synthesize hasPresentSuport=_hasPresentSuport;
@property(readonly) _Bool hasShareSuport; // @synthesize hasShareSuport=_hasShareSuport;
@property(readonly) _Bool hasCanBuy; // @synthesize hasCanBuy=_hasCanBuy;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
@property(readonly) _Bool hasResultView; // @synthesize hasResultView=_hasResultView;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addDiscountList:(id)arg1;
- (void)setDiscountListArray:(id)arg1;
- (void)addAuxiliaryField:(id)arg1;
- (void)setAuxiliaryFieldArray:(id)arg1;
- (void)addWeavingList:(id)arg1;
- (void)setWeavingListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

