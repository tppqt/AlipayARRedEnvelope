//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface LLPushResponseMsgData : NSObject
{
    NSDictionary *_payload;
    NSString *_appId;
}

+ (Class)payloadElementClass;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;

@end

