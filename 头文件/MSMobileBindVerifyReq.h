//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSMobileBindVerifyReq : MSToString
{
    NSString *_paymentPwd;
    NSString *_authCode;
    NSString *_logonId;
    NSString *_bindMobile;
    NSString *_isp;
}

@property(retain, nonatomic) NSString *isp; // @synthesize isp=_isp;
@property(retain, nonatomic) NSString *bindMobile; // @synthesize bindMobile=_bindMobile;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *paymentPwd; // @synthesize paymentPwd=_paymentPwd;
- (void).cxx_destruct;

@end

