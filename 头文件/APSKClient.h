//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSKPluginDelegate.h"

@class NSMutableDictionary, NSString;

@interface APSKClient : NSObject <APSKPluginDelegate>
{
    _Bool _disableToastDisplay;
    _Bool _disableErrorPageDisplay;
    _Bool _shareResponse;
    _Bool _shareResult;
    _Bool _handleOpen;
    NSMutableDictionary *_pluginDict;
    id <APSKSharePlugin> _curPlugin;
    CDUnknownBlockType _completionBlock;
    id <APSKClientDelegate> _delegate;
}

+ (_Bool)isAppSupportOpenAPIForChannel:(id)arg1;
+ (_Bool)isAppInstalledForChannel:(id)arg1;
+ (id)defaultPluginDict;
+ (_Bool)handleOpenURL:(id)arg1;
+ (id)appSecretForChannel:(id)arg1;
+ (id)appKeyForChannel:(id)arg1;
+ (_Bool)registerAPPConfig:(id)arg1;
+ (id)pickClient;
@property(nonatomic) __weak id <APSKClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool handleOpen; // @synthesize handleOpen=_handleOpen;
@property(nonatomic) _Bool shareResult; // @synthesize shareResult=_shareResult;
@property(nonatomic) _Bool shareResponse; // @synthesize shareResponse=_shareResponse;
@property(retain, nonatomic) id <APSKSharePlugin> curPlugin; // @synthesize curPlugin=_curPlugin;
@property(nonatomic) _Bool disableErrorPageDisplay; // @synthesize disableErrorPageDisplay=_disableErrorPageDisplay;
@property(nonatomic) _Bool disableToastDisplay; // @synthesize disableToastDisplay=_disableToastDisplay;
@property(retain, nonatomic) NSMutableDictionary *pluginDict; // @synthesize pluginDict=_pluginDict;
- (void).cxx_destruct;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 bizType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeShareResultLog:(id)arg1;
- (void)writeContentLogForMsg:(id)arg1 channel:(id)arg2 bizType:(id)arg3;
- (void)shareResult:(id)arg1;
- (void)getUserAvatarUrl:(id)arg1 forChannel:(id)arg2 delegate:(id)arg3;
- (void)unregisterPluginForChannel:(id)arg1;
- (void)registerPluginClass:(Class *)arg1 forChannel:(id)arg2;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 bizType:(id)arg4;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

