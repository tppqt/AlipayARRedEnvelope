//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLTokenView, NSString;

@protocol CLTokenViewDelegate <NSObject>
- (void)tokenViewDidRequestReturn:(CLTokenView *)arg1 replaceWithText:(NSString *)arg2 needEditing:(_Bool)arg3;
- (void)tokenViewDidRequestSelection:(CLTokenView *)arg1;
- (void)tokenViewDidRequestDelete:(CLTokenView *)arg1 replaceWithText:(NSString *)arg2 needEditing:(_Bool)arg3;
@end

