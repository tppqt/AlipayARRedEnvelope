//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface O2OImageCache : NSObject
{
    NSCache *_memCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 WithKey:(id)arg2;
- (id)init;

@end

