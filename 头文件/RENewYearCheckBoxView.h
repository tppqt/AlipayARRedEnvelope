//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSURL, UIButton, UIImage, UIImageView, UILabel;

@interface RENewYearCheckBoxView : UIView
{
    UIImage *checkedImage;
    UIImage *unCheckImage;
    id <RENewYearCheckBoxViewDelegate> _delegate;
    UIView *_contentView;
    UIImageView *_checkBoxImageView;
    UILabel *_textLabel;
    UIButton *_linkBtn;
    UIButton *_checkBoxBtn;
    NSURL *_linkUrl;
    NSURL *_checkBoxUrl;
}

@property(retain, nonatomic) NSURL *checkBoxUrl; // @synthesize checkBoxUrl=_checkBoxUrl;
@property(retain, nonatomic) NSURL *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) UIButton *checkBoxBtn; // @synthesize checkBoxBtn=_checkBoxBtn;
@property(retain, nonatomic) UIButton *linkBtn; // @synthesize linkBtn=_linkBtn;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *checkBoxImageView; // @synthesize checkBoxImageView=_checkBoxImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <RENewYearCheckBoxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkBtnTapped;
- (void)onCheckBoxBtnTapped;
@property(readonly, nonatomic) _Bool isChecked;
- (void)setCheckBoxWithState:(_Bool)arg1 text:(id)arg2 linkText:(id)arg3 urlString:(id)arg4;
- (void)setLinkWithText:(id)arg1 urlString:(id)arg2 color:(id)arg3 endArrow:(_Bool)arg4;
- (void)setLinkWithText:(id)arg1 urlString:(id)arg2 color:(id)arg3;
- (void)setLinkWithText:(id)arg1 urlString:(id)arg2;
- (void)setupCustomConstrains;
- (void)setupCustomViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

