//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYFuCardBaseView.h"

@class NYBrandWordLabel, NYButton, NYFuCardFuView, UIButton, UIImageView, UILabel;

@interface NYFuCardFullAbilityFuView : NYFuCardBaseView
{
    UIButton *_giveButton;
    NYButton *_changeButton;
    UILabel *_tipLabel;
    UIImageView *_tipBackgroundView;
    NYBrandWordLabel *_brandWordLabel;
    NYFuCardFuView *_fuView;
    UIButton *_endbutton;
    struct CGSize _beforeSize;
}

@property(retain, nonatomic) UIButton *endbutton; // @synthesize endbutton=_endbutton;
@property(retain, nonatomic) NYFuCardFuView *fuView; // @synthesize fuView=_fuView;
@property(retain, nonatomic) NYBrandWordLabel *brandWordLabel; // @synthesize brandWordLabel=_brandWordLabel;
@property(retain, nonatomic) UIImageView *tipBackgroundView; // @synthesize tipBackgroundView=_tipBackgroundView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) NYButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIButton *giveButton; // @synthesize giveButton=_giveButton;
@property(nonatomic) struct CGSize beforeSize; // @synthesize beforeSize=_beforeSize;
- (void).cxx_destruct;
- (id)flipOverButton;
- (id)brandLogo;
- (id)brandPicView;
- (void)pressChangeButton;
- (void)pressGiveButton;
- (void)setupEndButton;
- (void)setupBrandWord;
- (void)layoutSubviews;
- (void)setCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

