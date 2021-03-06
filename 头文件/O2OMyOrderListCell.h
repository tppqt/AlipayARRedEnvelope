//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListCell.h"

@class O2OEnlargeButton, UIButton, UIImageView, UILabel, UIView;

@interface O2OMyOrderListCell : VZListCell
{
    UIImageView *_shopIconImageView;
    UILabel *_shopNameLabel;
    UILabel *_billInfoLabel;
    UILabel *_timeLabel;
    O2OEnlargeButton *_commentButton;
    UIView *_mSepLine;
    UILabel *_mTipLabel;
    UIImageView *_mArrowImageView;
    UIButton *_mBackButton;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *mBackButton; // @synthesize mBackButton=_mBackButton;
@property(retain, nonatomic) UIImageView *mArrowImageView; // @synthesize mArrowImageView=_mArrowImageView;
@property(retain, nonatomic) UILabel *mTipLabel; // @synthesize mTipLabel=_mTipLabel;
@property(retain, nonatomic) UIView *mSepLine; // @synthesize mSepLine=_mSepLine;
@property(retain, nonatomic) O2OEnlargeButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *billInfoLabel; // @synthesize billInfoLabel=_billInfoLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIImageView *shopIconImageView; // @synthesize shopIconImageView=_shopIconImageView;
- (void).cxx_destruct;
- (void)mButtonAction;
- (void)goPublishComment:(id)arg1;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

