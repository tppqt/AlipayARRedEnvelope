//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, WEALTHFundNonBankInfo, WEALTHPasswordTokenCreator, WEALTHRecommendChannelInfo;

@interface WEALTHQueryRecommendChannelInfoResult : NSObject
{
    _Bool _success;
    _Bool _showLimitExplain;
    _Bool _needBindNewCard;
    int _showType;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSArray *_weavingList;
    NSString *_followAction;
    WEALTHPasswordTokenCreator *_passwordTokenCreator;
    NSString *_formToken;
    NSDictionary *_extraInfo;
    WEALTHRecommendChannelInfo *_channelInfo;
    NSString *_availableCoupon;
    NSString *_expectProfitDate;
    NSString *_profitDateAfter3PM;
    NSString *_profitDateDesc;
    NSString *_mfundInsuTips;
    WEALTHFundNonBankInfo *_fundNonBankInfo;
    NSString *_bizIdentity;
    NSDictionary *_cashierArgu;
}

+ (Class)cashierArguElementClass;
+ (Class)extraInfoElementClass;
+ (Class)weavingListElementClass;
@property(retain, nonatomic) NSDictionary *cashierArgu; // @synthesize cashierArgu=_cashierArgu;
@property(retain, nonatomic) NSString *bizIdentity; // @synthesize bizIdentity=_bizIdentity;
@property(retain, nonatomic) WEALTHFundNonBankInfo *fundNonBankInfo; // @synthesize fundNonBankInfo=_fundNonBankInfo;
@property(nonatomic) _Bool needBindNewCard; // @synthesize needBindNewCard=_needBindNewCard;
@property(nonatomic) _Bool showLimitExplain; // @synthesize showLimitExplain=_showLimitExplain;
@property(retain, nonatomic) NSString *mfundInsuTips; // @synthesize mfundInsuTips=_mfundInsuTips;
@property(retain, nonatomic) NSString *profitDateDesc; // @synthesize profitDateDesc=_profitDateDesc;
@property(retain, nonatomic) NSString *profitDateAfter3PM; // @synthesize profitDateAfter3PM=_profitDateAfter3PM;
@property(retain, nonatomic) NSString *expectProfitDate; // @synthesize expectProfitDate=_expectProfitDate;
@property(retain, nonatomic) NSString *availableCoupon; // @synthesize availableCoupon=_availableCoupon;
@property(retain, nonatomic) WEALTHRecommendChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *formToken; // @synthesize formToken=_formToken;
@property(retain, nonatomic) WEALTHPasswordTokenCreator *passwordTokenCreator; // @synthesize passwordTokenCreator=_passwordTokenCreator;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSArray *weavingList; // @synthesize weavingList=_weavingList;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

