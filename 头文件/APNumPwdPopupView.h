//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APNumPwdInputViewDelegate.h"

@class APButton, APNumPwdInputView, NSString, UIImageView, UILabel;

@interface APNumPwdPopupView : UIView <APNumPwdInputViewDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    APButton *_cancelBtn;
    APButton *_confirmBtn;
    APNumPwdInputView *_pwdInputView;
    CDUnknownBlockType _callback;
    UILabel *_titleLabel;
    UIImageView *_titleLineView;
    UIImageView *_buttonLineView;
    APNumPwdInputView *_inputView;
    UIImageView *_backgroundView;
    UIImageView *_titleLineImageView;
    UIView *_subtitleView;
    APButton *_topLeftButton;
    APButton *_topRightButton;
}

+ (double)subtitleViewWidth;
@property(retain, nonatomic) APButton *topRightButton; // @synthesize topRightButton=_topRightButton;
@property(retain, nonatomic) APButton *topLeftButton; // @synthesize topLeftButton=_topLeftButton;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIImageView *titleLineImageView; // @synthesize titleLineImageView=_titleLineImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) APNumPwdInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIImageView *buttonLineView; // @synthesize buttonLineView=_buttonLineView;
@property(retain, nonatomic) UIImageView *titleLineView; // @synthesize titleLineView=_titleLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak APNumPwdInputView *pwdInputView; // @synthesize pwdInputView=_pwdInputView;
@property(nonatomic) __weak APButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(nonatomic) __weak APButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)onPasswordDidChange:(id)arg1;
- (void)clearBlock;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)presentWithinWindow:(id)arg1;
- (void)presentWithinWindow:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)onConfirm:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)layoutSubviews;
- (void)createSubtitleViewWithExistView:(id)arg1 backgroundView:(id)arg2;
- (void)showSubtitleView:(id)arg1;
- (void)actionBack;
- (void)addLeftBackButtonTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg1 subtitleView:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 confirmButtonTitle:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

