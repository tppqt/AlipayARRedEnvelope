//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class CCard, NSString;

@protocol CLCLubService <DTService>
- (void)updateCardOptionCount:(CCard *)arg1;
- (void)updateRewardOption:(NSString *)arg1 cardSceneCode:(NSString *)arg2 cardBizType:(NSString *)arg3 rewardCount:(long long)arg4 rewardDone:(_Bool)arg5;
- (void)updatePraiseOption:(NSString *)arg1 cardSceneCode:(NSString *)arg2 cardBizType:(NSString *)arg3 praiseCount:(long long)arg4 praiseDone:(_Bool)arg5;
- (void)updateCommentOption:(NSString *)arg1 cardSceneCode:(NSString *)arg2 cardBizType:(NSString *)arg3 commentCount:(long long)arg4;
@end

