//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class BEEAsset, BEEVideoLabelView, UIImageView;

@interface BEEQuickPickCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_checkIconView;
    BEEVideoLabelView *_videoView;
    int _positionStatus;
    _Bool _hasSetVoiceOver;
    _Bool _picked;
    BEEAsset *_beeAsset;
}

@property(nonatomic) _Bool picked; // @synthesize picked=_picked;
@property(retain, nonatomic) BEEAsset *beeAsset; // @synthesize beeAsset=_beeAsset;
- (void).cxx_destruct;
- (void)setVoiceOverWithForce:(_Bool)arg1;
- (void)updateCheckIconViewFrame;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

