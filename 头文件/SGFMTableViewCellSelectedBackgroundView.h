//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGFMTableViewCellBackgroundView.h"

@class NSArray;

@interface SGFMTableViewCellSelectedBackgroundView : SGFMTableViewCellBackgroundView
{
    _Bool isRedrawSelectedBackgroundView;
    int _gradientDirection;
    float _prevLayerHeight;
    long long paintOffsetx;
    long long paintOffsetWidth;
    NSArray *_selectedBackgroundGradientColors;
}

@property(nonatomic) float prevLayerHeight; // @synthesize prevLayerHeight=_prevLayerHeight;
@property(nonatomic) int gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property(retain, nonatomic) NSArray *selectedBackgroundGradientColors; // @synthesize selectedBackgroundGradientColors=_selectedBackgroundGradientColors;
@property(nonatomic) long long paintOffsetWidth; // @synthesize paintOffsetWidth;
@property(nonatomic) long long paintOffsetx; // @synthesize paintOffsetx;
@property(nonatomic) _Bool isRedrawSelectedBackgroundView; // @synthesize isRedrawSelectedBackgroundView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

