//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WearalbeAppDelegate.h"

#import "DTMicroApplicationDelegate.h"

@class NSString, SWHomeController;

@interface BraceletAppDelegate : WearalbeAppDelegate <DTMicroApplicationDelegate>
{
    SWHomeController *_rootController;
}

@property(retain, nonatomic) SWHomeController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

