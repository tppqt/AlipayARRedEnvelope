//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSTaobaoSsoToken : MSToString
{
    NSString *_ssoToken;
    NSString *_nickName;
    NSString *_taobaoDeviceId;
    long long _timeStamp;
    NSString *_secSign;
    NSString *_imei;
    NSString *_imsi;
}

@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *secSign; // @synthesize secSign=_secSign;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *taobaoDeviceId; // @synthesize taobaoDeviceId=_taobaoDeviceId;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
- (void).cxx_destruct;

@end

