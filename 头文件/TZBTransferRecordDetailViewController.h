//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, NSString, TZBTransferRecordDetailModel;

@interface TZBTransferRecordDetailViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _shouldGotoHomePage;
    TZBTransferRecordDetailModel *_detailModel;
    APTableView *_tableView;
}

@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldGotoHomePage; // @synthesize shouldGotoHomePage=_shouldGotoHomePage;
@property(retain, nonatomic) TZBTransferRecordDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sendDataRequestWithShowLoading:(_Bool)arg1;
- (void)reloadDataWithModel:(id)arg1;
- (void)setupTableView;
- (void)onFinishClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

