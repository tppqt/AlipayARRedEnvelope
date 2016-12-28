//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "ALPAuthorizeDetailDelegate.h"

@class APNetErrorView, APSegmentedControl, APTipView, AuthRpcCaller, AuthRpcContext, NSMutableArray, NSString, ODRefreshControl, UILabel, UITableView, UIView;

@interface AuthorizeGrantViewController : DTViewController <ALPAuthorizeDetailDelegate>
{
    _Bool _isRefreshing;
    int _tableViewType;
    APSegmentedControl *_GDSegment;
    UIView *_rootView;
    UITableView *_tableView;
    ODRefreshControl *_refreshControl;
    NSMutableArray *_validAuthList;
    APTipView *_tipView;
    AuthRpcCaller *_rpcCaller;
    AuthRpcContext *_rpcContext;
    APNetErrorView *_netErrorView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) APNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) AuthRpcContext *rpcContext; // @synthesize rpcContext=_rpcContext;
@property(retain, nonatomic) AuthRpcCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(retain, nonatomic) APTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSMutableArray *validAuthList; // @synthesize validAuthList=_validAuthList;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) ODRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) int tableViewType; // @synthesize tableViewType=_tableViewType;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) APSegmentedControl *GDSegment; // @synthesize GDSegment=_GDSegment;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)showAlertWith:(id)arg1;
- (void)doLoadGrantTable;
- (void)doLoadDeductTable;
- (void)segmentValueChanged:(id)arg1;
- (void)removeAuthDone;
- (void)allLoadingCompleted;
- (void)refreshCompleted;
- (void)refresh;
- (void)hiddenTipView;
- (void)showTipViewWith:(id)arg1;
- (void)createHeaderView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)showErrorViewWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

