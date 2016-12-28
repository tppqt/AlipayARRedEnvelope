//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MOPSecurityTokenRequest : NSObject
{
    NSString *_system;
    NSString *_city;
    NSString *_securityId;
    NSString *_isDaoWeiAuthorized;
    NSString *_complainScene;
    NSString *_complainSubscene;
    NSString *_complainTargetId;
    NSString *_oppositeUserId;
}

@property(retain, nonatomic) NSString *oppositeUserId; // @synthesize oppositeUserId=_oppositeUserId;
@property(retain, nonatomic) NSString *complainTargetId; // @synthesize complainTargetId=_complainTargetId;
@property(retain, nonatomic) NSString *complainSubscene; // @synthesize complainSubscene=_complainSubscene;
@property(retain, nonatomic) NSString *complainScene; // @synthesize complainScene=_complainScene;
@property(retain, nonatomic) NSString *isDaoWeiAuthorized; // @synthesize isDaoWeiAuthorized=_isDaoWeiAuthorized;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *system; // @synthesize system=_system;
- (void).cxx_destruct;

@end

