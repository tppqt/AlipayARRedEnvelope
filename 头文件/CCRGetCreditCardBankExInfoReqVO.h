//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRGetCreditCardBankExInfoReqVO : CCRBaseReqVO
{
    NSString *_cardNoToken;
    NSString *_bankMark;
}

@property(retain, nonatomic) NSString *bankMark; // @synthesize bankMark=_bankMark;
@property(retain, nonatomic) NSString *cardNoToken; // @synthesize cardNoToken=_cardNoToken;
- (void).cxx_destruct;

@end

