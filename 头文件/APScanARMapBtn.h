//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface APScanARMapBtn : UIView
{
    UIImageView *_logo;
    UILabel *_title;
    UIView *_redDot;
}

@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (void)onMapClick;
- (void)showRedDot:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

