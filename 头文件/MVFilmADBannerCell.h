//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MVAdTagView, MVPosterImageView, UILabel;

@interface MVFilmADBannerCell : UICollectionViewCell
{
    MVPosterImageView *_imageView;
    UILabel *_contentLabel;
    MVAdTagView *_adView;
}

@property(retain, nonatomic) MVAdTagView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MVPosterImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)attributeStringWithString:(id)arg1;
- (void)setItem:(id)arg1;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

