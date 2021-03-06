//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCommonSelectDelegate.h"
#import "APCommonSelectTableViewCellDelegate.h"
#import "APSearchBarDelegate.h"
#import "APSearchDisplayControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APCommonSelectView, APContactInfo, APSearchBar, APSearchDisplayController, APSearchManager, APSegmentedControl, NSArray, NSMutableArray, NSMutableDictionary, NSString, SocialCommonErrorView, UIBarButtonItem, UIButton, UILabel, UIView;

@interface APContactFriendsOfFriendViewController : DTViewController <APCommonSelectDelegate, UITableViewDataSource, UITableViewDelegate, APSearchBarDelegate, APSearchDisplayControllerDelegate, APCommonSelectTableViewCellDelegate>
{
    _Bool _didLoadAllFriends;
    _Bool _didLoadRecommend;
    _Bool _isBuildingSearchIndex;
    APSegmentedControl *_segControl;
    APCommonSelectView *_selectView;
    APCommonSelectView *_allFriendView;
    NSString *_userID;
    NSString *_loginID;
    NSMutableArray *_recommendFriends;
    NSArray *_shareFriends;
    NSMutableDictionary *_allFriends;
    NSArray *_indexChar;
    NSMutableDictionary *_addedContact;
    APContactInfo *_contactInfo;
    APSearchManager *_searchManager;
    APSearchBar *_searchBar;
    APSearchDisplayController *_mySearchDisplayController;
    NSMutableArray *_friendSearchResult;
    NSMutableArray *_searchResultPositionArray;
    UILabel *_failSearchLabel;
    NSMutableArray *_customerItems;
    UIView *_theDimmingView;
    UIBarButtonItem *_rightBtnItem;
    SocialCommonErrorView *_errorView;
    NSMutableDictionary *_allFriendCacheDict;
    NSMutableDictionary *_allRecommendDict;
    NSString *_allFriendErrorText;
    UIView *_bgView;
    UIView *_sepLine;
    UIButton *_btn1;
    UIButton *_btn2;
    UIButton *_btn3;
    NSString *_recommendErrorText;
    NSMutableDictionary *_errorContact;
    double _firstContentOffSet;
    double _secondContentOffSet;
    double _thirdContentOffSet;
    double _lastSegmentIndex;
}

@property(nonatomic) double lastSegmentIndex; // @synthesize lastSegmentIndex=_lastSegmentIndex;
@property(nonatomic) double thirdContentOffSet; // @synthesize thirdContentOffSet=_thirdContentOffSet;
@property(nonatomic) double secondContentOffSet; // @synthesize secondContentOffSet=_secondContentOffSet;
@property(nonatomic) double firstContentOffSet; // @synthesize firstContentOffSet=_firstContentOffSet;
@property(nonatomic) _Bool isBuildingSearchIndex; // @synthesize isBuildingSearchIndex=_isBuildingSearchIndex;
@property(retain, nonatomic) NSMutableDictionary *errorContact; // @synthesize errorContact=_errorContact;
@property(retain, nonatomic) NSString *recommendErrorText; // @synthesize recommendErrorText=_recommendErrorText;
@property(nonatomic) _Bool didLoadRecommend; // @synthesize didLoadRecommend=_didLoadRecommend;
@property(retain, nonatomic) UIButton *btn3; // @synthesize btn3=_btn3;
@property(retain, nonatomic) UIButton *btn2; // @synthesize btn2=_btn2;
@property(retain, nonatomic) UIButton *btn1; // @synthesize btn1=_btn1;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSString *allFriendErrorText; // @synthesize allFriendErrorText=_allFriendErrorText;
@property(nonatomic) _Bool didLoadAllFriends; // @synthesize didLoadAllFriends=_didLoadAllFriends;
@property(retain, nonatomic) NSMutableDictionary *allRecommendDict; // @synthesize allRecommendDict=_allRecommendDict;
@property(retain, nonatomic) NSMutableDictionary *allFriendCacheDict; // @synthesize allFriendCacheDict=_allFriendCacheDict;
@property(retain, nonatomic) SocialCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIBarButtonItem *rightBtnItem; // @synthesize rightBtnItem=_rightBtnItem;
@property(retain, nonatomic) UIView *theDimmingView; // @synthesize theDimmingView=_theDimmingView;
@property(retain, nonatomic) NSMutableArray *customerItems; // @synthesize customerItems=_customerItems;
@property(retain, nonatomic) UILabel *failSearchLabel; // @synthesize failSearchLabel=_failSearchLabel;
@property(retain, nonatomic) NSMutableArray *searchResultPositionArray; // @synthesize searchResultPositionArray=_searchResultPositionArray;
@property(retain, nonatomic) NSMutableArray *friendSearchResult; // @synthesize friendSearchResult=_friendSearchResult;
@property(retain, nonatomic) APSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) APSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) APSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSMutableDictionary *addedContact; // @synthesize addedContact=_addedContact;
@property(retain, nonatomic) NSArray *indexChar; // @synthesize indexChar=_indexChar;
@property(retain, nonatomic) NSMutableDictionary *allFriends; // @synthesize allFriends=_allFriends;
@property(retain, nonatomic) NSArray *shareFriends; // @synthesize shareFriends=_shareFriends;
@property(retain, nonatomic) NSMutableArray *recommendFriends; // @synthesize recommendFriends=_recommendFriends;
@property(retain, nonatomic) NSString *loginID; // @synthesize loginID=_loginID;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) APCommonSelectView *allFriendView; // @synthesize allFriendView=_allFriendView;
@property(retain, nonatomic) APCommonSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) APSegmentedControl *segControl; // @synthesize segControl=_segControl;
- (void).cxx_destruct;
- (id)getSource;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)showSearchFail:(_Bool)arg1 withDesc:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)didClickDimmingView;
- (id)dimmingView;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didClickAccBtnWithItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)displayModeForDataArray:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getDataArrayWithIndexPath:(id)arg1;
- (void)ignoreMsg:(id)arg1;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (id)contactInfoFromMsg:(id)arg1;
- (void)didClickButtonForItem:(id)arg1 commonView:(id)arg2;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (id)cellConfigInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (void)segmentAction:(id)arg1;
- (void)adjustFrames;
- (id)contactInfoInDataDictWithIndexPath:(id)arg1 withType:(int)arg2;
- (void)searchWithText:(id)arg1 withType:(int)arg2;
- (void)startSearchLocalFriendWithText:(id)arg1;
- (void)startSearch;
- (void)buildSearchIndex;
- (void)buildSearchView;
- (void)errorViewShow:(_Bool)arg1 text:(id)arg2;
- (void)reloadData;
- (double)getContactOffsetOfIndex:(long long)arg1;
- (void)saveContactOffsetOfIndex:(long long)arg1;
- (void)loadData;
- (void)setupSelectView;
- (void)didClickFakeBtn:(id)arg1;
- (void)setupSegmentControl;
- (void)setupSearchBtn;
- (void)sendFriendRequestUpdate:(id)arg1;
- (void)updateFriend:(id)arg1;
- (void)setupViews;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContactInfo:(id)arg1;
- (id)initWithUserId:(id)arg1 loginId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

