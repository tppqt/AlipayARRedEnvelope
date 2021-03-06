//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class APMapGeoRequest, APMapReGeoRequest;

@protocol APMapService <DTService>
- (double)distanceFromLocatin:(struct CLLocationCoordinate2D)arg1 toLocation:(struct CLLocationCoordinate2D)arg2;
- (void)reverse:(APMapReGeoRequest *)arg1 completion:(void (^)(id <APMapReGeoResponse>, NSError *))arg2;
- (void)reGeoCodeToCity:(APMapReGeoRequest *)arg1 completion:(void (^)(id <APMapReGeoResponse>, NSError *))arg2;
- (void)reGeoCodeAll:(APMapReGeoRequest *)arg1 completion:(void (^)(id <APMapReGeoResponse>, id *))arg2;
- (void)reGeoCode:(APMapReGeoRequest *)arg1 completion:(void (^)(id <APMapReGeoResponse>, id *))arg2;
- (void)geoCode:(APMapGeoRequest *)arg1 completion:(void (^)(id <APMapGeoResponse>, id *))arg2;
@end

