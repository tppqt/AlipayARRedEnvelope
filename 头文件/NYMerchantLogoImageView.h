//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NYEnvelopeView, UIImageView;

@interface NYMerchantLogoImageView : UIView
{
    CAShapeLayer *_layer;
    struct CGSize _viewSize;
    UIImageView *_imageView;
    NYEnvelopeView *enveView;
}

+ (id)maskLayer:(id)arg1;
- (void).cxx_destruct;
- (void)setLogoUrl:(id)arg1;
- (void)setLogoBorderColor:(id)arg1;
- (void)layoutSubviews;
- (void)setImageWithURL:(id)arg1 needSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

