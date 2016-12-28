//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class GO2ONavigationCardInfo, NSArray, NSString;

@interface GO2OShopInfo : GO2OServiceObject
{
    NSString *_shopId;
    NSString *_shopName;
    NSString *_logoUrl;
    long long _totalImages;
    double _score;
    NSString *_shopLabel;
    NSString *_averagePrice;
    NSString *_address;
    NSString *_district;
    long long _totalComments;
    NSString *_distance;
    double _longitude;
    double _latitude;
    GO2ONavigationCardInfo *_navigationCardInfo;
    NSArray *_telephoneNumbers;
    NSString *_bussinessHour;
    NSArray *_shopServiceData;
    NSString *_slogon;
    NSString *_shopDescription;
    NSArray *_promotions;
}

@property(retain, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NSString *shopDescription; // @synthesize shopDescription=_shopDescription;
@property(retain, nonatomic) NSString *slogon; // @synthesize slogon=_slogon;
@property(retain, nonatomic) NSArray *shopServiceData; // @synthesize shopServiceData=_shopServiceData;
@property(retain, nonatomic) NSString *bussinessHour; // @synthesize bussinessHour=_bussinessHour;
@property(retain, nonatomic) NSArray *telephoneNumbers; // @synthesize telephoneNumbers=_telephoneNumbers;
@property(retain, nonatomic) GO2ONavigationCardInfo *navigationCardInfo; // @synthesize navigationCardInfo=_navigationCardInfo;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(nonatomic) long long totalComments; // @synthesize totalComments=_totalComments;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *averagePrice; // @synthesize averagePrice=_averagePrice;
@property(retain, nonatomic) NSString *shopLabel; // @synthesize shopLabel=_shopLabel;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long totalImages; // @synthesize totalImages=_totalImages;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

