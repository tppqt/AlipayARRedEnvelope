//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTLongLinkData : NSObject
{
}

+ (long long)totalMessageLengthFromResponseDataEx:(char *)arg1 responseDataLength:(unsigned long long)arg2 offset:(unsigned long long)arg3;
+ (long long)totalMessageLengthFromResponseData:(char *)arg1 responseDataLength:(unsigned long long)arg2 offset:(unsigned long long)arg3;
+ (_Bool)isVaildFromResponseData:(char *)arg1 responseDataLength:(unsigned long long)arg2;
+ (id)getResponseWithResponseClass:(Class)arg1 fromJson:(id)arg2;
+ (id)getMessageJsonFromResponseData:(char *)arg1 offset:(unsigned long long)arg2 length:(long long)arg3;
+ (id)getCommandJsonBody:(id)arg1;
+ (id)generateCommand:(unsigned char)arg1 mark:(unsigned char)arg2 type:(unsigned char)arg3 commandJsonBody:(id)arg4;
+ (id)generateCommand:(unsigned char)arg1 mark:(unsigned char)arg2 type:(unsigned char)arg3 commandData:(id)arg4;
+ (id)getCommandData:(char *)arg1 offset:(unsigned long long)arg2 length:(long long)arg3;

@end

