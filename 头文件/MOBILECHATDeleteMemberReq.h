//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECHATToString.h"

@class NSArray, NSString;

@interface MOBILECHATDeleteMemberReq : MOBILECHATToString
{
    NSString *_groupId;
    NSString *_userId;
    NSArray *_userIds;
}

+ (Class)userIdsElementClass;
@property(retain, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

