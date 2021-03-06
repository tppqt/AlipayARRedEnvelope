//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableArray, UIFont, UIScrollView, UIView;

@interface MVSegmentControl : UIControl
{
    _Bool _fullFit;
    unsigned long long _numberOfSegments;
    long long _selectedIndex;
    NSArray *_titleArray;
    NSArray *_hasIconArray;
    UIScrollView *_segmentScrollView;
    NSMutableArray *_buttonArray;
    UIView *_indictorView;
    double _segmentWidth;
    UIView *_topSeperatorLine;
    UIView *_bottomSeperatorLine;
    UIFont *_titleFont;
    UIFont *_boldTitleFont;
}

@property(retain, nonatomic) UIFont *boldTitleFont; // @synthesize boldTitleFont=_boldTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIView *bottomSeperatorLine; // @synthesize bottomSeperatorLine=_bottomSeperatorLine;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) UIView *indictorView; // @synthesize indictorView=_indictorView;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIScrollView *segmentScrollView; // @synthesize segmentScrollView=_segmentScrollView;
@property(nonatomic) _Bool fullFit; // @synthesize fullFit=_fullFit;
@property(retain, nonatomic) NSArray *hasIconArray; // @synthesize hasIconArray=_hasIconArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithTitles:(id)arg1;

@end

