//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, APRecentContact, NSArray, NSString;

@protocol APContactRecentProxy <APDAOProtocol>
- (APDAOResult *)deleteRecentContactWithUserIDs:(NSArray *)arg1;
- (APDAOResult *)deleteRecentContactWithUserID:(NSString *)arg1;
- (APRecentContact *)queryRecentContactWithUserID:(NSString *)arg1;
- (NSArray *)queryLocalRecentContactInfo;
- (APDAOResult *)insertRecentContact:(APRecentContact *)arg1;
- (APDAOResult *)insertRecentContactList:(NSArray *)arg1;
@end

