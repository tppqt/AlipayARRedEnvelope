//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APCMIndexBarDelegate.h"
#import "APCommonEditOverlayViewDelegate.h"
#import "APCommonSelectTableViewCellDelegate.h"
#import "APSearchDisplayControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APCMIndexBar, APCommonEditOverlayView, APCommonSelectTableViewCell, APSearchBar, APSearchDisplayController, NSArray, NSCache, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UILabel, UITableView, UIViewController;

@interface APCommonSelectView : UIView <UITableViewDelegate, UITableViewDataSource, APSearchDisplayControllerDelegate, APCMIndexBarDelegate, APCommonEditOverlayViewDelegate, APCommonSelectTableViewCellDelegate>
{
    _Bool _disableSearch;
    _Bool _isSearchModel;
    _Bool _enableSearchBar;
    _Bool _isPyDict;
    _Bool _userGlobelSearch;
    _Bool _replaceSearchResult;
    _Bool _isSearchAnimation;
    _Bool _isEditingCell;
    _Bool _editingAnimationInProgress;
    _Bool _didPreload;
    UITableView *_tableView;
    APSearchBar *_searchBar;
    long long _customSectionCount;
    APSearchDisplayController *_mySearchDisplayController;
    NSMutableDictionary *_searchResults;
    id <APCommonSelectDelegate> _delegate;
    UIViewController *_superViewController;
    APCMIndexBar *_indexBar;
    NSMutableDictionary *_defaultCellParams;
    NSDictionary *_mainData;
    NSArray *_mainDataIndexChar;
    NSString *_mainDataSearchTitle;
    NSArray *_mainDataDisplayTitles;
    NSArray *_secondaryData;
    long long _secondarySectionCount;
    NSArray *_secondarySectionTitles;
    NSArray *_secondarySectionIconNames;
    NSArray *_secondarySectionHeaderIconNames;
    UIView *_theDimmingView;
    NSArray *_secondarySectionSearchTitles;
    NSArray *_globelSearchManagerNames;
    NSDictionary *_globelSearchParams;
    NSMutableArray *_gSearchManagers;
    NSArray *_gSearchSectionTitles;
    NSMutableDictionary *_searchManagers;
    NSArray *_globelSearchResults;
    NSMutableDictionary *_searchResultsPositions;
    APCommonSelectTableViewCell *_editingCell;
    APCommonEditOverlayView *_editingOverlayView;
    UILabel *_failSearchLabel;
    NSCache *_imageCache;
}

+ (id)getDefaultHeaderViewWithImageName:(id)arg1 title:(id)arg2 needTopLine:(_Bool)arg3;
@property(nonatomic) _Bool didPreload; // @synthesize didPreload=_didPreload;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) UILabel *failSearchLabel; // @synthesize failSearchLabel=_failSearchLabel;
@property(retain, nonatomic) APCommonEditOverlayView *editingOverlayView; // @synthesize editingOverlayView=_editingOverlayView;
@property(retain, nonatomic) APCommonSelectTableViewCell *editingCell; // @synthesize editingCell=_editingCell;
@property(nonatomic) _Bool editingAnimationInProgress; // @synthesize editingAnimationInProgress=_editingAnimationInProgress;
@property(nonatomic) _Bool isEditingCell; // @synthesize isEditingCell=_isEditingCell;
@property(retain, nonatomic) NSMutableDictionary *searchResultsPositions; // @synthesize searchResultsPositions=_searchResultsPositions;
@property(retain, nonatomic) NSArray *globelSearchResults; // @synthesize globelSearchResults=_globelSearchResults;
@property(retain, nonatomic) NSMutableDictionary *searchManagers; // @synthesize searchManagers=_searchManagers;
@property(nonatomic) _Bool isSearchAnimation; // @synthesize isSearchAnimation=_isSearchAnimation;
@property(nonatomic) _Bool replaceSearchResult; // @synthesize replaceSearchResult=_replaceSearchResult;
@property(retain, nonatomic) NSArray *gSearchSectionTitles; // @synthesize gSearchSectionTitles=_gSearchSectionTitles;
@property(retain, nonatomic) NSMutableArray *gSearchManagers; // @synthesize gSearchManagers=_gSearchManagers;
@property(retain, nonatomic) NSDictionary *globelSearchParams; // @synthesize globelSearchParams=_globelSearchParams;
@property(retain, nonatomic) NSArray *globelSearchManagerNames; // @synthesize globelSearchManagerNames=_globelSearchManagerNames;
@property(nonatomic) _Bool userGlobelSearch; // @synthesize userGlobelSearch=_userGlobelSearch;
@property(retain, nonatomic) NSArray *secondarySectionSearchTitles; // @synthesize secondarySectionSearchTitles=_secondarySectionSearchTitles;
@property(retain, nonatomic) UIView *theDimmingView; // @synthesize theDimmingView=_theDimmingView;
@property(retain, nonatomic) NSArray *secondarySectionHeaderIconNames; // @synthesize secondarySectionHeaderIconNames=_secondarySectionHeaderIconNames;
@property(retain, nonatomic) NSArray *secondarySectionIconNames; // @synthesize secondarySectionIconNames=_secondarySectionIconNames;
@property(retain, nonatomic) NSArray *secondarySectionTitles; // @synthesize secondarySectionTitles=_secondarySectionTitles;
@property(nonatomic) long long secondarySectionCount; // @synthesize secondarySectionCount=_secondarySectionCount;
@property(retain, nonatomic) NSArray *secondaryData; // @synthesize secondaryData=_secondaryData;
@property(retain, nonatomic) NSArray *mainDataDisplayTitles; // @synthesize mainDataDisplayTitles=_mainDataDisplayTitles;
@property(retain, nonatomic) NSString *mainDataSearchTitle; // @synthesize mainDataSearchTitle=_mainDataSearchTitle;
@property(retain, nonatomic) NSArray *mainDataIndexChar; // @synthesize mainDataIndexChar=_mainDataIndexChar;
@property(retain, nonatomic) NSDictionary *mainData; // @synthesize mainData=_mainData;
@property(nonatomic) _Bool isPyDict; // @synthesize isPyDict=_isPyDict;
@property(nonatomic) _Bool enableSearchBar; // @synthesize enableSearchBar=_enableSearchBar;
@property(retain, nonatomic) NSMutableDictionary *defaultCellParams; // @synthesize defaultCellParams=_defaultCellParams;
@property(retain, nonatomic) APCMIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(nonatomic) _Bool isSearchModel; // @synthesize isSearchModel=_isSearchModel;
@property(nonatomic) __weak id <APCommonSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) APSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(nonatomic) long long customSectionCount; // @synthesize customSectionCount=_customSectionCount;
@property(nonatomic) _Bool disableSearch; // @synthesize disableSearch=_disableSearch;
@property(retain, nonatomic) APSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)getTableView;
- (id)getLocalImageWithName:(id)arg1 stretchLeftCap:(double)arg2 topHeight:(double)arg3;
- (id)getLocalImageWithName:(id)arg1;
- (void)showSearchFail:(_Bool)arg1 withDesc:(id)arg2;
- (_Bool)isNeedShowNoticeboardView;
- (void)didClickAccBtnWithItem:(id)arg1;
- (void)didClickIconWithItem:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didClickDimmingView;
- (id)dimmingView;
- (void)responseToSelectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)cancelSearch;
- (id)itemInMainDataDictWithIndexPath:(id)arg1;
- (void)startSearchWithText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)clearSearchResult;
- (void)indexSelectionDidChange:(id)arg1 index:(long long)arg2 title:(id)arg3;
- (void)didClickSecondMenuForItem:(id)arg1 cell:(id)arg2;
- (void)didClickFirstMenuForItem:(id)arg1 cell:(id)arg2;
- (id)overlayView:(id)arg1 didHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)hideMenuAnimated:(_Bool)arg1;
- (_Bool)shouldShowMenuOptionsViewInCell:(id)arg1;
- (void)contextMenuWillShowInCell:(id)arg1;
- (void)contextMenuWillHideInCell:(id)arg1;
- (void)contextMenuDidShowInCell:(id)arg1;
- (void)contextMenuDidHideInCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configCell:(id)arg1 indexPath:(id)arg2 item:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)displayModeForDataArray:(id)arg1 indexPath:(id)arg2;
- (int)displayModeForIndexPath:(id)arg1;
- (long long)findIndexSection:(id)arg1;
- (id)getTitleWithIndexPath:(id)arg1;
- (id)getHeaderImageNameWithIndexPath:(id)arg1;
- (id)getSearchPositionArrayWithIndexPath:(id)arg1;
- (id)getDataArrayWithIndexPath:(id)arg1;
- (id)getDataItemWithIndexPath:(id)arg1;
- (void)rebuildSearchTree;
- (void)resetSearchTree;
- (void)reloadIndexChar;
- (void)reloadTableView;
- (void)reloadUI;
- (void)adjustFrames;
- (void)setupIndexBar;
- (void)setupSearchDisplayController;
- (void)setupSearchBar;
- (void)setupTableView;
- (void)setupUI;
- (void)reloadData;
- (void)configWithDict:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 superVC:(id)arg2 delegate:(id)arg3 paramDict:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

