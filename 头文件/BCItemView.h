//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface BCItemView : UIView
{
    _Bool _selected;
    _Bool _downloaded;
    long long _index;
    unsigned long long _type;
    UILabel *_textLabel;
    UIImageView *_iconView;
    UIImageView *_indicatorView;
    UIActivityIndicatorView *_loadinView;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadinView; // @synthesize loadinView=_loadinView;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)stopLoading;
- (void)startLoading;
- (void)setupSubviewFrames;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2 icon:(id)arg3 text:(id)arg4;

@end

