//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMapFoundationAES : NSObject
{
}

+ (id)encryptData:(id)arg1 crypt:(unsigned int)arg2 useECBMode:(_Bool)arg3 key:(id)arg4 keyLength:(int)arg5 iv:(const void *)arg6;
+ (id)decryptLocationUploadData:(id)arg1 key:(id)arg2 iv:(const void *)arg3;
+ (id)encryptLocationUploadData:(id)arg1 key:(id)arg2 iv:(const void *)arg3;
+ (id)encryptUsingCBCModeForData:(id)arg1 key:(id)arg2 iv:(const void *)arg3;
+ (id)encryptUsingECBModeForData:(id)arg1 key:(id)arg2;
+ (id)AESKeyWithSize:(unsigned long long)arg1;

@end

