//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IStatusBarDelegate.h"

@class AFDAudio, AFEStatusBar, NSString;

@interface FDAlipayCollectNaviView : UIView <IStatusBarDelegate>
{
    float _soundVolume;
    UIView *_backView;
    AFDAudio *_audio;
    AFEStatusBar *_navStatusBarView;
}

@property(retain, nonatomic) AFEStatusBar *navStatusBarView; // @synthesize navStatusBarView=_navStatusBarView;
@property(retain, nonatomic) AFDAudio *audio; // @synthesize audio=_audio;
@property(nonatomic) float soundVolume; // @synthesize soundVolume=_soundVolume;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)onSoundStatusChanged:(_Bool)arg1;
- (void)onButtonCancel;
- (void)showSoundStatus;
- (void)onVolumeNotify:(float)arg1;
- (void)onDetectFinish;
- (void)onRestartDetect;
- (void)addAFEStatusBarView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

