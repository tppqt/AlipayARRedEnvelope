//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class NSString, PPChatAppBiz, PPChatContext, UIViewController;

@interface PPChatAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_publicId;
    UIViewController *_rootController;
    PPChatContext *_context;
    PPChatAppBiz *_appBiz;
}

+ (id)context;
@property(retain, nonatomic) PPChatAppBiz *appBiz; // @synthesize appBiz=_appBiz;
@property(retain, nonatomic) PPChatContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (_Bool)startPPChatNotMainViewFromLifeApp:(id)arg1;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

