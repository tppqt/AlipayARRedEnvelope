//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface SGFMListBlankView : UIView
{
    _Bool _loading;
    int _listType;
    UIImageView *_iconImageView;
    UILabel *_hintLabel;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) int listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_displayString;

@end

