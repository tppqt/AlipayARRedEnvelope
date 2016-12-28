//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface TapAssetView : UIView
{
    _Bool _selected;
    _Bool _disabled;
    id <TapAssetViewDelegate> _delegate;
    UIImageView *_selectView;
}

+ (void)initialize;
@property(retain, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) __weak id <TapAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

