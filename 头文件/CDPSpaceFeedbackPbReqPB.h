//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface CDPSpaceFeedbackPbReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *behavior; // @dynamic behavior;
@property(retain, nonatomic) PBMapStringString *extInfos; // @dynamic extInfos;
@property(readonly) _Bool hasBehavior; // @dynamic hasBehavior;
@property(readonly) _Bool hasExtInfos; // @dynamic hasExtInfos;
@property(readonly) _Bool hasMrpRuleId; // @dynamic hasMrpRuleId;
@property(readonly) _Bool hasSpaceCode; // @dynamic hasSpaceCode;
@property(readonly) _Bool hasSpaceObjectId; // @dynamic hasSpaceObjectId;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *mrpRuleId; // @dynamic mrpRuleId;
@property(retain, nonatomic) NSString *spaceCode; // @dynamic spaceCode;
@property(nonatomic) long long spaceObjectId; // @dynamic spaceObjectId;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

