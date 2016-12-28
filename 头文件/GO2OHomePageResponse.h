//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class GO2OShopRecommendation, NSArray, NSString, O2OLocationCityInfo;

@interface GO2OHomePageResponse : GO2OServiceObject
{
    _Bool _success;
    _Bool _cityOpen;
    NSArray *_navigations;
    O2OLocationCityInfo *_cityInfo;
    NSString *_resultCode;
    NSString *_desc;
    NSArray *_adSpaces;
    NSString *_activityJumpAddress;
    GO2OShopRecommendation *_shopRecommendation;
}

@property(retain, nonatomic) GO2OShopRecommendation *shopRecommendation; // @synthesize shopRecommendation=_shopRecommendation;
@property(retain, nonatomic) NSString *activityJumpAddress; // @synthesize activityJumpAddress=_activityJumpAddress;
@property(retain, nonatomic) NSArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) O2OLocationCityInfo *cityInfo; // @synthesize cityInfo=_cityInfo;
@property(retain, nonatomic) NSArray *navigations; // @synthesize navigations=_navigations;
@property(nonatomic) _Bool cityOpen; // @synthesize cityOpen=_cityOpen;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

