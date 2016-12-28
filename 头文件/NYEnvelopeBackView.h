//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REEnvelopeView.h"

@class EnvelopePrizeInfoPB, NYAdjustmentLabel, NYBrandPicView, NYBrandWordLabel, NYButton, NYFuBackgroundView, NYMerchantLogoImageView, UIButton, UIView;

@interface NYEnvelopeBackView : REEnvelopeView
{
    _Bool _hasInit;
    struct CGRect _contentRect;
    struct CGSize _logoSize;
    int _envelopeBackType;
    int _viewStyle;
    CDUnknownBlockType _confirmButtonClick;
    CDUnknownBlockType _cancelButtonClick;
    CDUnknownBlockType _linkClick;
    NYFuBackgroundView *_backgroundImageView;
    NYBrandPicView *_frontAdImage;
    NYMerchantLogoImageView *_merchantlogoView;
    NYBrandWordLabel *_merchantWishLabel;
    NYButton *_operateButton;
    NYAdjustmentLabel *_priceLabel;
    UIView *_bottomView;
    NYAdjustmentLabel *_markLabel;
    UIButton *_closeButton;
    EnvelopePrizeInfoPB *_envelopePrizeInfoPB;
    UIButton *_operateButton1;
    NYAdjustmentLabel *_fuPackageMarkLabel;
}

@property(retain, nonatomic) NYAdjustmentLabel *fuPackageMarkLabel; // @synthesize fuPackageMarkLabel=_fuPackageMarkLabel;
@property(retain, nonatomic) UIButton *operateButton1; // @synthesize operateButton1=_operateButton1;
@property(nonatomic) int viewStyle; // @synthesize viewStyle=_viewStyle;
@property(retain, nonatomic) EnvelopePrizeInfoPB *envelopePrizeInfoPB; // @synthesize envelopePrizeInfoPB=_envelopePrizeInfoPB;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NYAdjustmentLabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NYAdjustmentLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) NYButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) NYBrandWordLabel *merchantWishLabel; // @synthesize merchantWishLabel=_merchantWishLabel;
@property(retain, nonatomic) NYMerchantLogoImageView *merchantlogoView; // @synthesize merchantlogoView=_merchantlogoView;
@property(retain, nonatomic) NYBrandPicView *frontAdImage; // @synthesize frontAdImage=_frontAdImage;
@property(retain, nonatomic) NYFuBackgroundView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType linkClick; // @synthesize linkClick=_linkClick;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonClick; // @synthesize cancelButtonClick=_cancelButtonClick;
@property(copy, nonatomic) CDUnknownBlockType confirmButtonClick; // @synthesize confirmButtonClick=_confirmButtonClick;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeCurrent;
- (void)operateButton1Click;
- (id)backgroundView;
- (void)setupCustomContaints;
- (void)renderFuPackage:(id)arg1;
- (void)renderRedEnvelope:(id)arg1;
- (void)presentWithFromView:(id)arg1;
- (_Bool)isRedStyle;
- (void)hiddenCloseButton;
- (void)setupCustomViews;
- (void)operateButtonClick;
- (void)setLinkClick:(CDUnknownBlockType)arg1 linkTitle:(id)arg2;
- (void)setInnerConfirmButtonClick:(CDUnknownBlockType)arg1 buttonTitle:(id)arg2;
- (void)setConfirmButtonClick:(CDUnknownBlockType)arg1 buttonTitle:(id)arg2;
- (void)setSize:(struct CGSize)arg1 contentRect:(struct CGRect)arg2;
- (void)setSize:(struct CGSize)arg1;
- (id)initWithViewStyle:(int)arg1;
- (id)init;

@end

