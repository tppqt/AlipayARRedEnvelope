//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray, NSDate, NSNumber, NSString;

@protocol TLUserFeedListDAOProtocol <APDAOProtocol>
- (APDAOResult *)deleteUserBunListWithout:(NSArray *)arg1;
- (NSNumber *)existUserBunWithUserId:(NSString *)arg1;
- (APDAOResult *)deleteUserBunListWithUserId:(NSString *)arg1;
- (NSNumber *)existUserBun:(NSString *)arg1;
- (NSArray *)selectUserBunListFromDate:(NSDate *)arg1 limit:(NSNumber *)arg2 userId:(NSString *)arg3;
- (APDAOResult *)deleteUserBunList:(NSArray *)arg1;
- (APDAOResult *)insertUserBunList:(NSArray *)arg1;
@end

