//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class ALPOperationMessage, APToastView, NSString, UICopyLabel, UIImageView;

@interface APBarcodeView : UIView <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    id <APBarcodeViewDelegate> _glossaryDelegate;
    ALPOperationMessage *_opMessage;
    UIView *_contentView;
    UIImageView *_imageView;
    UICopyLabel *_bottomLabel;
    APToastView *_toastView;
}

@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UICopyLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ALPOperationMessage *opMessage; // @synthesize opMessage=_opMessage;
@property(nonatomic) __weak id <APBarcodeViewDelegate> glossaryDelegate; // @synthesize glossaryDelegate=_glossaryDelegate;
- (void).cxx_destruct;
- (id)thumbnailImage:(id)arg1;
- (void)updateDynamicCode:(id)arg1;
- (void)glossaryBtnPressed:(id)arg1;
- (id)loadingImage;
- (id)toString:(id)arg1;
- (id)createImage:(double)arg1;
- (id)constructStringFromString:(id)arg1;
- (id)stringViewWithTitle:(id)arg1 content:(id)arg2;
- (void)addText;
- (void)addActionLabel;
- (void)addBarImage;
- (void)addQRImageUrl;
- (void)addQRImage;
- (void)createbottomLabel;
- (void)createSubView;
- (void)layoutSubviews;
- (_Bool)isDynamic;
- (id)initWithFrame:(struct CGRect)arg1 operationMessage:(id)arg2 BarcodeDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

