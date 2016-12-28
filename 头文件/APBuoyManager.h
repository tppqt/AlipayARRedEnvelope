//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBuoyConfigManager, APBuoyInfo, APBuoyView;

@interface APBuoyManager : NSObject
{
    _Bool _isUrlLaunch;
    APBuoyConfigManager *_configManager;
    APBuoyInfo *_buoyInfo;
    APBuoyView *_buoyView;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isUrlLaunch; // @synthesize isUrlLaunch=_isUrlLaunch;
@property(retain, nonatomic) APBuoyView *buoyView; // @synthesize buoyView=_buoyView;
@property(retain, nonatomic) APBuoyInfo *buoyInfo; // @synthesize buoyInfo=_buoyInfo;
@property(retain, nonatomic) APBuoyConfigManager *configManager; // @synthesize configManager=_configManager;
- (void).cxx_destruct;
- (void)addObserverForViewDidAppear;
- (void)removeObserverForViewDidAppear;
- (_Bool)checkFirstLaunchAndLogonState;
- (id)paramsDictionaryForUrl:(id)arg1;
- (_Bool)canShowBuoy:(id)arg1;
- (void)recvUrlDidLaunchAppNotification:(id)arg1;
- (void)recvViewDidAppearNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

