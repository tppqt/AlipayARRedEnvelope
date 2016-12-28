//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EWUtils : NSObject
{
}

+ (id)convertMopCityListToBeeCityList:(id)arg1;
+ (void)setLBSLocationRequest:(id)arg1;
+ (id)getCacheCityList;
+ (void)cacheCityList:(id)arg1;
+ (void)writeLogWithSPMId:(id)arg1 params:(id)arg2 actionId:(id)arg3;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2 size:(struct CGSize)arg3;
+ (void)uploadImageToDjango:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)simplifyHTML:(id)arg1;
+ (_Bool)array:(id)arg1 containsString:(id)arg2;
+ (id)resizeImage:(id)arg1 byScalingAndCroppingForSize:(struct CGSize)arg2;
+ (double)currentTime;
+ (double)getDistanceWithCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
+ (_Bool)coordinate:(struct CLLocationCoordinate2D)arg1 inTheRegion:(CDStruct_b7cb895d)arg2;
+ (id)readLastAdCode;
+ (struct CLLocationCoordinate2D)readLastLocation;
+ (void)saveLastLocation:(struct CLLocationCoordinate2D)arg1 adCode:(id)arg2;
+ (_Bool)isValidCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)convertViewToImage:(id)arg1;
+ (id)formatMoney:(id)arg1;
+ (void)EW_OpenEverywhereAgreementPage;
+ (void)getDistrictNames:(id)arg1 districtCodes:(id)arg2 withDistricts:(id)arg3;
+ (id)addressInfoWithCityInfo:(id)arg1;
+ (id)buttonWithStyle:(int)arg1 icon:(id)arg2 title:(id)arg3;
+ (id)fullResolutionImageFromALAsset:(id)arg1;
+ (id)beeCityFromAddressInfo:(id)arg1;
+ (id)beeCityStringFromBeeCity:(id)arg1;
+ (id)getUserAddressInfo;
+ (void)setUserAddressInfo:(id)arg1;
+ (void)getMapViewBottomLeftCoordinate:(struct CLLocationCoordinate2D *)arg1 topRightCoordinate:(struct CLLocationCoordinate2D *)arg2 fromRegion:(CDStruct_b7cb895d)arg3;
+ (_Bool)isValidString:(id)arg1;
+ (void)parseKeyboardNotification:(id)arg1 rect:(struct CGRect *)arg2 curve:(unsigned long long *)arg3 duration:(double *)arg4;
+ (void)drawCreditScore:(id)arg1 score:(int)arg2;
+ (id)convertFromPoi:(id)arg1;
+ (id)convertFromLBSAddrInfo:(id)arg1;
+ (id)getHotCityList;
+ (void)setHotCityList:(id)arg1;
+ (id)mergeH5Param:(id)arg1 options:(id)arg2 url:(id)arg3;
+ (void)pushH5PageWithURL:(id)arg1 param:(id)arg2 options:(id)arg3 animated:(_Bool)arg4;
+ (void)registerJSAPI:(id)arg1;
+ (void)setH5PageInTabBarController:(id)arg1 atIndex:(unsigned long long)arg2 asUrl:(id)arg3 param:(id)arg4 options:(id)arg5;
+ (void)tryToInstallH5App:(CDUnknownBlockType)arg1;
+ (_Bool)h5AppInstalled;
+ (id)createH5PageWithURL:(id)arg1 param:(id)arg2 options:(id)arg3;

@end

