//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSDeviceDataManager, LSLaunchParamManager, LSLiveShowDataManager, LSOptionDataManager;

@interface LiveShowContext : NSObject
{
    LSLaunchParamManager *_paramManager;
    LSLiveShowDataManager *_liveShowManager;
    LSDeviceDataManager *_deviceManager;
    LSOptionDataManager *_optionManager;
}

+ (id)shareContext;
@property(retain, nonatomic) LSOptionDataManager *optionManager; // @synthesize optionManager=_optionManager;
@property(retain, nonatomic) LSDeviceDataManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) LSLiveShowDataManager *liveShowManager; // @synthesize liveShowManager=_liveShowManager;
@property(retain, nonatomic) LSLaunchParamManager *paramManager; // @synthesize paramManager=_paramManager;
- (void).cxx_destruct;
- (void)appTerminate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

