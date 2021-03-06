//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APActivityIndicatorView, APXMMusicRemoteBuryModel, NSString, UILabel;

@interface BEEMusicView : UIView
{
    NSString *_songName;
    APActivityIndicatorView *_indicatorView;
    APXMMusicRemoteBuryModel *_model;
    NSString *_songId;
    UILabel *_songNameLabel;
    unsigned long long _state;
    id <BEEMusicViewClickDelegate> _delegate;
}

+ (id)currentSongId;
@property(nonatomic) __weak id <BEEMusicViewClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (void)setSongId:(id)arg1 remoteBury:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)prepareForCreator;
- (_Bool)canResignFirstResponder;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)endReceiveRemoteControl;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)applicationWillResignActive:(id)arg1;
- (void)beginReceiveRemoteControl;
- (void)removeObserve;
- (void)receiveSyncControl:(id)arg1;
- (void)registerObserve;
- (void)checkNeedRemoteControl;
- (void)hideIndicatorView;
- (void)showIndicatorView;
- (id)getStateImgUrl;
- (void)handleClickbehavior;
- (void)gotoMusicDetailPage;
- (void)clearProgress;
- (void)updateProgress:(double)arg1 totalDuration:(double)arg2;
- (void)updateSongDetail:(id)arg1;
- (void)updateState:(unsigned long long)arg1;

@end

