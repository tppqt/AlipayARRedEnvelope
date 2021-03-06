//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALPUserLoginReq : NSObject
{
    NSString *_loginId;
    NSString *_loginPassword;
    NSString *_loginType;
    NSString *_loginCheckCode;
    NSString *_clientId;
    NSString *_tbCheckCodeId;
    NSString *_tbCheckCode;
    NSString *_clientDigest;
    NSString *_secTS;
    NSString *_productId;
    NSString *_productVersion;
    NSString *_userAgent;
    NSString *_screenWidth;
    NSString *_screenHigh;
    NSString *_channels;
    NSString *_osVersion;
    NSString *_did;
    NSString *_walletKey;
}

@property(retain, nonatomic) NSString *walletKey; // @synthesize walletKey=_walletKey;
@property(retain, nonatomic) NSString *did; // @synthesize did=_did;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSString *screenHigh; // @synthesize screenHigh=_screenHigh;
@property(retain, nonatomic) NSString *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *secTS; // @synthesize secTS=_secTS;
@property(retain, nonatomic) NSString *clientDigest; // @synthesize clientDigest=_clientDigest;
@property(retain, nonatomic) NSString *tbCheckCode; // @synthesize tbCheckCode=_tbCheckCode;
@property(retain, nonatomic) NSString *tbCheckCodeId; // @synthesize tbCheckCodeId=_tbCheckCodeId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *loginCheckCode; // @synthesize loginCheckCode=_loginCheckCode;
@property(retain, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *loginPassword; // @synthesize loginPassword=_loginPassword;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;

@end

