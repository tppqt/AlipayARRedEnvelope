//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEGridPickCellDelegate.h"
#import "BEEPhotoBrowserDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class APToastView, BEEDoodleButton, BEEPhotoCountLabel, NSArray, NSString, UIButton, UICollectionView;

@interface BEEGridPickController : DTViewController <BEEPhotoBrowserDelegate, BEEGridPickCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    long long _column;
    long long _margin;
    double _cellWidth;
    UICollectionView *_collectionView;
    UIButton *_previewButton;
    BEEDoodleButton *_doodleButton;
    BEEPhotoCountLabel *_selectedNumberLabel;
    UIButton *_finishButton;
    NSArray *_assetKeys;
    _Bool _previewOnlySelection;
    NSArray *_browserPhotoArray;
    _Bool _notFirstWillAppear;
    struct CGRect _previousPreheatRect;
    _Bool _shouldForbidCancel;
    NSString *_currentCollectionKey;
    id <BEEGridPickControllerDelegate> _delegate;
    APToastView *_toastView;
}

@property(nonatomic) _Bool shouldForbidCancel; // @synthesize shouldForbidCancel=_shouldForbidCancel;
@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) __weak id <BEEGridPickControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *currentCollectionKey; // @synthesize currentCollectionKey=_currentCollectionKey;
- (void).cxx_destruct;
- (_Bool)shouldSelectAssetWithKey:(id)arg1;
- (void)tapSelectButton:(_Bool)arg1 assetKey:(id)arg2;
- (id)convertBEEPhotoFromBEEAsset:(id)arg1;
- (void)showNotAllowed;
- (void)updateActionButtonStatus;
- (void)setVisibleCellsVoiceOver;
- (void)cleanAssetsPicked;
- (void)setAsset:(id)arg1 selected:(_Bool)arg2;
- (id)assetPickedManager;
- (id)assetManager;
- (void)finishPickImage:(id)arg1 inDoodleView:(id)arg2;
- (void)finishDoodleImage:(id)arg1;
- (void)exitImageEditor;
- (void)startImageEditorAppWithImage:(id)arg1 businessId:(id)arg2;
- (void)startDoodleAppForPhotoAtIndex:(unsigned long long)arg1 businessId:(id)arg2;
- (void)photoBrowser:(id)arg1 startDoodlePhotoAtIndex:(unsigned long long)arg2;
- (void)didDismissPhotoBrowser:(id)arg1;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowserNeedOriginPhotoChanged:(id)arg1;
- (_Bool)photoBrowserNeedOriginPhoto:(id)arg1;
- (id)selectedPhotosInPhotoBrowser:(id)arg1;
- (unsigned long long)numberOfSelectedPhotosInPhotoBrowser:(id)arg1;
- (unsigned long long)maxNumberOfSelectPhotosInPhotoBrowser:(id)arg1;
- (void)photoBrowserDidFinishSelectPhoto:(id)arg1;
- (_Bool)photoBrowser:(id)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)shouldChangePhotoBrowser:(id)arg1 photoSelected:(_Bool)arg2 atIndex:(unsigned long long)arg3;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (id)assetKeysAtIndexPaths:(id)arg1;
- (id)indexPathsForElementsInRect:(struct CGRect)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)previewVideoToSend;
- (void)previewOnePhotoToSelect;
- (void)previewPhotoForOnlySelection:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)previewAsset:(id)arg1;
- (void)finishPickPhotoWithViewForToast:(id)arg1;
- (void)clickFinishButton;
- (void)clickNumberLabel:(id)arg1;
- (void)doodleButtonClicked:(id)arg1;
- (void)clickPreviewButton;
- (void)clickCancelButton;
- (_Bool)shouldAutorotate;
- (void)scollToSelectedCell;
- (void)mergeAndCleanQuickPickedAssets;
- (void)updateAssetsInCollectionWithLoadingToast:(_Bool)arg1;
- (void)setupAssetKeys;
- (void)setupNavigationBar;
- (void)initSubViews;
- (void)initViewConfig;
- (void)didPhotoChanged;
- (void)dealloc;
- (void)back;
- (void)hideLeftBackButtonWhenAsRoot;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

