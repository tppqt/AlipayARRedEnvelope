//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DFMicroApplicationFactory, DFStartApplicationOperation, DTMicroApplication, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface DFMicroApplicationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queueForApp;
    _Bool _existingAppFlag;
    _Bool _shouldHoldLoginApp;
    _Bool _doTransactionFlag;
    NSMutableArray *_applications;
    NSMutableArray *_applicationStack;
    NSMutableSet *_willExitApplications;
    NSHashTable *_startApplicationHandlers;
    DFMicroApplicationFactory *_applicationFactory;
    DTMicroApplication *_launcherApplication;
    NSMutableArray *_pendingOperations;
    DFStartApplicationOperation *_loginOperation;
    NSMutableArray *_appOperationsInTransaction;
    NSMutableDictionary *_appStartFailLog;
}

@property(retain, nonatomic) NSMutableDictionary *appStartFailLog; // @synthesize appStartFailLog=_appStartFailLog;
@property(retain, nonatomic) NSMutableArray *appOperationsInTransaction; // @synthesize appOperationsInTransaction=_appOperationsInTransaction;
@property(retain, nonatomic) DFStartApplicationOperation *loginOperation; // @synthesize loginOperation=_loginOperation;
@property _Bool doTransactionFlag; // @synthesize doTransactionFlag=_doTransactionFlag;
@property _Bool shouldHoldLoginApp; // @synthesize shouldHoldLoginApp=_shouldHoldLoginApp;
@property(retain, nonatomic) NSMutableArray *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(nonatomic) _Bool existingAppFlag; // @synthesize existingAppFlag=_existingAppFlag;
@property(retain, nonatomic) DTMicroApplication *launcherApplication; // @synthesize launcherApplication=_launcherApplication;
@property(retain, nonatomic) DFMicroApplicationFactory *applicationFactory; // @synthesize applicationFactory=_applicationFactory;
@property(retain, nonatomic) NSHashTable *startApplicationHandlers; // @synthesize startApplicationHandlers=_startApplicationHandlers;
@property(retain, nonatomic) NSMutableSet *willExitApplications; // @synthesize willExitApplications=_willExitApplications;
@property(retain, nonatomic) NSMutableArray *applicationStack; // @synthesize applicationStack=_applicationStack;
@property(retain, nonatomic) NSMutableArray *applications; // @synthesize applications=_applications;
- (void).cxx_destruct;
- (void)exitApplicationInTransaction:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startApplicationInTransaction:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)doAppTransaction;
- (void)commitAppTransaction;
- (_Bool)beginAppTransaction;
- (void)logAppStartFailWithName:(id)arg1;
- (void)logNavigationControllerInfoForApp:(id)arg1;
- (id)handleFindNavigationControllerExceptionForApp:(id)arg1;
- (_Bool)checkStartApplicationHandler:(id)arg1 params:(id)arg2;
- (id)findPreviousAppAndNavigationControllerForApp:(id)arg1;
- (id)findNavigationControllerForApp:(id)arg1 inReverse:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 forApplicationObject:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (id)viewControllersOfApplicationObject:(id)arg1;
- (id)viewControllersOfApplication:(id)arg1;
- (id)findApplicationsByName:(id)arg1;
- (void)unregisterStartApplicationHandler:(id)arg1;
- (_Bool)registerStartApplicationHandler:(id)arg1;
- (void)resignLoginHoldingFlag;
- (void)recordWillExitApp:(id)arg1;
- (void)exitToApplication:(id)arg1;
- (long long)findApp:(id)arg1;
- (id)currentApplication;
- (_Bool)exitApplicationAtIndex:(long long)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (id)doExitApplication:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (id)dequeueApplication:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (id)exitApplication:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (id)forceExitApplication:(id)arg1 animated:(_Bool)arg2;
- (id)exitApplication:(id)arg1 animated:(_Bool)arg2;
- (_Bool)doStartApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (void)enqueueApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (void)checkStartApp:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (_Bool)startLogonApplicationForSync:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startLauncherApplication;
- (id)applicationForName:(id)arg1 params:(id)arg2 createIfNotExits:(_Bool)arg3;
- (id)createApplicationForName:(id)arg1 params:(id)arg2;
- (id)init;

@end

