//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OBaseViewController.h"

#import "GO2OMenuViewDelegate.h"
#import "GO2OSchemeProtocol.h"
#import "GO2OSearchDelegate.h"
#import "GO2OShopListTableViewDelegate.h"
#import "GO2OTableFooterViewDelegate.h"

@class APBarButtonItem, APExceptionView, APToastView, GO2OMenuView, GO2OSearch, GO2OShopListTableView, GO2OTableFooterView, NSArray, NSMutableArray, NSMutableDictionary, NSString, O2OCommonSearchBar, O2OCommonSearchDisplayController, UIView, VZRefreshControl;

@interface GO2OShopListSearchResultViewController : GO2OBaseViewController <GO2OSchemeProtocol, GO2OSearchDelegate, GO2OMenuViewDelegate, GO2OShopListTableViewDelegate, GO2OTableFooterViewDelegate>
{
    _Bool _hasMore;
    _Bool _isRequesting;
    GO2OMenuView *_menuView;
    UIView *_adView;
    GO2OShopListTableView *_shopListTableView;
    VZRefreshControl *_refreshControl;
    GO2OTableFooterView *_tableFooterView;
    APBarButtonItem *_rightBarItem;
    GO2OSearch *_keywordSearch;
    O2OCommonSearchBar *_searchBar;
    O2OCommonSearchDisplayController *_mySearchDisplayController;
    APExceptionView *_exceptionView;
    UIView *_emptyView;
    APToastView *_toastView;
    NSString *_target;
    NSString *_query;
    NSString *_searchSrc;
    NSString *_cityCode;
    NSString *_longitude;
    NSString *_latitude;
    NSMutableDictionary *_selectedMenus;
    NSMutableDictionary *_params;
    unsigned long long _start;
    NSString *_searchContext;
    NSString *_actPlatform;
    NSString *_actChannel;
    NSString *_actPos;
    NSString *_actId;
    NSArray *_menuGroups;
    NSString *_cacheKey;
    NSMutableArray *_allShopListItems;
    NSMutableArray *_exposedShops;
}

+ (_Bool)isClassifyTarget:(id)arg1;
+ (_Bool)isSearchTarget:(id)arg1;
+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) NSMutableArray *exposedShops; // @synthesize exposedShops=_exposedShops;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSMutableArray *allShopListItems; // @synthesize allShopListItems=_allShopListItems;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(retain, nonatomic) NSString *actId; // @synthesize actId=_actId;
@property(retain, nonatomic) NSString *actPos; // @synthesize actPos=_actPos;
@property(retain, nonatomic) NSString *actChannel; // @synthesize actChannel=_actChannel;
@property(retain, nonatomic) NSString *actPlatform; // @synthesize actPlatform=_actPlatform;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableDictionary *selectedMenus; // @synthesize selectedMenus=_selectedMenus;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *searchSrc; // @synthesize searchSrc=_searchSrc;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) O2OCommonSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) O2OCommonSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) GO2OSearch *keywordSearch; // @synthesize keywordSearch=_keywordSearch;
@property(retain, nonatomic) APBarButtonItem *rightBarItem; // @synthesize rightBarItem=_rightBarItem;
@property(retain, nonatomic) GO2OTableFooterView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) VZRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) GO2OShopListTableView *shopListTableView; // @synthesize shopListTableView=_shopListTableView;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) GO2OMenuView *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (void)resetAd:(_Bool)arg1;
- (void)requestAd;
- (id)labelCodeOfMenuGroup:(id)arg1;
- (void)gotoKeywordSearch;
- (void)didCancelQuery;
- (void)willBeginSearch;
- (void)didSelectQuery:(id)arg1 searchSrc:(id)arg2;
- (void)didClickLoadMore;
- (void)needLoadMore;
- (void)didSelectShopListItem:(id)arg1;
- (void)didDisplayShopListItem:(id)arg1 atPosition:(unsigned long long)arg2;
- (void)didMenuExpanded:(id)arg1;
- (void)didMenuSelected:(id)arg1;
- (void)disableUserInteraction;
- (void)onRefreshControl:(id)arg1;
- (void)showErrorViewWithError:(id)arg1;
- (void)endUIRefreshing;
- (void)beginUIRefreshing;
- (void)endUILoading;
- (void)beginUILoading;
- (void)searchShopListWithRefresh:(_Bool)arg1 isFirstLoaded:(_Bool)arg2;
- (void)reloadDataWithShopListItems:(id)arg1;
- (void)loadMoreDatas;
- (void)refreshDatas:(_Bool)arg1;
- (void)refreshDatas;
- (void)scrollToTop;
- (void)refreshDatasWithSearchResult:(id)arg1 isRefresh:(_Bool)arg2 isFromCache:(_Bool)arg3 isFirstLoaded:(_Bool)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)parseParamsWithString:(id)arg1;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

