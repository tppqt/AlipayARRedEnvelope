//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AREEnvelopeCalloutView : UIView
{
    UILabel *_aggregatedLabel;
    UILabel *_titleLabel;
    UIImageView *_avatarImageView;
    UILabel *_addressLabel;
    UILabel *_distanceLabel;
    UILabel *_remarkLabel;
    UILabel *_limiterLabel;
    UIView *_containerView;
    UIView *_flashView;
    UIImageView *_businessLogoImageView;
}

+ (id)allCalloutsForView:(id)arg1;
+ (unsigned long long)hideAllCalloutsForView:(id)arg1;
+ (id)showCalloutToView:(id)arg1 annotation:(id)arg2;
+ (struct CGRect)frameForCalloutView:(_Bool)arg1 superview:(id)arg2;
@property(retain, nonatomic) UIImageView *businessLogoImageView; // @synthesize businessLogoImageView=_businessLogoImageView;
@property(retain, nonatomic) UIView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *limiterLabel; // @synthesize limiterLabel=_limiterLabel;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *aggregatedLabel; // @synthesize aggregatedLabel=_aggregatedLabel;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1;
- (void)setupLocationTipsWithAnnotation:(id)arg1;
- (void)setupFlashLight;
- (void)setupBackGroundView;
- (id)initWithFrame:(struct CGRect)arg1 limiterText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 annotation:(id)arg2;

@end

