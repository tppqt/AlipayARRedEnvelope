//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface ARESenderBarView : UIView
{
    UIButton *_businessLogoButton;
    NSString *_senderMemo;
    UIButton *_userHeaderButton;
    UIImageView *_popupAskView;
    UIImageView *_backgroundView;
    UILabel *_memoLabel;
}

@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *popupAskView; // @synthesize popupAskView=_popupAskView;
@property(retain, nonatomic) UIButton *userHeaderButton; // @synthesize userHeaderButton=_userHeaderButton;
@property(copy, nonatomic) NSString *senderMemo; // @synthesize senderMemo=_senderMemo;
@property(retain, nonatomic) UIButton *businessLogoButton; // @synthesize businessLogoButton=_businessLogoButton;
- (void).cxx_destruct;
- (void)simulateTouchProfile;
- (void)updateSenderBarWithType:(unsigned long long)arg1;
- (void)closeAskTips;
- (void)popupAskTips;
- (void)layoutSubviews;
- (void)setupViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

