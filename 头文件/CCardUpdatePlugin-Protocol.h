//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SocialPlugin.h"

@class CCard, NSDictionary, NSNotification, SOOption;

@protocol CCardUpdatePlugin <SocialPlugin>

@optional
- (_Bool)updateCard:(CCard *)arg1 updateNotification:(NSNotification *)arg2;
- (SOOption *)createWithSyncUCFCOMSPayload:(NSDictionary *)arg1;
@end

