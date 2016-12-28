//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLPeekListViewController.h"

#import "BLHomeListDataManagerDelegate.h"
#import "BLHomeListViewDelegate.h"
#import "PromotionCenterDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class BLDataEngine, BLHomeListSearchModule, BLHomeListViewDelegateImpl, CDPSpaceView, NSDictionary, NSString, UIRefreshControl, UIView;

@interface BLHomeListViewController : BLPeekListViewController <BLHomeListDataManagerDelegate, BLHomeListViewDelegate, PromotionCenterDelegate, UIViewControllerPreviewingDelegate>
{
    _Bool _returnHome;
    _Bool _shouldRefrush;
    _Bool _isShowSearchButton;
    NSString *_tradeNO;
    UIView *_tableHeaderView;
    UIRefreshControl *_refreshControl;
    CDPSpaceView *_adHeader;
    BLDataEngine *_dataEngine;
    NSDictionary *_originCategory;
    NSString *_category;
    NSString *_categoryName;
    NSString *_titleFromSchema;
    double _startTime;
    NSString *_month;
    NSString *_bizType;
    NSString *_bizSubType;
    NSString *_scene;
    NSString *_date;
    BLHomeListViewDelegateImpl *_listViewDelegateImpl;
    BLHomeListSearchModule *_searchModule;
    id <UIViewControllerPreviewing> _previewingDelegate;
}

@property(nonatomic) __weak id <UIViewControllerPreviewing> previewingDelegate; // @synthesize previewingDelegate=_previewingDelegate;
@property(retain, nonatomic) BLHomeListSearchModule *searchModule; // @synthesize searchModule=_searchModule;
@property(retain, nonatomic) BLHomeListViewDelegateImpl *listViewDelegateImpl; // @synthesize listViewDelegateImpl=_listViewDelegateImpl;
@property(nonatomic) _Bool isShowSearchButton; // @synthesize isShowSearchButton=_isShowSearchButton;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *bizSubType; // @synthesize bizSubType=_bizSubType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *month; // @synthesize month=_month;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *titleFromSchema; // @synthesize titleFromSchema=_titleFromSchema;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSDictionary *originCategory; // @synthesize originCategory=_originCategory;
@property(nonatomic) _Bool shouldRefrush; // @synthesize shouldRefrush=_shouldRefrush;
@property(retain, nonatomic) BLDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) CDPSpaceView *adHeader; // @synthesize adHeader=_adHeader;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSString *tradeNO; // @synthesize tradeNO=_tradeNO;
@property(nonatomic) _Bool returnHome; // @synthesize returnHome=_returnHome;
- (void).cxx_destruct;
- (void)gotoSummaryViewController:(id)arg1;
- (void)gotoNextViewController:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1;
- (id)getNavTitle:(id)arg1;
- (void)refreshEventWithIsTitleLoading:(_Bool)arg1;
- (void)refreshEventWithoutTitleLoading;
- (void)refreshEvent;
- (void)onSearch:(id)arg1;
- (void)initSearchModuleWithData:(id)arg1;
- (void)updateTitleWithData:(id)arg1;
- (void)loadCategoryData;
- (void)loadCacheCategoryData;
- (void)reloadTableView:(long long)arg1;
- (_Bool)nextPagePullViewIsLoading;
- (void)nextPagePullViewDidRefresh;
- (void)deleteDataDidFinished:(_Bool)arg1;
- (void)changeDataDidFinishedByCache;
- (void)handleException:(id)arg1;
- (void)changeDataDidFinishedByRPC:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)didSelectSection:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)deleteRowAtIndexPath:(id)arg1;
- (void)tryHideADView;
- (void)layoutUI;
- (void)setupTableView;
- (void)unregisterForPreviewing;
- (void)registerForPreviewing;
- (void)doSearchViewDisappearNotification:(id)arg1;
- (void)doSearchDataDidChangedNotification:(id)arg1;
- (void)resetListView;
- (void)doSAAccountDidExitNotification:(id)arg1;
- (void)doAPLoginControllerDidFinishNotification:(id)arg1;
- (void)doNotifycationShouldRefrush:(id)arg1;
- (void)dealloc;
- (void)back;
- (void)viewWillDestroy;
- (void)viewWillAppear:(_Bool)arg1;
- (void)appearAction;
- (_Bool)shouldReadWriteCache;
- (void)autoGotoDetailViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)registerNotifications;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

