//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APTitleMoreButton, HSearchTitleView;

@interface APHomeNaviView : UIView
{
    HSearchTitleView *_midView;
    APTitleMoreButton *_moreButton;
    UIView *_rightView;
}

+ (id)homeNavigatorView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(readonly, nonatomic) APTitleMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) HSearchTitleView *midView; // @synthesize midView=_midView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clickMoreButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

