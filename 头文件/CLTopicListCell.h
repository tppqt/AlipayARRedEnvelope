//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImage, UIImageView, UILabel, UIView;

@interface CLTopicListCell : UITableViewCell
{
    _Bool _islastCell;
    UIImage *_iconPlaceholderImage;
    UIImageView *_iconImgView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_viewImgView;
    UILabel *_viewLabel;
    UIImageView *_commentImgView;
    UILabel *_commentLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIImageView *commentImgView; // @synthesize commentImgView=_commentImgView;
@property(retain, nonatomic) UILabel *viewLabel; // @synthesize viewLabel=_viewLabel;
@property(retain, nonatomic) UIImageView *viewImgView; // @synthesize viewImgView=_viewImgView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void).cxx_destruct;
- (void)rereshCellithData:(id)arg1 islastCell:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

