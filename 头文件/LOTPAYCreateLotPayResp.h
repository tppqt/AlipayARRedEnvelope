//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LOTPAYBaseResp.h"

@class NSArray, NSString;

@interface LOTPAYCreateLotPayResp : LOTPAYBaseResp
{
    int _lotpayNum;
    NSString *_groupId;
    NSString *_sessionId;
    NSArray *_userIds;
    NSString *_isCreate;
    NSString *_bizContext;
    NSString *_createUserId;
    NSString *_createName;
}

+ (Class)userIdsElementClass;
@property(retain, nonatomic) NSString *createName; // @synthesize createName=_createName;
@property(retain, nonatomic) NSString *createUserId; // @synthesize createUserId=_createUserId;
@property(retain, nonatomic) NSString *bizContext; // @synthesize bizContext=_bizContext;
@property(nonatomic) int lotpayNum; // @synthesize lotpayNum=_lotpayNum;
@property(retain, nonatomic) NSString *isCreate; // @synthesize isCreate=_isCreate;
@property(retain, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

