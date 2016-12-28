//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYBaseObject.h"

#import "NSCoding.h"

@class NSString, NYFuCardType;

@interface NYFuCard : NYBaseObject <NSCoding>
{
    _Bool _isSplitScratchCard;
    _Bool _scratchCardWin;
    _Bool _isFromFullAbility;
    NSString *_typeId;
    NYFuCardType *_cardType;
    NSString *_cardId;
    NSString *_brandId;
    NSString *_brandPic;
    NSString *_brandLogo;
    NSString *_brandWord;
    NSString *_brandVideoURL;
    NSString *_brandDetailPic;
    NSString *_brandHomeURL;
    NSString *_scratchCardPrizeName;
    NSString *_scratchCardPrizeDesc;
    NSString *_scratchCardPrizeUrl;
    NSString *_scratchCardFailTitle;
    NSString *_scratchCardFailDesc;
    NSString *_scratchCardPrizeBtnName;
    NSString *_followId;
    NSString *_followDesc;
    NSString *_fuImageId;
}

+ (void)showImageAt:(id)arg1 writeFuImageId:(id)arg2 cardType:(id)arg3;
@property(copy, nonatomic) NSString *fuImageId; // @synthesize fuImageId=_fuImageId;
@property(nonatomic) _Bool isFromFullAbility; // @synthesize isFromFullAbility=_isFromFullAbility;
@property(copy, nonatomic) NSString *followDesc; // @synthesize followDesc=_followDesc;
@property(copy, nonatomic) NSString *followId; // @synthesize followId=_followId;
@property(copy, nonatomic) NSString *scratchCardPrizeBtnName; // @synthesize scratchCardPrizeBtnName=_scratchCardPrizeBtnName;
@property(copy, nonatomic) NSString *scratchCardFailDesc; // @synthesize scratchCardFailDesc=_scratchCardFailDesc;
@property(copy, nonatomic) NSString *scratchCardFailTitle; // @synthesize scratchCardFailTitle=_scratchCardFailTitle;
@property(copy, nonatomic) NSString *scratchCardPrizeUrl; // @synthesize scratchCardPrizeUrl=_scratchCardPrizeUrl;
@property(copy, nonatomic) NSString *scratchCardPrizeDesc; // @synthesize scratchCardPrizeDesc=_scratchCardPrizeDesc;
@property(copy, nonatomic) NSString *scratchCardPrizeName; // @synthesize scratchCardPrizeName=_scratchCardPrizeName;
@property(nonatomic) _Bool scratchCardWin; // @synthesize scratchCardWin=_scratchCardWin;
@property(nonatomic) _Bool isSplitScratchCard; // @synthesize isSplitScratchCard=_isSplitScratchCard;
@property(copy, nonatomic) NSString *brandHomeURL; // @synthesize brandHomeURL=_brandHomeURL;
@property(copy, nonatomic) NSString *brandDetailPic; // @synthesize brandDetailPic=_brandDetailPic;
@property(copy, nonatomic) NSString *brandVideoURL; // @synthesize brandVideoURL=_brandVideoURL;
@property(copy, nonatomic) NSString *brandWord; // @synthesize brandWord=_brandWord;
@property(copy, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(copy, nonatomic) NSString *brandPic; // @synthesize brandPic=_brandPic;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) __weak NYFuCardType *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
- (void).cxx_destruct;
- (_Bool)isRandomFuCard;
- (_Bool)isFullAbilityFuCard;
- (_Bool)isFiveFuCard;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)showImageAt:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

