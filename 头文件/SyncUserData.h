//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SyncUserData : NSObject
{
    _Bool _gup;
    _Bool _rup;
    _Bool _shortLinkOpen;
    _Bool _sendAllBiz;
    NSArray *_fupb;
    NSString *_userId;
    NSString *_sessionId;
    NSString *_did;
    NSString *_appVersion;
    NSArray *_shortLinkBizList;
    double _syncPollTimeWifi;
    double _syncPollTimeMobile;
    long long _cmdMaxTimes;
}

+ (id)sharedInstance;
@property(nonatomic) long long cmdMaxTimes; // @synthesize cmdMaxTimes=_cmdMaxTimes;
@property(nonatomic) double syncPollTimeMobile; // @synthesize syncPollTimeMobile=_syncPollTimeMobile;
@property(nonatomic) double syncPollTimeWifi; // @synthesize syncPollTimeWifi=_syncPollTimeWifi;
@property(nonatomic) _Bool sendAllBiz; // @synthesize sendAllBiz=_sendAllBiz;
@property(nonatomic) _Bool shortLinkOpen; // @synthesize shortLinkOpen=_shortLinkOpen;
@property(retain, nonatomic) NSArray *shortLinkBizList; // @synthesize shortLinkBizList=_shortLinkBizList;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *did; // @synthesize did=_did;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSArray *fupb; // @synthesize fupb=_fupb;
@property(nonatomic) _Bool rup; // @synthesize rup=_rup;
@property(nonatomic) _Bool gup; // @synthesize gup=_gup;
- (void).cxx_destruct;
- (void)setSyncConfig:(id)arg1;
- (_Bool)isUserLogin;
- (void)loadUserId;
- (id)init;

@end

