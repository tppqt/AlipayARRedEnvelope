//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapPOISearchBaseRequest.h"

@class NSString;

@interface AMapPOIKeywordsSearchRequest : AMapPOISearchBaseRequest
{
    _Bool _cityLimit;
}

@property(nonatomic) _Bool cityLimit; // @synthesize cityLimit=_cityLimit;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *keywords; // @dynamic keywords;

@end

