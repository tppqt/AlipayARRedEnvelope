//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSCDPSpaceTypeQueryReq : NSObject
{
    NSString *_userId;
    NSString *_spaceType;
    NSString *_packageName;
}

@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *spaceType; // @synthesize spaceType=_spaceType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

