//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSString, UIButton, UIImageView, UIScrollView;

@interface APSKLaunchpad : UIView
{
    id <APSKLaunchpadDelegate> _delegate;
    id <APSKLaunchpadDataSource> _dataSource;
    NSArray *_channels;
    long long _padType;
    UIView *_backgroundView;
    NSDictionary *_layoutConfig;
    UIView *_boardView;
    UIButton *_cancelBtn;
    UIScrollView *_shareScrollView;
    UIScrollView *_actionScrollView;
    UIView *_preSuperView;
    UIImageView *_blurImageView;
    NSString *_title;
    UIView *_titleView;
    double _titleHeight;
}

+ (void)registerEnabledChannels:(id)arg1 extraInfo:(id)arg2;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(nonatomic) __weak UIView *preSuperView; // @synthesize preSuperView=_preSuperView;
@property(retain, nonatomic) UIScrollView *actionScrollView; // @synthesize actionScrollView=_actionScrollView;
@property(retain, nonatomic) UIScrollView *shareScrollView; // @synthesize shareScrollView=_shareScrollView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *boardView; // @synthesize boardView=_boardView;
@property(retain, nonatomic) NSDictionary *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long padType; // @synthesize padType=_padType;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(nonatomic) __weak id <APSKLaunchpadDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <APSKLaunchpadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyBlurEffect;
- (id)navigationControllerForView:(id)arg1;
- (id)filteredChannelsWithRawChannels:(id)arg1;
- (void)onActivityClicked:(id)arg1;
- (void)onCancelClick:(id)arg1;
- (void)initBackgroundView;
- (void)initCancelButton;
- (void)initActionsViews;
- (void)initAcitivityViewsForChannels:(id)arg1;
- (void)setupSubviews;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showForView:(id)arg1 animated:(_Bool)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithChannels:(id)arg1 title:(id)arg2 dataSource:(id)arg3 sort:(_Bool)arg4;
- (id)initWithTitle:(id)arg1 padType:(long long)arg2 bizType:(id)arg3 dataSource:(id)arg4;
- (id)initWithChannels:(id)arg1 title:(id)arg2 sort:(_Bool)arg3;
- (id)initWithChannels:(id)arg1 sort:(_Bool)arg2;
- (id)initWithChannels:(id)arg1 dataSource:(id)arg2;
- (id)initWithChannels:(id)arg1;

@end

