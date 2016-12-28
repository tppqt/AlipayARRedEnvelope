//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVPartnerModel, NSArray, NSDateComponents, NSDictionary, NSString;

@protocol MVScheduleModel <NSObject>
+ (NSDateComponents *)dateCompontentsFromTimeString:(NSString *)arg1;
@property(readonly, nonatomic) MVPartnerModel *partnerOfChoice;
@property(readonly, nonatomic) NSString *specialActivityString;
@property(readonly, nonatomic) NSString *saleActivityString;
@property(retain, nonatomic) NSArray *specialSchedules;
@property(retain, nonatomic) NSDictionary *sections;
@property(nonatomic) float refundableTimeBeforeOpen;
@property(nonatomic) _Bool scheduleRefundable;
@property(nonatomic) _Bool fcodeRefundable;
@property(copy, nonatomic) NSString *wandaJumpUrl;
@property(retain, nonatomic) NSArray *partners;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *hallName;
@property(copy, nonatomic) NSString *showVersion;
@property(copy, nonatomic) NSString *showTime;
@property(copy, nonatomic) NSString *showDate;
@property(copy, nonatomic) NSString *cinemaId;
@property(copy, nonatomic) NSString *showId;
@property(copy, nonatomic) NSString *id_;
- (_Bool)availableForSale:(long long)arg1;
- (NSString *)endShowTimeStringFromDuration:(NSString *)arg1;
- (NSString *)activityString;
- (NSString *)displayPriceString;
- (NSString *)memberPriceString;
- (NSString *)currentPriceString;
- (NSString *)oldPriceString;
- (NSString *)shortShowTimeString;

@optional
- (void)initializeForDP;
@end

