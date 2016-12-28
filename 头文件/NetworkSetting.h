//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SettingUpdateProtocal.h"

@class NSArray, NSString;

@interface NetworkSetting : NSObject <SettingUpdateProtocal>
{
    _Bool _enableMassProxy;
    _Bool _enableMassProxy4Voice;
    _Bool _enableMassProxy4TFS;
    _Bool _enableMassProxy4Watermark;
    _Bool _enablePing;
    _Bool _useNSBundle;
    _Bool _useWeakNetworkModel;
    _Bool _onlyUseDAsWeakNetwork;
    _Bool _uploadImageConcurrently;
    _Bool _useHttpsByDefault;
    _Bool _needUpdated;
    int _timeout4iCloudSync;
    unsigned long long _timeout4Upload;
    unsigned long long _timeout4Download;
    NSString *_pingHost;
    unsigned long long _period4HandleLowBandwidth;
    unsigned long long _countOfPing;
    unsigned long long _maxSendBufferSize;
    unsigned long long _period4BandwidthSample;
    unsigned long long _maxCongestionResumeEventCount;
    NSString *_userAgent;
    NSString *_host4Reachability;
    unsigned long long _maxWidthForiCloudDownloading;
    NSArray *_uploadBusTypeArray;
    NSArray *_downloadBusTypeArray;
    unsigned long long _maxDjangoDlConcurrentCount;
    unsigned long long _maxUrlDlConcurrentCount;
}

@property(nonatomic) _Bool needUpdated; // @synthesize needUpdated=_needUpdated;
@property(nonatomic) _Bool useHttpsByDefault; // @synthesize useHttpsByDefault=_useHttpsByDefault;
@property(nonatomic) unsigned long long maxUrlDlConcurrentCount; // @synthesize maxUrlDlConcurrentCount=_maxUrlDlConcurrentCount;
@property(nonatomic) unsigned long long maxDjangoDlConcurrentCount; // @synthesize maxDjangoDlConcurrentCount=_maxDjangoDlConcurrentCount;
@property(retain, nonatomic) NSArray *downloadBusTypeArray; // @synthesize downloadBusTypeArray=_downloadBusTypeArray;
@property(retain, nonatomic) NSArray *uploadBusTypeArray; // @synthesize uploadBusTypeArray=_uploadBusTypeArray;
@property(nonatomic) int timeout4iCloudSync; // @synthesize timeout4iCloudSync=_timeout4iCloudSync;
@property(nonatomic) _Bool uploadImageConcurrently; // @synthesize uploadImageConcurrently=_uploadImageConcurrently;
@property(nonatomic) _Bool onlyUseDAsWeakNetwork; // @synthesize onlyUseDAsWeakNetwork=_onlyUseDAsWeakNetwork;
@property(nonatomic) _Bool useWeakNetworkModel; // @synthesize useWeakNetworkModel=_useWeakNetworkModel;
@property(nonatomic) _Bool useNSBundle; // @synthesize useNSBundle=_useNSBundle;
@property(nonatomic) unsigned long long maxWidthForiCloudDownloading; // @synthesize maxWidthForiCloudDownloading=_maxWidthForiCloudDownloading;
@property(copy, nonatomic) NSString *host4Reachability; // @synthesize host4Reachability=_host4Reachability;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long maxCongestionResumeEventCount; // @synthesize maxCongestionResumeEventCount=_maxCongestionResumeEventCount;
@property(nonatomic) unsigned long long period4BandwidthSample; // @synthesize period4BandwidthSample=_period4BandwidthSample;
@property(nonatomic) unsigned long long maxSendBufferSize; // @synthesize maxSendBufferSize=_maxSendBufferSize;
@property(nonatomic) unsigned long long countOfPing; // @synthesize countOfPing=_countOfPing;
@property(nonatomic) unsigned long long period4HandleLowBandwidth; // @synthesize period4HandleLowBandwidth=_period4HandleLowBandwidth;
@property(copy, nonatomic) NSString *pingHost; // @synthesize pingHost=_pingHost;
@property(nonatomic) _Bool enablePing; // @synthesize enablePing=_enablePing;
@property(nonatomic) unsigned long long timeout4Download; // @synthesize timeout4Download=_timeout4Download;
@property(nonatomic) unsigned long long timeout4Upload; // @synthesize timeout4Upload=_timeout4Upload;
@property(nonatomic) _Bool enableMassProxy4Watermark; // @synthesize enableMassProxy4Watermark=_enableMassProxy4Watermark;
@property(nonatomic) _Bool enableMassProxy4TFS; // @synthesize enableMassProxy4TFS=_enableMassProxy4TFS;
@property(nonatomic) _Bool enableMassProxy4Voice; // @synthesize enableMassProxy4Voice=_enableMassProxy4Voice;
@property(nonatomic) _Bool enableMassProxy; // @synthesize enableMassProxy=_enableMassProxy;
- (void).cxx_destruct;
- (void)onSettingUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

