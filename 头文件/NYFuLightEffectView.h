//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface NYFuLightEffectView : UIView
{
    UIImageView *_circle;
    UIImageView *_radiate;
}

@property(retain, nonatomic) UIImageView *radiate; // @synthesize radiate=_radiate;
@property(retain, nonatomic) UIImageView *circle; // @synthesize circle=_circle;
- (void).cxx_destruct;
- (void)startAnimation;
- (id)init;

@end

