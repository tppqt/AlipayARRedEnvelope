//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, OSPMenuItem;

@interface OSPConfig : NSObject <NSCoding>
{
    _Bool _moreMenuSwitch;
    _Bool _moreServiceSwitch;
    _Bool _businessListSwitch;
    _Bool _notifyAuthSwitch;
    _Bool _displayPayChannel;
    _Bool _isGrayUser;
    _Bool _queryPayChannelSwitch;
    NSString *_userId;
    NSString *_notifyAuthMessage;
    long long _notifyAuthDay;
    NSArray *_moreMenuItems;
    OSPMenuItem *_moreServiceMenuItem;
    NSArray *_payChannelItems;
    NSString *_lastPayChannelID;
    NSString *_payChannelVersion;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool queryPayChannelSwitch; // @synthesize queryPayChannelSwitch=_queryPayChannelSwitch;
@property(nonatomic) _Bool isGrayUser; // @synthesize isGrayUser=_isGrayUser;
@property(retain, nonatomic) NSString *payChannelVersion; // @synthesize payChannelVersion=_payChannelVersion;
@property(nonatomic) _Bool displayPayChannel; // @synthesize displayPayChannel=_displayPayChannel;
@property(retain, nonatomic) NSString *lastPayChannelID; // @synthesize lastPayChannelID=_lastPayChannelID;
@property(retain, nonatomic) NSArray *payChannelItems; // @synthesize payChannelItems=_payChannelItems;
@property(retain, nonatomic) OSPMenuItem *moreServiceMenuItem; // @synthesize moreServiceMenuItem=_moreServiceMenuItem;
@property(retain, nonatomic) NSArray *moreMenuItems; // @synthesize moreMenuItems=_moreMenuItems;
@property(nonatomic) long long notifyAuthDay; // @synthesize notifyAuthDay=_notifyAuthDay;
@property(copy, nonatomic) NSString *notifyAuthMessage; // @synthesize notifyAuthMessage=_notifyAuthMessage;
@property(nonatomic) _Bool notifyAuthSwitch; // @synthesize notifyAuthSwitch=_notifyAuthSwitch;
@property(nonatomic) _Bool businessListSwitch; // @synthesize businessListSwitch=_businessListSwitch;
@property(nonatomic) _Bool moreServiceSwitch; // @synthesize moreServiceSwitch=_moreServiceSwitch;
@property(nonatomic) _Bool moreMenuSwitch; // @synthesize moreMenuSwitch=_moreMenuSwitch;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

