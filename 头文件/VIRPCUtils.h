//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VIRPCUtils : NSObject
{
}

+ (void)queryOtherVerificationMethods;
+ (void)clearInitRequestData;
+ (id)currentKeyParams;
+ (void)executeRPCCallBySceneId:(id)arg1 bizId:(id)arg2 extParams:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)executeRPCCallByModule:(id)arg1 method:(id)arg2 jsonParam:(id)arg3 showError:(_Bool)arg4 showLoading:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (void)executeRPCCallByModule:(id)arg1 method:(id)arg2 jsonParam:(id)arg3 showError:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)executeRPCCallByModule:(id)arg1 method:(id)arg2 jsonParam:(id)arg3 showLoading:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)executeRPCCallByModule:(id)arg1 method:(id)arg2 jsonParam:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

