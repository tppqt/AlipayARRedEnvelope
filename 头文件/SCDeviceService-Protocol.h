//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class MSTid, NSString;

@protocol SCDeviceService <DTService>
- (void)initAPMobileIdentifier;
- (void)clearSafePayTid;
- (MSTid *)getSafePayTid;
- (void)deleteOldWalletTid;
- (id)getOldWalletTid;
- (_Bool)queryCertification:(NSString *)arg1;
- (NSString *)getWalletTid;
@end

