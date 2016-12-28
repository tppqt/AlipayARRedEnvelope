//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface ALPFundButtonView : UIView
{
    UIView *_topLine;
    _Bool _transferOutCanClick;
    UIButton *_transferInButton;
    UIButton *_transferOutButton;
    UIButton *_cdpButton;
    UIView *_spliteLine;
    id <ALPTransferBtnClicked> _clickDelegate;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool transferOutCanClick; // @synthesize transferOutCanClick=_transferOutCanClick;
@property(nonatomic) __weak id <ALPTransferBtnClicked> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(retain, nonatomic) UIView *spliteLine; // @synthesize spliteLine=_spliteLine;
@property(retain, nonatomic) UIButton *cdpButton; // @synthesize cdpButton=_cdpButton;
@property(retain, nonatomic) UIButton *transferOutButton; // @synthesize transferOutButton=_transferOutButton;
@property(retain, nonatomic) UIButton *transferInButton; // @synthesize transferInButton=_transferInButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didClickBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

