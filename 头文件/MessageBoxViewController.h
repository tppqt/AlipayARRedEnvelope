//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "MBRoundedCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APExceptionView, MBBaseMenuView, MessageTableView, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, UIActivityIndicatorView, UIView;

@interface MessageBoxViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, MBRoundedCellDelegate, UIScrollViewDelegate>
{
    NSObject<OS_dispatch_semaphore> *_refreshSema;
    _Bool _isPullRefreshing;
    _Bool _loadingMore;
    _Bool _insertLatestFlag;
    _Bool _insertLatestTodoFlag;
    _Bool _isSelectAll;
    unsigned long long _appType;
    MBBaseMenuView *_baseMenuView;
    NSMutableArray *_msgListDataSourceArray;
    MessageTableView *_msgListTableView;
    APExceptionView *_msgEmptyView;
    UIActivityIndicatorView *_activityView;
    UIView *_loadingStateHeaderView;
    unsigned long long _messageType;
    UIView *_actionFooterView;
    NSMutableDictionary *_cellHeightCache;
    NSMutableDictionary *_feedbackShowDic;
    NSMutableDictionary *_feedbackClickDic;
}

@property(retain, nonatomic) NSMutableDictionary *feedbackClickDic; // @synthesize feedbackClickDic=_feedbackClickDic;
@property(retain, nonatomic) NSMutableDictionary *feedbackShowDic; // @synthesize feedbackShowDic=_feedbackShowDic;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(nonatomic) _Bool isSelectAll; // @synthesize isSelectAll=_isSelectAll;
@property _Bool insertLatestTodoFlag; // @synthesize insertLatestTodoFlag=_insertLatestTodoFlag;
@property _Bool insertLatestFlag; // @synthesize insertLatestFlag=_insertLatestFlag;
@property _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) UIView *actionFooterView; // @synthesize actionFooterView=_actionFooterView;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) UIView *loadingStateHeaderView; // @synthesize loadingStateHeaderView=_loadingStateHeaderView;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) _Bool isPullRefreshing; // @synthesize isPullRefreshing=_isPullRefreshing;
@property(retain, nonatomic) APExceptionView *msgEmptyView; // @synthesize msgEmptyView=_msgEmptyView;
@property(retain, nonatomic) MessageTableView *msgListTableView; // @synthesize msgListTableView=_msgListTableView;
@property(retain, nonatomic) NSMutableArray *msgListDataSourceArray; // @synthesize msgListDataSourceArray=_msgListDataSourceArray;
@property(readonly, nonatomic) MBBaseMenuView *baseMenuView; // @synthesize baseMenuView=_baseMenuView;
@property(readonly, nonatomic) unsigned long long appType; // @synthesize appType=_appType;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)arg1;
- (void)reloadMenuView:(id)arg1;
- (void)onDeleteMenuItemClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tryPullDownRefresh;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToMsgListBottom;
- (void)menuInfoUpdate:(id)arg1;
- (void)onDelAllMsgEvent:(id)arg1;
- (void)onNewNotifMsg:(id)arg1;
- (id)getDataManager;
- (_Bool)deleteMsg:(id)arg1;
- (void)deleteMsgCell:(id)arg1;
- (_Bool)hasMoreData;
- (void)mergeAdditionalMessage:(id)arg1;
- (id)needQueryTemplateListCurrentDataList:(id)arg1;
- (void)getPageData:(id)arg1 limit:(unsigned long long)arg2 needDelay:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)loadPrePage;
- (void)setupMessageListDataSource;
- (void)setupMessageListDataSource:(_Bool)arg1;
- (void)showMsgSettingPage;
- (void)addNavigatorRightBtn;
- (void)setupSubViews;
- (void)showNoMessageEmptyView:(_Bool)arg1;
- (void)refreshUIWithScrollToBottom:(_Bool)arg1;
- (void)refreshUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAppType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

