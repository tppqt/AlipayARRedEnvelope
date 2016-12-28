//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SPCard;

@interface SPFundChannelData : NSObject
{
    _Bool _needBindNewCard;
    int _channelType;
    SPCard *_currentpayCard;
    NSString *_bizLimit;
    NSString *_bizLimitDes;
    NSString *_channelTypeStr;
    NSString *_availableLimit;
    NSString *_assignedChannel;
    NSDictionary *_extInfos;
    NSString *_bizProduct;
    NSString *_tradeFrom;
    NSString *_limitShowUrl;
    NSString *_channelTypeName;
}

+ (Class)extInfosElementClass;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *channelTypeName; // @synthesize channelTypeName=_channelTypeName;
@property(retain, nonatomic) NSString *limitShowUrl; // @synthesize limitShowUrl=_limitShowUrl;
@property(nonatomic) _Bool needBindNewCard; // @synthesize needBindNewCard=_needBindNewCard;
@property(retain, nonatomic) NSString *tradeFrom; // @synthesize tradeFrom=_tradeFrom;
@property(retain, nonatomic) NSString *bizProduct; // @synthesize bizProduct=_bizProduct;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *assignedChannel; // @synthesize assignedChannel=_assignedChannel;
@property(retain, nonatomic) NSString *availableLimit; // @synthesize availableLimit=_availableLimit;
@property(retain, nonatomic) NSString *channelTypeStr; // @synthesize channelTypeStr=_channelTypeStr;
@property(retain, nonatomic) NSString *bizLimitDes; // @synthesize bizLimitDes=_bizLimitDes;
@property(retain, nonatomic) NSString *bizLimit; // @synthesize bizLimit=_bizLimit;
@property(retain, nonatomic) SPCard *currentpayCard; // @synthesize currentpayCard=_currentpayCard;
- (void).cxx_destruct;

@end

