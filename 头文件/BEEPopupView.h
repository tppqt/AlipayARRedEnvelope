//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface BEEPopupView : UIView
{
    _Bool _dimmingBackgroundAnimating;
    UIView *_mainView;
    UIView *_containerView;
    UIView *_buttonView;
    double _animationDuration;
    CDUnknownBlockType _showAnimation;
    CDUnknownBlockType _hideAnimation;
    UIView *_attachedView;
    double _dimmingBackgroundAlpha;
    UIView *_currentFirstResponder;
    UIView *_dimmingBackground;
}

@property(retain, nonatomic) UIView *dimmingBackground; // @synthesize dimmingBackground=_dimmingBackground;
@property(nonatomic) __weak UIView *currentFirstResponder; // @synthesize currentFirstResponder=_currentFirstResponder;
@property(nonatomic) double dimmingBackgroundAlpha; // @synthesize dimmingBackgroundAlpha=_dimmingBackgroundAlpha;
@property(nonatomic) _Bool dimmingBackgroundAnimating; // @synthesize dimmingBackgroundAnimating=_dimmingBackgroundAnimating;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(copy, nonatomic) CDUnknownBlockType hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(copy, nonatomic) CDUnknownBlockType showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)notifyAccountDidExit:(id)arg1;
- (CDUnknownBlockType)alertHideAnimation;
- (CDUnknownBlockType)alertShowAnimation;
- (void)hideBackground;
- (void)showBackground;
- (void)dimmingBackgroundTapped:(id)arg1;
- (void)hideWithBlock:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)showWithBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)dealloc;
- (void)buildConstrains;
- (void)setupViews;
- (void)establishNotificationHandlers;
- (id)init;

@end

