//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APMonitorPointManager : NSObject
{
    _Bool _hasAuthenticated;
    NSString *_userID;
    NSString *_logServerURL;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasAuthenticated; // @synthesize hasAuthenticated=_hasAuthenticated;
@property(retain) NSString *logServerURL; // @synthesize logServerURL=_logServerURL;
@property(retain) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)translateKeysForBefore8_3VersionBug:(id)arg1;
- (void)setAuthenticated:(_Bool)arg1;
- (void)setURL:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)addLogDataWithType:(id)arg1 logData:(id)arg2;
- (void)addLogsAndKeys:(id)arg1;
- (void)uploadLogData;

@end

