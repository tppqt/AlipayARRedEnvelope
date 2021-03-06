//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHBaseBankCard.h"

#import "NSCoding.h"

@class NSString, WEALTHBankCardHolderInfo;

@interface WEALTHBankCard : WEALTHBaseBankCard <NSCoding>
{
    _Bool _hasBill;
    _Bool _enableApplyFP;
    _Bool _enableDelete;
    _Bool _hasBankService;
    NSString *_cardIndexNo;
    NSString *_agreementNo;
    NSString *_instMark;
    WEALTHBankCardHolderInfo *_bankCardHolderInfo;
}

@property(retain, nonatomic) WEALTHBankCardHolderInfo *bankCardHolderInfo; // @synthesize bankCardHolderInfo=_bankCardHolderInfo;
@property(nonatomic) _Bool hasBankService; // @synthesize hasBankService=_hasBankService;
@property(nonatomic) _Bool enableDelete; // @synthesize enableDelete=_enableDelete;
@property(nonatomic) _Bool enableApplyFP; // @synthesize enableApplyFP=_enableApplyFP;
@property(nonatomic) _Bool hasBill; // @synthesize hasBill=_hasBill;
@property(retain, nonatomic) NSString *instMark; // @synthesize instMark=_instMark;
@property(retain, nonatomic) NSString *agreementNo; // @synthesize agreementNo=_agreementNo;
@property(retain, nonatomic) NSString *cardIndexNo; // @synthesize cardIndexNo=_cardIndexNo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

