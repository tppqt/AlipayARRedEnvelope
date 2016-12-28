//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAnimationBaseView.h"

@class UIImageView;

@interface CSparksAnimationView : CAnimationBaseView
{
    _Bool _nowPaused;
    UIImageView *_tail;
    UIImageView *_sparks;
    long long _nowCount;
    long long _loopCount;
    double _delay;
    double _sparksEnlargeRatio;
    double _tailDuration;
    double _sparksDuration;
    long long _loopCountTemp;
    struct CGPoint _sparksCenter;
    struct CGSize _originSize;
}

@property(nonatomic) _Bool nowPaused; // @synthesize nowPaused=_nowPaused;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(nonatomic) struct CGPoint sparksCenter; // @synthesize sparksCenter=_sparksCenter;
@property(nonatomic) long long loopCountTemp; // @synthesize loopCountTemp=_loopCountTemp;
@property(nonatomic) double sparksDuration; // @synthesize sparksDuration=_sparksDuration;
@property(nonatomic) double tailDuration; // @synthesize tailDuration=_tailDuration;
@property(nonatomic) double sparksEnlargeRatio; // @synthesize sparksEnlargeRatio=_sparksEnlargeRatio;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) long long nowCount; // @synthesize nowCount=_nowCount;
@property(retain, nonatomic) UIImageView *sparks; // @synthesize sparks=_sparks;
@property(retain, nonatomic) UIImageView *tail; // @synthesize tail=_tail;
- (void).cxx_destruct;
- (void)ani;
- (void)continueAnimationWorks;
- (void)pauseAnimationWorks;
- (void)stopAnimationWorks;
- (void)startNextAnimationWork;
- (void)startAnimationWorks;

@end

