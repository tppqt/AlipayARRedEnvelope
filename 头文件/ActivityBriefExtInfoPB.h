//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface ActivityBriefExtInfoPB : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFeedCount;
    _Bool _hasFriendCount;
    _Bool _hasImage;
    _Bool _hasText;
    _Bool _hasViewCount;
    _Bool _hasRewardCount;
    _Bool _hasMarkingActivityId;
    _Bool _hasRelativeActivityId;
    _Bool _hasSubTheme;
    _Bool _hasActivityId;
    _Bool _hasTheme;
    _Bool _hasAddressName;
    _Bool _hasTips;
    _Bool _hasIcon;
    _Bool _hasBackground;
    _Bool _hasFeedCountText;
    _Bool _hasRulesUrl;
    _Bool _hasRuleName;
    int _feedCount;
    int _friendCount;
    int _viewCount;
    int _rewardCount;
    NSString *_image;
    NSString *_text;
    NSString *_markingActivityId;
    NSString *_relativeActivityId;
    NSString *_subTheme;
    NSString *_activityId;
    NSString *_theme;
    NSString *_addressName;
    NSString *_tips;
    NSString *_icon;
    NSString *_background;
    NSString *_feedCountText;
    NSString *_rulesUrl;
    NSString *_ruleName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *ruleName; // @synthesize ruleName=_ruleName;
@property(retain, nonatomic) NSString *rulesUrl; // @synthesize rulesUrl=_rulesUrl;
@property(retain, nonatomic) NSString *feedCountText; // @synthesize feedCountText=_feedCountText;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *addressName; // @synthesize addressName=_addressName;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *subTheme; // @synthesize subTheme=_subTheme;
@property(retain, nonatomic) NSString *relativeActivityId; // @synthesize relativeActivityId=_relativeActivityId;
@property(retain, nonatomic) NSString *markingActivityId; // @synthesize markingActivityId=_markingActivityId;
@property(nonatomic) int rewardCount; // @synthesize rewardCount=_rewardCount;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) int friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) int feedCount; // @synthesize feedCount=_feedCount;
@property(readonly) _Bool hasRuleName; // @synthesize hasRuleName=_hasRuleName;
@property(readonly) _Bool hasRulesUrl; // @synthesize hasRulesUrl=_hasRulesUrl;
@property(readonly) _Bool hasFeedCountText; // @synthesize hasFeedCountText=_hasFeedCountText;
@property(readonly) _Bool hasBackground; // @synthesize hasBackground=_hasBackground;
@property(readonly) _Bool hasIcon; // @synthesize hasIcon=_hasIcon;
@property(readonly) _Bool hasTips; // @synthesize hasTips=_hasTips;
@property(readonly) _Bool hasAddressName; // @synthesize hasAddressName=_hasAddressName;
@property(readonly) _Bool hasTheme; // @synthesize hasTheme=_hasTheme;
@property(readonly) _Bool hasActivityId; // @synthesize hasActivityId=_hasActivityId;
@property(readonly) _Bool hasSubTheme; // @synthesize hasSubTheme=_hasSubTheme;
@property(readonly) _Bool hasRelativeActivityId; // @synthesize hasRelativeActivityId=_hasRelativeActivityId;
@property(readonly) _Bool hasMarkingActivityId; // @synthesize hasMarkingActivityId=_hasMarkingActivityId;
@property(readonly) _Bool hasRewardCount; // @synthesize hasRewardCount=_hasRewardCount;
@property(readonly) _Bool hasViewCount; // @synthesize hasViewCount=_hasViewCount;
@property(readonly) _Bool hasText; // @synthesize hasText=_hasText;
@property(readonly) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(readonly) _Bool hasFriendCount; // @synthesize hasFriendCount=_hasFriendCount;
@property(readonly) _Bool hasFeedCount; // @synthesize hasFeedCount=_hasFeedCount;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

