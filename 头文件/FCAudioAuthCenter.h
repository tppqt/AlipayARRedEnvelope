//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FCAudioAuthCenter : NSObject
{
    NSString *falconAuthStatus;
}

+ (id)shareCenter;
+ (long long)getMicAuthStatus;
+ (_Bool)isHardwareAuthorize;
- (void).cxx_destruct;
- (_Bool)getFalconAuth;
- (void)changeAuthStatus:(id)arg1;
- (id)init;

@end

