//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMobileSecurityResult.h"

@class NSDate, NSString;

@interface MSDeviceLockOperateResult : MSMobileSecurityResult
{
    NSString *_userId;
    NSString *_currentLockStatus;
    NSString *_lastPlateForm;
    NSDate *_lastCloseTime;
    NSDate *_lastOpenTime;
    NSString *_lastOperate;
}

@property(retain, nonatomic) NSString *lastOperate; // @synthesize lastOperate=_lastOperate;
@property(retain, nonatomic) NSDate *lastOpenTime; // @synthesize lastOpenTime=_lastOpenTime;
@property(retain, nonatomic) NSDate *lastCloseTime; // @synthesize lastCloseTime=_lastCloseTime;
@property(retain, nonatomic) NSString *lastPlateForm; // @synthesize lastPlateForm=_lastPlateForm;
@property(retain, nonatomic) NSString *currentLockStatus; // @synthesize currentLockStatus=_currentLockStatus;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

