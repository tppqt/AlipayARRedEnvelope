//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSApplyPwdModificationRequest : MSToString
{
    NSString *_oldPwd;
    NSString *_pwd;
    NSString *_pwdType;
    NSString *_loginId;
}

@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *pwdType; // @synthesize pwdType=_pwdType;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
@property(retain, nonatomic) NSString *oldPwd; // @synthesize oldPwd=_oldPwd;
- (void).cxx_destruct;

@end

