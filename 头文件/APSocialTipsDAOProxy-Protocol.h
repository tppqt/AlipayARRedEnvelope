//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, APSocialTipsModel, NSArray, NSString;

@protocol APSocialTipsDAOProxy <APDAOProtocol>
- (APDAOResult *)daoInsertAPSocialTipsArr:(NSArray *)arg1;
- (NSArray *)daoSelectTipsModelsWithModels:(NSArray *)arg1;
- (NSArray *)daoSelectRecentTipsWithSessionId:(NSString *)arg1 toType:(NSString *)arg2;
- (NSArray *)daoSelectRecentTips;
- (APDAOResult *)daoDeleteAPSocialTipsFromSessionId:(NSString *)arg1 toType:(NSString *)arg2 bizType:(NSString *)arg3;
- (APSocialTipsModel *)daoSelectAPSocialTipsFromSessionId:(NSString *)arg1 toType:(NSString *)arg2 bizType:(NSString *)arg3;
- (APDAOResult *)daoUpdateAPSocialTips:(APSocialTipsModel *)arg1;
- (APDAOResult *)daoInsertAPSocialTips:(APSocialTipsModel *)arg1;
@end

