//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface H5LaunchParamsProcessor : NSObject
{
}

+ (id)getFinallaunchOptions:(id)arg1 appId:(id)arg2 sourceId:(id)arg3;
+ (void)selectOptionForName:(id)arg1 shortName:(id)arg2 inDictionary:(id)arg3 acceptableValues:(id)arg4 selectedIndex:(int)arg5;
+ (id)postprocessLaunchOptions:(id)arg1 appId:(id)arg2;
+ (id)preprocessLaunchOptions:(id)arg1 appId:(id)arg2;
+ (void)checkAndProcessLaunchParams:(id)arg1 urlString:(id)arg2;
+ (void)checkShowOptionMenu:(id)arg1 urlString:(id)arg2;
+ (void)checkShowDomain:(id)arg1 urlString:(id)arg2;
+ (void)checkPullRefresh:(id)arg1 urlString:(id)arg2;
+ (void)checkCanPullDown:(id)arg1 urlString:(id)arg2;
+ (_Bool)isAliOrFileUrl:(id)arg1;
+ (_Bool)isAlipayOrFileUrl:(id)arg1;

@end

