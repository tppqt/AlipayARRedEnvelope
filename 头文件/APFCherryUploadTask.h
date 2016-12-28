//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APFBaseTask.h"

#import "APFDataCenterDelegate.h"

@class AFEAlertView, AFECircularView, APFUploadWaveView, NSString, UIImageView;

@interface APFCherryUploadTask : APFBaseTask <APFDataCenterDelegate>
{
    _Bool _keepUploadPage;
    _Bool _mergeRpc;
    APFUploadWaveView *_waveView;
    UIImageView *_blurredView;
    AFEAlertView *_alertView;
    AFECircularView *_circularView;
}

@property(nonatomic) _Bool mergeRpc; // @synthesize mergeRpc=_mergeRpc;
@property(nonatomic) _Bool keepUploadPage; // @synthesize keepUploadPage=_keepUploadPage;
@property(nonatomic) __weak AFECircularView *circularView; // @synthesize circularView=_circularView;
@property(retain, nonatomic) AFEAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIImageView *blurredView; // @synthesize blurredView=_blurredView;
@property(retain, nonatomic) APFUploadWaveView *waveView; // @synthesize waveView=_waveView;
- (void).cxx_destruct;
- (void)didFinishUploadWithSuccess:(_Bool)arg1 retCode:(id)arg2 retMessage:(id)arg3 extInfo:(id)arg4;
- (long long)remoteCommandFromString:(id)arg1;
- (void)handleNetworkError;
- (void)handleRemoteCommand:(long long)arg1;
- (void)dealloc;
- (void)reset;
- (void)dataCenterClear;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)invokeWithPipeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

