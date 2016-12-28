//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImage, UIImageView, UILabel;

@interface REDialogView : UIView
{
    _Bool _dismissOnClick;
    id <REDialogViewDelegate> _delegate;
    UIImageView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    NSMutableArray *_buttons;
    UIImage *_topIcon;
    UILabel *_detailTextLabel;
    UIView *_maskView;
    NSArray *_buttonTitles;
    double _iconOffsetY;
    double _textOffsetY;
    CDUnknownBlockType _onConfirm;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType onConfirm; // @synthesize onConfirm=_onConfirm;
@property(nonatomic) double textOffsetY; // @synthesize textOffsetY=_textOffsetY;
@property(nonatomic) double iconOffsetY; // @synthesize iconOffsetY=_iconOffsetY;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool dismissOnClick; // @synthesize dismissOnClick=_dismissOnClick;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UIImage *topIcon; // @synthesize topIcon=_topIcon;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <REDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showInView:(id)arg1;
- (void)show;
- (void)layoutSubviews;
- (void)onButtonClick:(id)arg1;
- (id)initWithTitle:(id)arg1 content:(id)arg2 buttonTitles:(id)arg3 onConform:(CDUnknownBlockType)arg4;

@end

