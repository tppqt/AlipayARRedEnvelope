//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFCToString.h"

@class NSString;

@interface LFCRewardDetail : LFCToString
{
    NSString *_userId;
    NSString *_logonId;
    NSString *_amount;
    NSString *_time;
    NSString *_locale;
    NSString *_localeString;
    NSString *_nickName;
    NSString *_imageUrl;
    NSString *_activityId;
}

@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *localeString; // @synthesize localeString=_localeString;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

