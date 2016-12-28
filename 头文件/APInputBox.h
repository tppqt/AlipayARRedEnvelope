//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APTextField, APThemeFetch, NSString, UIButton, UIImageView, UILabel;

@interface APInputBox : UIView
{
    _Bool _buttonVisible;
    _Bool _settingText;
    _Bool _hidesButtonWhileNotEmpty;
    _Bool _hidesButton;
    int _style;
    APTextField *_textField;
    NSString *_textFieldFormat;
    UIImageView *_backgroundImage;
    double _horizontalMargin;
    UIButton *_iconButton;
    UILabel *_titleLabel;
    double _textFieldHorizontalMargin;
    double _titleLabelWidth;
    long long _inputBoxType;
    APThemeFetch *_fetch;
}

+ (_Bool)isCell:(id)arg1;
+ (float)heightOfControl;
+ (id)inputboxWithOriginY:(double)arg1 buttonIcon:(id)arg2 inputboxType:(long long)arg3;
+ (id)inputboxWithOriginY:(double)arg1 inputboxType:(long long)arg2;
+ (id)inputBoxWithOriginY:(double)arg1 placeHolder:(id)arg2 type:(long long)arg3;
+ (id)inputBoxWithOriginY:(double)arg1 placeHolder:(id)arg2;
@property(retain, nonatomic) APThemeFetch *fetch; // @synthesize fetch=_fetch;
@property(nonatomic) long long inputBoxType; // @synthesize inputBoxType=_inputBoxType;
@property(nonatomic) double titleLabelWidth; // @synthesize titleLabelWidth=_titleLabelWidth;
@property(nonatomic) double textFieldHorizontalMargin; // @synthesize textFieldHorizontalMargin=_textFieldHorizontalMargin;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(readonly, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool hidesButton; // @synthesize hidesButton=_hidesButton;
@property(nonatomic) _Bool hidesButtonWhileNotEmpty; // @synthesize hidesButtonWhileNotEmpty=_hidesButtonWhileNotEmpty;
@property(retain, nonatomic) NSString *textFieldFormat; // @synthesize textFieldFormat=_textFieldFormat;
@property(retain, nonatomic) APTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
@property(retain, nonatomic) NSString *textFieldText;
- (struct _NSRange)rangeFromTextRange:(id)arg1;
- (id)textRangeFromRange:(struct _NSRange)arg1;
- (void)updateTextFieldTextIfNecessary;
- (_Bool)iconButtonShouldBeVisible;
- (void)layoutIfNecessary;
- (_Bool)isSupportSiri;
- (void)textFieldTextDidChange;
- (_Bool)checkInputValidity;
- (void)layoutSubviews;
- (void)tapTitleLabel:(id)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)colorWithRGB:(int)arg1;
- (_Bool)shouldChangeRange:(struct _NSRange)arg1 replacementString:(id)arg2 withFormatStringMaxLength:(int)arg3;
- (_Bool)shouldChangeRange:(struct _NSRange)arg1 replacementString:(id)arg2 withMaxLength:(int)arg3;
- (void)setRightButtonIcon:(id)arg1;
- (id)formatText:(id)arg1;
- (void)buildIconButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputboxType:(long long)arg2;
- (void)titleLabelDidTaped;
- (void)extendClickZone;

@end

