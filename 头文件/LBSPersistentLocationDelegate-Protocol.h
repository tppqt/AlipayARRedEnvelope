//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSError;

@protocol LBSPersistentLocationDelegate <NSObject>
- (void)locationSucceedWithData:(CLLocation *)arg1;
- (void)locationFailWithError:(NSError *)arg1;
@end

