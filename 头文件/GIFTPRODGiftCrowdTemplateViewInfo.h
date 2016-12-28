//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface GIFTPRODGiftCrowdTemplateViewInfo : GIFTPRODToString <NSCoding>
{
    int _perNumberUpper;
    int _perNumberLower;
    int _crowdDuration;
    long long _id;
    NSString *_prodName;
    NSString *_prodCode;
    NSString *_prodDesc;
    long long _countUpper;
    long long _countLower;
    long long _amountUpper;
    long long _amountLower;
    long long _perAmountUpper;
    long long _perAmountLower;
    NSDictionary *_extProperties;
}

+ (Class)extPropertiesElementClass;
@property(retain, nonatomic) NSDictionary *extProperties; // @synthesize extProperties=_extProperties;
@property(nonatomic) int crowdDuration; // @synthesize crowdDuration=_crowdDuration;
@property(nonatomic) int perNumberLower; // @synthesize perNumberLower=_perNumberLower;
@property(nonatomic) int perNumberUpper; // @synthesize perNumberUpper=_perNumberUpper;
@property(nonatomic) long long perAmountLower; // @synthesize perAmountLower=_perAmountLower;
@property(nonatomic) long long perAmountUpper; // @synthesize perAmountUpper=_perAmountUpper;
@property(nonatomic) long long amountLower; // @synthesize amountLower=_amountLower;
@property(nonatomic) long long amountUpper; // @synthesize amountUpper=_amountUpper;
@property(nonatomic) long long countLower; // @synthesize countLower=_countLower;
@property(nonatomic) long long countUpper; // @synthesize countUpper=_countUpper;
@property(retain, nonatomic) NSString *prodDesc; // @synthesize prodDesc=_prodDesc;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *prodName; // @synthesize prodName=_prodName;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

