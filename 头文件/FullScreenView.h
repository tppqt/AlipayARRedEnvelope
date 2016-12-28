//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FullScreenView : UIView
{
    UIImageView *imageView;
    UILabel *label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)animateQRcode:(id)arg1 codeValue:(id)arg2 oriFrame:(struct CGRect)arg3;
- (void)animateBarcode:(id)arg1 oriFrame:(struct CGRect)arg2;
- (void)setCodeInfo:(id)arg1 codeValue:(id)arg2 orientationFlag:(_Bool)arg3;
- (struct CGRect)fitImageRect:(struct CGRect)arg1;
- (struct CGRect)fitBarcodeImageRect:(struct CGRect)arg1 img:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

