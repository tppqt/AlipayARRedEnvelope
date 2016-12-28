//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray, NSMutableArray, NSString;

@protocol APSocialTagDAOProxy <APDAOProtocol>
- (APDAOResult *)deleteSocialTagTexts:(NSMutableArray *)arg1 userId:(NSString *)arg2;
- (NSArray *)selectAllSocialTagTexts;
- (APDAOResult *)updateSocialTagWeightSocialTagTextAndUserId:(NSMutableArray *)arg1;
- (NSArray *)selectSocialTagsWithUserId:(NSString *)arg1;
- (NSArray *)selectSocialTagsWithRecordIds:(NSArray *)arg1;
- (NSArray *)selectSocialTagWithSocialTagId:(NSString *)arg1;
- (APDAOResult *)deleteUsersForSocialTag:(NSString *)arg1 userIds:(NSMutableArray *)arg2;
- (APDAOResult *)insertOrUpdateSocialTags:(NSMutableArray *)arg1;
- (APDAOResult *)deleteSocialTag:(NSString *)arg1;
- (NSArray *)selectAllSocialTagList;
@end

