//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray;

@interface O2ONewTagListView : UIControl
{
    double _tagViewListHeigt;
    _Bool _shoudReloadTags;
    id <O2ONewTagListViewDelegate> _delegate;
    NSMutableArray *_tagItemBtns;
    NSMutableArray *_tagItemModels;
    double _leftPadding;
    double _rightPadding;
    double _topPadding;
    double _bottomPadding;
    long long _defaultDisplayLineCount;
}

@property(nonatomic) _Bool shoudReloadTags; // @synthesize shoudReloadTags=_shoudReloadTags;
@property(nonatomic) long long defaultDisplayLineCount; // @synthesize defaultDisplayLineCount=_defaultDisplayLineCount;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(retain, nonatomic) NSMutableArray *tagItemModels; // @synthesize tagItemModels=_tagItemModels;
@property(retain, nonatomic) NSMutableArray *tagItemBtns; // @synthesize tagItemBtns=_tagItemBtns;
@property(nonatomic) __weak id <O2ONewTagListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)height;
- (void)layoutSubviews;
- (void)layoutTagButtons;
- (void)reloadTagButtonFromTagModel;
- (void)onLongPress:(id)arg1;
- (void)onClick:(id)arg1;
- (void)initWithTags:(id)arg1;
- (void)addMoreTags:(id)arg1;
- (void)display;
- (void)addTagWithTagModel:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

