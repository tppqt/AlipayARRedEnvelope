//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFBaseRespVO.h"

@class NSArray;

@interface TFGetCardListResp : TFBaseRespVO
{
    NSArray *_cardList;
    NSArray *_dexCardList;
}

+ (Class)dexCardListElementClass;
+ (Class)cardListElementClass;
@property(retain, nonatomic) NSArray *dexCardList; // @synthesize dexCardList=_dexCardList;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;

@end

