//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, MOBILEAPPCOMMONClientUpgradeRes, NSArray, NSString, UIImageView, UILabel;

@interface SWAboutViewController : SCDTViewController <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_versionLabel;
    APTableView *_tableView;
    UIImageView *_logoImageView;
    UIImageView *_iconImageView;
    UILabel *_copyRightLabel;
    MOBILEAPPCOMMONClientUpgradeRes *_response;
    _Bool _isShowFullVersion;
    NSArray *_dataSourceArray;
}

- (void).cxx_destruct;
- (void)monitorPoint_laterBtnClick;
- (void)monitorPoint_nowBtnClick;
- (void)monitorPoint_updateAlertShow;
- (void)monitorPoint_updateBtnClick;
- (void)monitorBack;
- (void)monitorMark;
- (void)monitorFeedBack;
- (void)monitorState;
- (void)monitorOpenSource;
- (void)doDetectUpdate;
- (void)doUpdate;
- (_Bool)isNewVersionArrvied;
- (void)doOpenSourceProtocol;
- (id)getServerUrl;
- (void)doState;
- (void)doFeedBack;
- (void)doMark;
- (void)lookPravicy;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDestroy;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)back_common;
- (void)back;
- (void)showDebugView;
- (void)tapLogo;
- (id)shortVersion;
- (id)MMTPSwitchFromSetting;
- (long long)year;
- (void)initSubViews;
- (_Bool)canShowPravicy;
- (_Bool)hideCheckVersion;
- (void)configTableView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

