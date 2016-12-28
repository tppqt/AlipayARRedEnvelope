//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OBaseViewController.h"

#import "APCustomNavigationBarProtocol.h"
#import "GO2OCDPManagerDelegate.h"
#import "GO2OHomeSearchNavItemViewDelegate.h"
#import "GO2OMyVoucherNavItemDelegate.h"
#import "GO2OSearchDelegate.h"
#import "O2OCommonIndexLocationViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APActivityIndicatorView, APExceptionView, CDPSpaceView, GO2OAdMaskView, GO2OCDPManager, GO2OHomePageResponse, GO2OHomeSearchNavItemView, GO2OMyVoucherNavItemView, GO2OSearch, NSArray, NSLayoutConstraint, NSMutableArray, NSString, O2OCommonIndexLocationView, O2OCommonSearchBar, O2OCommonSearchDisplayController, UITableView, VZRefreshControl;

@interface GO2OHomeViewController : GO2OBaseViewController <GO2OSearchDelegate, APCustomNavigationBarProtocol, GO2OHomeSearchNavItemViewDelegate, GO2OMyVoucherNavItemDelegate, UITableViewDataSource, UITableViewDelegate, O2OCommonIndexLocationViewDelegate, GO2OCDPManagerDelegate>
{
    _Bool _canAutoSwitch;
    _Bool _needRefresh;
    _Bool _notFromPipeline;
    _Bool _needGotoCityList;
    double _lastRefreshTime;
    UITableView *_tableView;
    GO2OCDPManager *_cdpManager;
    GO2OHomePageResponse *_homePageResponse;
    GO2OHomeSearchNavItemView *_homeSearchNavItem;
    O2OCommonIndexLocationView *_locationView;
    APExceptionView *_intlNotSupportedErrorView;
    APExceptionView *_trafficLimitErrorView;
    APExceptionView *_emptyResultErrorView;
    APExceptionView *_serverErrorView;
    CDPSpaceView *_spaceView;
    VZRefreshControl *_refreshControl;
    APActivityIndicatorView *_indicatorView;
    GO2OAdMaskView *_admask;
    NSString *_adId;
    NSLayoutConstraint *_tableViewTopConstraint;
    double _spaceViewHeight;
    NSArray *_shopListItems;
    NSMutableArray *_exposedShops;
    GO2OMyVoucherNavItemView *_voucherNavItem;
    GO2OSearch *_keywordSearch;
    O2OCommonSearchBar *_searchBar;
    O2OCommonSearchDisplayController *_mySearchDisplayController;
    NSString *_lastHomePageAdCityCode;
}

@property(retain, nonatomic) NSString *lastHomePageAdCityCode; // @synthesize lastHomePageAdCityCode=_lastHomePageAdCityCode;
@property(retain, nonatomic) O2OCommonSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) O2OCommonSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) GO2OSearch *keywordSearch; // @synthesize keywordSearch=_keywordSearch;
@property(nonatomic) __weak GO2OMyVoucherNavItemView *voucherNavItem; // @synthesize voucherNavItem=_voucherNavItem;
@property(retain, nonatomic) NSMutableArray *exposedShops; // @synthesize exposedShops=_exposedShops;
@property(retain, nonatomic) NSArray *shopListItems; // @synthesize shopListItems=_shopListItems;
@property(nonatomic) double spaceViewHeight; // @synthesize spaceViewHeight=_spaceViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *tableViewTopConstraint; // @synthesize tableViewTopConstraint=_tableViewTopConstraint;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) GO2OAdMaskView *admask; // @synthesize admask=_admask;
@property(retain, nonatomic) APActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) VZRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) APExceptionView *serverErrorView; // @synthesize serverErrorView=_serverErrorView;
@property(retain, nonatomic) APExceptionView *emptyResultErrorView; // @synthesize emptyResultErrorView=_emptyResultErrorView;
@property(retain, nonatomic) APExceptionView *trafficLimitErrorView; // @synthesize trafficLimitErrorView=_trafficLimitErrorView;
@property(retain, nonatomic) APExceptionView *intlNotSupportedErrorView; // @synthesize intlNotSupportedErrorView=_intlNotSupportedErrorView;
@property(retain, nonatomic) O2OCommonIndexLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) GO2OHomeSearchNavItemView *homeSearchNavItem; // @synthesize homeSearchNavItem=_homeSearchNavItem;
@property(retain, nonatomic) GO2OHomePageResponse *homePageResponse; // @synthesize homePageResponse=_homePageResponse;
@property(retain, nonatomic) GO2OCDPManager *cdpManager; // @synthesize cdpManager=_cdpManager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool needGotoCityList; // @synthesize needGotoCityList=_needGotoCityList;
@property(nonatomic) _Bool notFromPipeline; // @synthesize notFromPipeline=_notFromPipeline;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool canAutoSwitch; // @synthesize canAutoSwitch=_canAutoSwitch;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)launchWithOptions:(id)arg1;
- (void)launch1212CenterWithJumpUrl:(id)arg1;
- (void)requestAd;
- (void)removeSpaceViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSpaceView:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)didCancelQuery;
- (void)didSelectQuery:(id)arg1 searchSrc:(id)arg2;
- (void)willBeginSearch;
- (void)myVoucherItemDidClick;
- (void)buttonDidPressedWithState:(unsigned long long)arg1;
- (_Bool)checkVisibleCells;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)homeSearchNavItemViewDidClick;
- (id)rightCustomNavigationBarButtonItem;
- (id)middleCustomNavigationItemTitleView;
- (id)leftCustomNavigationBarButtonItem;
- (void)removeAllExceptionSubViews;
- (void)saveSelectedCityInfo:(id)arg1;
- (void)saveManuallySelectedCity:(id)arg1;
- (void)tabBarDoubleClicked:(id)arg1;
- (void)goToSelectCityList;
- (void)didSelectCity:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)userDidLogOut:(id)arg1;
- (void)registerNotifications;
- (void)handleRefresh:(id)arg1;
- (void)showIndexLocationErrorView;
- (void)showEmptyResultErrorView;
- (void)showErrorViewWithError:(id)arg1;
- (id)convertShopInfoIntoListItems:(id)arg1;
- (void)logCityExpose:(id)arg1;
- (void)sendRpcRequestWithCityInfo:(id)arg1;
- (void)sendRpcRequest;
- (void)startLocating;
- (void)clearHomePageData;
- (void)loadHomePageData;
- (id)getCurrentLocationCityInfo;
- (void)updateCanAutoSwitch;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadFromIntlNotSupported;
- (void)showIntlNotSupportedErrorView;
- (void)updateSelectedCity;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setOptions:(id)arg1;
- (_Bool)intlNotSuppored;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

