//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface ALAuthorizeContext : NSObject
{
    _Bool _firstLoading;
    NSString *_authId;
    NSString *_authType;
    NSMutableDictionary *_bizData;
}

+ (id)shareData;
@property(retain, nonatomic) NSMutableDictionary *bizData; // @synthesize bizData=_bizData;
@property(copy, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *authId; // @synthesize authId=_authId;
@property(nonatomic) _Bool firstLoading; // @synthesize firstLoading=_firstLoading;
- (void).cxx_destruct;
- (id)init;

@end

