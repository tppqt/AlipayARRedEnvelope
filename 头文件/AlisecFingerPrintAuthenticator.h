//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AlisecFingerPrintAuthenticator : NSObject
{
}

+ (id)getFingerprintsHash;
+ (id)generateModel;
+ (void)verify:(id)arg1 reasonTitle:(id)arg2 desc:(id)arg3 callback:(CDUnknownBlockType)arg4 context:(id)arg5;
+ (void)verify:(id)arg1 reasonTitle:(id)arg2 desc:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (_Bool)isWellKnownTouchIdDeviceSince201505:(id)arg1;
+ (_Bool)doesLocalDeviceSupportTouchId;
+ (int)checkTouchIDStatus;
+ (_Bool)isTouchIDAvailable;
+ (_Bool)isTouchIDAvailable:(int)arg1;

@end

