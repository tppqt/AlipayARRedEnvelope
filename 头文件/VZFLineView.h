//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface VZFLineView : UIView
{
    UIColor *_color;
    double _dashLength;
    double _spaceLength;
}

@property(nonatomic) double spaceLength; // @synthesize spaceLength=_spaceLength;
@property(nonatomic) double dashLength; // @synthesize dashLength=_dashLength;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

