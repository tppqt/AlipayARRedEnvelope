//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VIModule.h"

@class NSDictionary, NSNumber, NSString, UIViewController;

@interface VIModule : NSObject <VIModule>
{
    NSString *_moduleName;
    NSString *_data;
    CDUnknownBlockType _callback;
    NSString *_verifyCode;
    NSString *_verifyMsg;
    NSNumber *_isModuleExiting;
    NSDictionary *_preModuleData;
    UIViewController *_rootViewController;
    NSNumber *_isFirstModule;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *isFirstModule; // @synthesize isFirstModule=_isFirstModule;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *preModuleData; // @synthesize preModuleData=_preModuleData;
@property(retain, nonatomic) NSNumber *isModuleExiting; // @synthesize isModuleExiting=_isModuleExiting;
@property(retain, nonatomic) NSString *verifyMsg; // @synthesize verifyMsg=_verifyMsg;
@property(retain, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)remoteLogWithResponse:(id)arg1;
- (void)invalidate;
- (void)popToRootAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callbackOnMainThreadWithResponse:(id)arg1 animated:(_Bool)arg2;
- (void)callbackWithResponse:(id)arg1;
- (void)callbackWithResponse:(id)arg1 animated:(_Bool)arg2;
- (void)cancelWithSubCode:(id)arg1 animated:(_Bool)arg2;
- (void)cancelAnimated:(_Bool)arg1;
- (void)failAnimated:(_Bool)arg1;
- (void)onLogout;
- (void)start;
- (_Bool)isParamsValid;
- (_Bool)isLiving;
- (_Bool)buildModuleWithString:(id)arg1;
- (id)initWithString:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

