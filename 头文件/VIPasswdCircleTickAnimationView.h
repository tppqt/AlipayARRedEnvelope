//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface VIPasswdCircleTickAnimationView : UIView
{
    double _duration;
    double _durationForSuccess;
    double _lineWidth;
    UIColor *_lineColor;
    CAShapeLayer *_mainArc;
    CAShapeLayer *_tick;
}

@property(retain, nonatomic) CAShapeLayer *tick; // @synthesize tick=_tick;
@property(retain, nonatomic) CAShapeLayer *mainArc; // @synthesize mainArc=_mainArc;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (void)setLineWidth:(double)arg1;
- (void)setDurationForSuccess:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)stopAnimating;
- (void)finishWithSuccess;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

