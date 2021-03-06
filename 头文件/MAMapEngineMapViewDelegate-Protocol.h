//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAIndoorInfo, NSError;

@protocol MAMapEngineMapViewDelegate <NSObject>

@optional
- (void)indoorMapDidHide:(_Bool)arg1;
- (void)indoorMapDidChangeFloorIndex:(MAIndoorInfo *)arg1;
- (void)indoorMapDidShow:(MAIndoorInfo *)arg1;
- (void)didFailLoadingWithError:(NSError *)arg1;
- (void)didFinishLoading;
- (void)willStartLoading;
- (void)referenceDidChange;
- (void)renderWithState:(long long)arg1;
@end

