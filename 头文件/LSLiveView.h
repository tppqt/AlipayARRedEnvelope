//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LSCommentViewPositionDelegate.h"
#import "LSLiveBroadcasterDelegate.h"
#import "LSLivePlayerDelegate.h"

@class LSCommentView, LSLiveBroadcaster, LSLivePlayer, NSString;

@interface LSLiveView : UIView <LSLiveBroadcasterDelegate, LSLivePlayerDelegate, LSCommentViewPositionDelegate>
{
    _Bool _isReadyPrepareContact;
    _Bool _keyboardShow;
    int _type;
    LSCommentView *_commentView;
    id <LSLiveViewDelegate> _delegate;
    LSLiveBroadcaster *_liveBroadcaster;
    LSLivePlayer *_livePlayer;
    unsigned long long _errorStatus;
}

@property(nonatomic) unsigned long long errorStatus; // @synthesize errorStatus=_errorStatus;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(retain, nonatomic) LSLivePlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(retain, nonatomic) LSLiveBroadcaster *liveBroadcaster; // @synthesize liveBroadcaster=_liveBroadcaster;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isReadyPrepareContact; // @synthesize isReadyPrepareContact=_isReadyPrepareContact;
@property(nonatomic) __weak id <LSLiveViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak LSCommentView *commentView; // @synthesize commentView=_commentView;
- (void).cxx_destruct;
- (void)finishPrepare;
- (void)prepareLive;
- (void)touchPlayerFullScreen;
- (void)commentViewReset:(id)arg1;
- (void)commentViewPositionChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)doUpAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotification;
- (void)dealloc;
- (void)playTimeUpdate:(double)arg1;
- (void)hostTap;
- (void)fullScreen:(_Bool)arg1;
- (void)replayToEnd;
- (void)closeLivePlayer;
- (id)hostUserInfo;
- (void)play:(_Bool)arg1;
- (void)playDurationReturn:(double)arg1;
- (void)playStateChanged:(_Bool)arg1;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)setIdentifier:(id)arg1 secret:(id)arg2 encrypt:(id)arg3;
- (void)stopLive;
- (void)stopLivePlaying;
- (void)stopLiveBroadcasting;
- (void)cleanLiveView;
- (void)networkChangeFromWifiToCellar;
- (void)liveShowFocusTap;
- (void)playCurrentTime:(double)arg1;
- (void)beautyModeStatusEditing:(_Bool)arg1;
- (void)liveBroadcasterLinked;
- (void)liveBroadcasterError:(id)arg1;
- (void)closeLiveBroadcaster;
- (void)startBroadcasting:(id)arg1 urlPath:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 liveType:(int)arg2;
- (void)updateWatcherCount:(long long)arg1 withRole:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

