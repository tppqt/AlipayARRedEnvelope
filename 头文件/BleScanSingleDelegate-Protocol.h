//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BleScanSingle, NSError, NSMutableArray;

@protocol BleScanSingleDelegate <NSObject>
- (void)bleScan:(BleScanSingle *)arg1 didScanError:(NSError *)arg2;
- (void)bleScan:(BleScanSingle *)arg1 didScanInfos:(NSMutableArray *)arg2;
@end

