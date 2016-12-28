//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSMutableArray;

@interface AOPProxy : NSProxy
{
    id parentObject;
    NSMutableArray *methodStartInterceptors;
    NSMutableArray *methodEndInterceptors;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (void)invokeOriginalMethod:(id)arg1;
- (void)interceptMethodEndForSelector:(SEL)arg1 withInterceptorTarget:(id)arg2 interceptorSelector:(SEL)arg3;
- (void)interceptMethodStartForSelector:(SEL)arg1 withInterceptorTarget:(id)arg2 interceptorSelector:(SEL)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithNewInstanceOfClass:(Class)arg1;
- (id)initWithInstance:(id)arg1;

@end

