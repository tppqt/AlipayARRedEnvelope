//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LSCommentViewPositionDelegate.h"
#import "LSWatcherBarViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CAGradientLayer, LSCommentView, NSMutableArray, NSString, UIButton, UICollectionView;

@interface LSWatcherBarView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, LSWatcherBarViewDelegate, LSCommentViewPositionDelegate>
{
    _Bool _enableAddButton;
    _Bool _keyboardShow;
    long long _numberOfCellsInRow;
    UICollectionView *_watcherCollectionView;
    id <LSWatcherBarViewDelegate> _delegate;
    LSCommentView *_commentView;
    UIView *_watcherToolBarBackView;
    UIButton *_ranklistBtnWidget;
    unsigned long long _itemsNum;
    NSMutableArray *_userProfileItems;
    CAGradientLayer *_maskLayer;
    double _originLocY;
    struct CGPoint _maskLayerPoint;
}

@property(nonatomic) double originLocY; // @synthesize originLocY=_originLocY;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(nonatomic) struct CGPoint maskLayerPoint; // @synthesize maskLayerPoint=_maskLayerPoint;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain) NSMutableArray *userProfileItems; // @synthesize userProfileItems=_userProfileItems;
@property(nonatomic) unsigned long long itemsNum; // @synthesize itemsNum=_itemsNum;
@property(retain, nonatomic) UIButton *ranklistBtnWidget; // @synthesize ranklistBtnWidget=_ranklistBtnWidget;
@property(retain, nonatomic) UIView *watcherToolBarBackView; // @synthesize watcherToolBarBackView=_watcherToolBarBackView;
@property(nonatomic) __weak LSCommentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) __weak id <LSWatcherBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *watcherCollectionView; // @synthesize watcherCollectionView=_watcherCollectionView;
@property(nonatomic) _Bool enableAddButton; // @synthesize enableAddButton=_enableAddButton;
@property(nonatomic) long long numberOfCellsInRow; // @synthesize numberOfCellsInRow=_numberOfCellsInRow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;
- (void)commentViewReset:(id)arg1;
- (void)commentViewPositionChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotification;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)openRankList:(id)arg1;
- (id)btnWidgetWithFrame:(struct CGRect)arg1 andType:(long long)arg2;
- (id)watcherCollectionViewWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (unsigned long long)removeWatchers:(id)arg1;
- (unsigned long long)addWatchers:(id)arg1;
- (unsigned long long)setUpItemsData:(id)arg1;
- (id)initWithLocY:(double)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

