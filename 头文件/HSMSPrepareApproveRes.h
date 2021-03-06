//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSMSMobileSecurityResult.h"

@class NSArray, NSString;

@interface HSMSPrepareApproveRes : HSMSMobileSecurityResult
{
    _Bool _needPassword;
    _Bool _needMobileSp;
    NSString *_approvePageType;
    NSString *_approvePageTitle;
    NSString *_approveImgUrl;
    NSArray *_approveTextList;
    NSString *_passwordType;
    NSString *_confirmButtonText;
    NSString *_cancelButtonText;
    NSString *_authTargetTitle;
    NSString *_authTargetDescription;
    NSString *_authTargetLogoUrl;
    NSString *_authOptionTitle;
    NSArray *_authOptions;
    NSString *_openId;
}

+ (Class)authOptionsElementClass;
+ (Class)approveTextListElementClass;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSArray *authOptions; // @synthesize authOptions=_authOptions;
@property(retain, nonatomic) NSString *authOptionTitle; // @synthesize authOptionTitle=_authOptionTitle;
@property(retain, nonatomic) NSString *authTargetLogoUrl; // @synthesize authTargetLogoUrl=_authTargetLogoUrl;
@property(retain, nonatomic) NSString *authTargetDescription; // @synthesize authTargetDescription=_authTargetDescription;
@property(retain, nonatomic) NSString *authTargetTitle; // @synthesize authTargetTitle=_authTargetTitle;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *confirmButtonText; // @synthesize confirmButtonText=_confirmButtonText;
@property(nonatomic) _Bool needMobileSp; // @synthesize needMobileSp=_needMobileSp;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(nonatomic) _Bool needPassword; // @synthesize needPassword=_needPassword;
@property(retain, nonatomic) NSArray *approveTextList; // @synthesize approveTextList=_approveTextList;
@property(retain, nonatomic) NSString *approveImgUrl; // @synthesize approveImgUrl=_approveImgUrl;
@property(retain, nonatomic) NSString *approvePageTitle; // @synthesize approvePageTitle=_approvePageTitle;
@property(retain, nonatomic) NSString *approvePageType; // @synthesize approvePageType=_approvePageType;
- (void).cxx_destruct;

@end

