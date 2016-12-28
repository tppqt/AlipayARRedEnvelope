//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton;

@interface HMiniMenuView : UIView <UIGestureRecognizerDelegate>
{
    UIButton *_scanButton;
    UIButton *_payButton;
    UIButton *_searchButton;
    UIView *_lineView;
    UIButton *_moreButton;
    _Bool _iconLoaded;
    id <HMiniMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <HMiniMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doLanuangeChange:(id)arg1;
- (void)resetVoceOverText;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)doTapGesture:(id)arg1;
- (void)doButtonUp:(id)arg1;
- (void)doButtonDown:(id)arg1;
- (void)resetButtonState;
- (void)setButtonHighlight:(struct CGPoint)arg1;
- (void)setTapGestureWithButton:(id)arg1 andActionName:(id)arg2;
- (void)moreButtonClicked;
- (void)searchButtonClicked;
- (void)payButtonClicked;
- (void)scanButtonClicked;
- (void)doLazyLoadIcons;
- (void)setEasyTouch:(id)arg1 xValue:(double)arg2 yValue:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

