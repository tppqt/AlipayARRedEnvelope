//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont, UIImage;

@protocol APThemeValuePath <NSObject>
- (_Bool)definedForPathNoRecursion:(NSString *)arg1;
- (_Bool)definedForPath:(NSString *)arg1;
- (UIFont *)fontForPath:(NSString *)arg1;
- (UIImage *)imageForPath:(NSString *)arg1;
- (_Bool)boolForPath:(NSString *)arg1;
- (float)floatForPath:(NSString *)arg1;
- (long long)intForPath:(NSString *)arg1;
- (UIColor *)colorForPath:(NSString *)arg1;
- (NSString *)stringForPath:(NSString *)arg1;
@end

