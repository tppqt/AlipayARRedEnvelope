//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APRWLock : NSObject
{
    struct _opaque_pthread_rwlockattr_t {
        long long __sig;
        char __opaque[16];
    } _pthread_rwLockAttr;
    struct _opaque_pthread_rwlock_t _pthread_rwLock;
}

- (void)writeUnLock:(int)arg1;
- (int)writeLock;
- (void)readUnLock:(int)arg1;
- (int)readLock;
- (void)dealloc;
- (id)init;

@end

