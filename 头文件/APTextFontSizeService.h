//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APTextFontSizeService : NSObject
{
}

+ (unsigned long long)levelCount;
+ (void)saveTextFontSizeLevel;
+ (id)defaultFontSizeScales;
+ (void)updateCurrentLevel:(long long)arg1;
+ (double)calculateFontSize:(double)arg1 level:(long long)arg2 fontSizeScales:(id)arg3;
+ (double)calculateFontSize:(double)arg1 level:(long long)arg2;
+ (double)currentScale;
+ (long long)currentLevel;
+ (long long)defaultLevel;

@end

