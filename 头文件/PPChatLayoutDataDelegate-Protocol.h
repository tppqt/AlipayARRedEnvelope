//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, PPChatPublicAccount;

@protocol PPChatLayoutDataDelegate <NSObject>
- (void)switchToLife;
- (void)layoutDataRequestLayoutFailWithError:(NSError *)arg1;
- (void)cacheLayoutDataDidLoadLayoutForAccount:(PPChatPublicAccount *)arg1 withThirdPartyAccounts:(NSArray *)arg2 menus:(NSDictionary *)arg3;
- (void)layoutDataDidLoadLayoutForAccount:(PPChatPublicAccount *)arg1 withThirdPartyAccounts:(NSArray *)arg2 menus:(NSDictionary *)arg3;
@end

