//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSArray, NSString;

@interface GO2OShopRecommendation : GO2OServiceObject
{
    NSString *_recommendId;
    NSArray *_recommendedShops;
}

@property(retain, nonatomic) NSArray *recommendedShops; // @synthesize recommendedShops=_recommendedShops;
@property(retain, nonatomic) NSString *recommendId; // @synthesize recommendId=_recommendId;
- (void).cxx_destruct;

@end

