//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GO2OGradientButton, NSMutableArray, UIActivityIndicatorView, UILabel, UINavigationBar, UIViewController;

@interface GO2OGradientNavigationBar : UIView
{
    double _barGradientStartPoint;
    double _barGradientEndPoint;
    double _titleGradientStartPoint;
    double _titleGradientEndPoint;
    _Bool _isLoading;
    long long _statusBarStyle;
    GO2OGradientButton *_backButton;
    UILabel *_titleLabel;
    UINavigationBar *_navBar;
    NSMutableArray *_rightButtons;
    UIActivityIndicatorView *_loadingView;
    UIViewController *_currentController;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak UIViewController *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GO2OGradientButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)hide;
- (void)show;
- (double)alphaValueWithOffset:(double)arg1 start:(double)arg2 end:(double)arg3;
- (void)updateBackButton:(_Bool)arg1;
- (void)updateStatusBar:(_Bool)arg1;
- (void)updateButtons:(double)arg1;
- (void)updateTitle:(double)arg1;
- (void)updateBar:(double)arg1;
- (void)scroll:(double)arg1;
- (void)setTitleGradientStart:(double)arg1 end:(double)arg2;
- (void)setBarGradientStart:(double)arg1 end:(double)arg2;
- (void)addRightButton:(id)arg1;
- (void)setRightButtonArray:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)backButtonTitle;
- (id)initWithTitle:(id)arg1 inController:(id)arg2;

@end

