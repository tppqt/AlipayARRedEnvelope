//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYFuCard.h"

@class NSString;

@interface NYFiveFuCard : NYFuCard
{
    _Bool _isHandleComposed;
    NSString *_amount;
    NSString *_blessWord;
    NSString *_splitMoneyTips;
    NSString *_prizeType;
    NSString *_blessingBagMsg;
    NSString *_blessingBagBtnName;
    NSString *_blessingBagUrl;
}

@property(copy, nonatomic) NSString *blessingBagUrl; // @synthesize blessingBagUrl=_blessingBagUrl;
@property(copy, nonatomic) NSString *blessingBagBtnName; // @synthesize blessingBagBtnName=_blessingBagBtnName;
@property(copy, nonatomic) NSString *blessingBagMsg; // @synthesize blessingBagMsg=_blessingBagMsg;
@property(copy, nonatomic) NSString *prizeType; // @synthesize prizeType=_prizeType;
@property(retain, nonatomic) NSString *splitMoneyTips; // @synthesize splitMoneyTips=_splitMoneyTips;
@property(nonatomic) _Bool isHandleComposed; // @synthesize isHandleComposed=_isHandleComposed;
@property(retain, nonatomic) NSString *blessWord; // @synthesize blessWord=_blessWord;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

