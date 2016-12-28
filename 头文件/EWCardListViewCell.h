//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface EWCardListViewCell : UICollectionViewCell
{
    UIView *_whiteboardView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_memoLabel;
    UIImageView *_avatar;
    UILabel *_nameLabel;
    UIImageView *_creditLevel;
    UIImageView *_isReadName;
    UIView *_spTags;
    UILabel *_distanceLabel;
}

@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIView *spTags; // @synthesize spTags=_spTags;
@property(retain, nonatomic) UIImageView *isReadName; // @synthesize isReadName=_isReadName;
@property(retain, nonatomic) UIImageView *creditLevel; // @synthesize creditLevel=_creditLevel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *whiteboardView; // @synthesize whiteboardView=_whiteboardView;
- (void).cxx_destruct;
- (void)updateInfo:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

