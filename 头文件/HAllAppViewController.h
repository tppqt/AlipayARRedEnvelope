//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTCustomNavigationBarProtocol.h"
#import "HAppEditCellViewDelegate.h"
#import "HCollectionViewCellDelegate.h"
#import "HEditGridViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class HEditGridView, HGuideView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewCell;

@interface HAllAppViewController : DTViewController <HEditGridViewDelegate, HAppEditCellViewDelegate, HCollectionViewCellDelegate, DTCustomNavigationBarProtocol, UICollectionViewDelegate, UICollectionViewDataSource>
{
    HEditGridView *_gridView;
    UICollectionView *_collectionView;
    UICollectionViewCell *_gridCell;
    NSString *_myAppSectionName;
    NSMutableArray *_sectionArray;
    NSMutableDictionary *_myAppModelsDic;
    NSMutableArray *_deletedRecommendIds;
    NSArray *_startdMyAppModels;
    _Bool _inEditing;
    _Bool _gotoNextPage;
    HGuideView *_guideView;
    _Bool _showGuide;
    _Bool _autoEditMode;
}

@property(nonatomic) _Bool autoEditMode; // @synthesize autoEditMode=_autoEditMode;
- (void).cxx_destruct;
- (void)doAppDataChanged:(id)arg1;
- (void)animateToDesView:(id)arg1 fromView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)rightCustomNavigationBarButtonItem;
- (void)didPressedTitleView:(id)arg1;
- (id)middleNavSearchTitleView;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)appCellHeight;
- (double)appCellWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setCellsPlayEditMode:(_Bool)arg1;
- (void)deleteCellModel:(id)arg1 fromSectionModel:(id)arg2;
- (void)editButtonClicked:(id)arg1;
- (void)cellDidClicked:(id)arg1;
- (void)longPressed:(id)arg1;
- (id)bizMarkForAppModel:(id)arg1;
- (void)cellViewDidClicked:(id)arg1;
- (void)cellViewDidDeleted:(id)arg1;
- (void)gridViewEndMove;
- (void)gridViewBeginMove;
- (void)wantStartEditing;
- (void)stopEditing:(id)arg1;
- (void)startEditing:(id)arg1;
- (void)openApp:(id)arg1;
- (void)refreshBizMark;
- (void)setRightBarEditing:(_Bool)arg1;
- (void)reportBizMark;
- (void)reloadAllData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

