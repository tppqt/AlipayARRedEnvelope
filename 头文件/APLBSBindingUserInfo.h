//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APLBSLocation, NSString;

@interface APLBSBindingUserInfo : NSObject
{
    int _distance;
    NSString *_userId;
    NSString *_name;
    NSString *_alipayAccount;
    NSString *_avatarURL;
    APLBSLocation *_location;
}

@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) APLBSLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

