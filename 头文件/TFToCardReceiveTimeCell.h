//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface TFToCardReceiveTimeCell : UITableViewCell
{
    _Bool _highlightable;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIImageView *_statusIconView;
    UIView *_topLine;
    UIView *_bottomLine;
}

+ (double)cellHeightWithDes:(id)arg1;
@property(nonatomic) _Bool highlightable; // @synthesize highlightable=_highlightable;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *statusIconView; // @synthesize statusIconView=_statusIconView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)reset;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionStyle:(long long)arg1;
- (void)updateTitle:(id)arg1 description:(id)arg2 status:(long long)arg3 loc:(long long)arg4;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

