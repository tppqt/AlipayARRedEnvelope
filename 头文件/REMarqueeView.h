//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface REMarqueeView : UIView
{
    _Bool _isAnimating;
    UIView *_currentView;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
- (void).cxx_destruct;
- (id)buildAnimationView:(id)arg1;
- (void)animationWithView:(id)arg1 duration:(double)arg2 isVertical:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 initView:(id)arg2;

@end

