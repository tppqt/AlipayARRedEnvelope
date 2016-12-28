//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTMicroApplication, NSDictionary, NSString, UINavigationController, UIViewController;

@protocol DTMicroApplicationDelegate <NSObject>
- (UIViewController *)rootControllerInApplication:(DTMicroApplication *)arg1;

@optional
- (long long)applicationLaunchMode:(DTMicroApplication *)arg1 params:(NSDictionary *)arg2;
- (void)applicationDidPresent:(DTMicroApplication *)arg1 params:(NSDictionary *)arg2;
- (void)applicationShouldPresent:(DTMicroApplication *)arg1 params:(NSDictionary *)arg2 navigationController:(UINavigationController *)arg3;
- (void)application:(DTMicroApplication *)arg1 didReceviceMessage:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (_Bool)applicationStartRootControllerWithNoAnimation:(DTMicroApplication *)arg1;
- (_Bool)applicationShouldTerminate:(DTMicroApplication *)arg1;
- (_Bool)applicationShouldStartMultapplication:(NSDictionary *)arg1 launchMode:(long long)arg2 sourceId:(NSString *)arg3;
- (_Bool)applicationShouldStart:(DTMicroApplication *)arg1 params:(NSDictionary *)arg2 aunchMode:(long long)arg3;
- (void)applicationWillTerminate:(DTMicroApplication *)arg1 animated:(_Bool)arg2;
- (void)applicationWillTerminate:(DTMicroApplication *)arg1;
- (void)application:(DTMicroApplication *)arg1 didResumeWithOptions:(NSDictionary *)arg2;
- (void)applicationDidResume:(DTMicroApplication *)arg1;
- (void)application:(DTMicroApplication *)arg1 willResumeWithOptions:(NSDictionary *)arg2;
- (void)applicationWillPause:(DTMicroApplication *)arg1;
- (void)applicationDidFinishLaunching:(DTMicroApplication *)arg1;
- (void)application:(DTMicroApplication *)arg1 willStartLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidCreate:(DTMicroApplication *)arg1;
@end

