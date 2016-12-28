//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface AliTallySegmentView : UIView
{
    id <AliTallySegmentViewDelegate> _delegate;
    NSArray *_titleArrays;
    UIView *_selectedView;
    long long _lastSelectedIndex;
}

@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) NSArray *titleArrays; // @synthesize titleArrays=_titleArrays;
@property(nonatomic) __weak id <AliTallySegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapTitleLabel:(id)arg1;
- (long long)selectedSegmentIndex;
- (void)highlightIndex:(long long)arg1;
- (void)buildSubViews;

@end

