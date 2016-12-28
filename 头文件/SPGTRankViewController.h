//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPBaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, DTRpcAsyncCaller, NSArray, NSString, UILabel;

@interface SPGTRankViewController : SPBaseViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    DTRpcAsyncCaller *_rankCaller;
    APTableView *_rankFormView;
    UILabel *_emptyIndicatorLabel;
    NSArray *_rankList;
}

@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) UILabel *emptyIndicatorLabel; // @synthesize emptyIndicatorLabel=_emptyIndicatorLabel;
@property(retain, nonatomic) APTableView *rankFormView; // @synthesize rankFormView=_rankFormView;
@property(retain, nonatomic) DTRpcAsyncCaller *rankCaller; // @synthesize rankCaller=_rankCaller;
- (void).cxx_destruct;
- (void)exitMe;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loadRankData;
- (void)buildEmptyRank;
- (void)buildRankFormView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

