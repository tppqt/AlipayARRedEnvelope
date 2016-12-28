//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSMSToString.h"

@class HSMSTid, NSString;

@interface HSMSPrepareApproveReq : HSMSToString
{
    NSString *_approveId;
    NSString *_approveType;
    HSMSTid *_tid;
    NSString *_partnerId;
    NSString *_targetId;
    NSString *_targetType;
    NSString *_appId;
    NSString *_scope;
    NSString *_targetTypeExt;
}

@property(retain, nonatomic) NSString *targetTypeExt; // @synthesize targetTypeExt=_targetTypeExt;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) HSMSTid *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *approveType; // @synthesize approveType=_approveType;
@property(retain, nonatomic) NSString *approveId; // @synthesize approveId=_approveId;
- (void).cxx_destruct;

@end

