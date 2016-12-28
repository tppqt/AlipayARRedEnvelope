//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MVLockedSeatOrderInfo : NSObject
{
    NSString *_scheduleId;
    NSString *_seatNames;
    NSString *_mobile;
    NSString *_userId;
    NSString *_platform;
    NSString *_seatCount;
    NSString *_seatInfo;
    NSArray *_seatExtIds;
    NSArray *_presaleCodes;
    NSArray *_activityIds;
    NSArray *_coupons;
}

+ (Class)couponsElementClass;
+ (Class)activityIdsElementClass;
+ (Class)presaleCodesElementClass;
+ (Class)seatExtIdsElementClass;
@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
@property(retain, nonatomic) NSArray *activityIds; // @synthesize activityIds=_activityIds;
@property(retain, nonatomic) NSArray *presaleCodes; // @synthesize presaleCodes=_presaleCodes;
@property(retain, nonatomic) NSArray *seatExtIds; // @synthesize seatExtIds=_seatExtIds;
@property(copy, nonatomic) NSString *seatInfo; // @synthesize seatInfo=_seatInfo;
@property(copy, nonatomic) NSString *seatCount; // @synthesize seatCount=_seatCount;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *seatNames; // @synthesize seatNames=_seatNames;
@property(copy, nonatomic) NSString *scheduleId; // @synthesize scheduleId=_scheduleId;
- (void).cxx_destruct;
- (id)couponList;
- (id)activityIdList;
- (id)presaleCodeList;

@end

