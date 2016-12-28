//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REEnvelopeView.h"

#import "RENewYearCheckBoxViewDelegate.h"

@class NSString, REImageView, RENewYearCheckBoxView, UIButton, UILabel;

@interface REEnvelopeOpenedView : REEnvelopeView <RENewYearCheckBoxViewDelegate>
{
    REImageView *_logoView;
    UILabel *_titleLabel;
    UILabel *_moneyLabel;
    UILabel *_moneyTipLabel;
    UILabel *_remarkLabel;
    UIButton *_closeButton;
    UIButton *_mainButton;
    RENewYearCheckBoxView *_bottomLink;
    id <REEnvelopeOpenedViewDelegate> _delegate;
}

@property(nonatomic) __weak id <REEnvelopeOpenedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)newYearCheckBoxViewLinkClicked:(id)arg1;
- (void)buttonClicked;
- (void)closeButtonClicked;
- (void)setLinkText:(id)arg1 andLink:(id)arg2;
- (void)setButtonText:(id)arg1;
- (void)setRemarkText:(id)arg1;
- (void)setMoneyTip:(id)arg1;
- (void)setMoneyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setlogoUrl:(id)arg1;
- (void)viewDidDismiss;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

