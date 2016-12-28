//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class BEEMusicButton, CAGradientLayer, CALayer, CATextLayer, NSMutableDictionary, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface BEEPhotoGalleryCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    CATextLayer *_watermarkTextLayer;
    UILabel *_photoMiddleTextLabel;
    UILabel *_photoBottomTextLabel;
    CALayer *_photoMaskLayer;
    CAGradientLayer *_maskGradientLayer;
    NSString *_lastUrlString;
    _Bool _enableBottomAction;
    NSString *_photoUrl;
    UIImageView *_photoView;
    double _photoViewHeight;
    UILabel *_titleLabel;
    NSString *_photoWaterMark;
    NSString *_songId;
    BEEMusicButton *_musicPlayer;
    NSMutableDictionary *_cellMonitorDic;
    NSString *_business;
    unsigned long long _cellType;
    id <BEEPhotoGalleryViewDelegate> _galleryDelegate;
}

@property(nonatomic) __weak id <BEEPhotoGalleryViewDelegate> galleryDelegate; // @synthesize galleryDelegate=_galleryDelegate;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSMutableDictionary *cellMonitorDic; // @synthesize cellMonitorDic=_cellMonitorDic;
@property(nonatomic) _Bool enableBottomAction; // @synthesize enableBottomAction=_enableBottomAction;
@property(retain, nonatomic) BEEMusicButton *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *photoWaterMark; // @synthesize photoWaterMark=_photoWaterMark;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double photoViewHeight; // @synthesize photoViewHeight=_photoViewHeight;
@property(retain, nonatomic) UIImageView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void).cxx_destruct;
- (void)didSelectedCell:(id)arg1;
- (void)updateTiTleLabelWithTitleString:(id)arg1;
- (void)updatePhotoImageView;
- (void)updateViewWithPhotoData:(id)arg1;
- (id)createUILableNumberOfLine:(long long)arg1 textColorRgb:(id)arg2 fontSize:(double)arg3;
- (void)initMusicPlayer;
- (void)initPhotoMaskLayer;
- (void)initPhotoBottomTitleLabel;
- (void)initPhotoMiddleTitleLabel;
- (void)initWaterMarkLayer;
- (void)initMaskLayer;
- (void)initPhotoViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

