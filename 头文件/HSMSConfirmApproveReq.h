//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSMSToString.h"

@class HSMSTid, NSArray, NSDictionary, NSString;

@interface HSMSConfirmApproveReq : HSMSToString
{
    NSDictionary *_mobileOperationEnvironment;
    HSMSTid *_tid;
    NSString *_password;
    NSArray *_selectedAuthIdList;
    NSString *_approveId;
    NSString *_approveType;
    NSString *_partnerId;
    NSString *_targetId;
    NSString *_targetType;
    NSString *_targetTypeExt;
    NSString *_passwordType;
    NSString *_appId;
    NSString *_openId;
    NSString *_scope;
}

+ (Class)selectedAuthIdListElementClass;
+ (Class)mobileOperationEnvironmentElementClass;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *targetTypeExt; // @synthesize targetTypeExt=_targetTypeExt;
@property(retain, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *approveType; // @synthesize approveType=_approveType;
@property(retain, nonatomic) NSString *approveId; // @synthesize approveId=_approveId;
@property(retain, nonatomic) NSArray *selectedAuthIdList; // @synthesize selectedAuthIdList=_selectedAuthIdList;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) HSMSTid *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSDictionary *mobileOperationEnvironment; // @synthesize mobileOperationEnvironment=_mobileOperationEnvironment;
- (void).cxx_destruct;

@end

