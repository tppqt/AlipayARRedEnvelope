//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APToastView, CCBackupBiz, CCBackupDetailCell, CCGetInfoBiz, CCGetLocalInfoBiz, CCRestoreBiz, MBProgressHUD, NSString, UILabel, UITableView;

@interface CloudContactRootController : DTViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _recoverPageSize;
    int _cloudContactCount;
    int _serverStoreCount;
    int _localContactCount;
    int _maxBackupCount;
    UILabel *_labelLastBackupTime;
    UITableView *_table;
    CCBackupDetailCell *_detailCell;
    APToastView *_progressToastView;
    MBProgressHUD *_hud;
    CCBackupBiz *_backupBiz;
    CCRestoreBiz *_restoreBiz;
    CCGetInfoBiz *_getInfoBiz;
    CCGetLocalInfoBiz *_getLocalInfoBiz;
    long long _lastBackupTime;
    long long _lastRestoreTime;
}

@property(nonatomic) int maxBackupCount; // @synthesize maxBackupCount=_maxBackupCount;
@property(nonatomic) int localContactCount; // @synthesize localContactCount=_localContactCount;
@property(nonatomic) int serverStoreCount; // @synthesize serverStoreCount=_serverStoreCount;
@property(nonatomic) int cloudContactCount; // @synthesize cloudContactCount=_cloudContactCount;
@property(nonatomic) int recoverPageSize; // @synthesize recoverPageSize=_recoverPageSize;
@property(nonatomic) long long lastRestoreTime; // @synthesize lastRestoreTime=_lastRestoreTime;
@property(nonatomic) long long lastBackupTime; // @synthesize lastBackupTime=_lastBackupTime;
@property(retain, nonatomic) CCGetLocalInfoBiz *getLocalInfoBiz; // @synthesize getLocalInfoBiz=_getLocalInfoBiz;
@property(retain, nonatomic) CCGetInfoBiz *getInfoBiz; // @synthesize getInfoBiz=_getInfoBiz;
@property(retain, nonatomic) CCRestoreBiz *restoreBiz; // @synthesize restoreBiz=_restoreBiz;
@property(retain, nonatomic) CCBackupBiz *backupBiz; // @synthesize backupBiz=_backupBiz;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) APToastView *progressToastView; // @synthesize progressToastView=_progressToastView;
@property(retain, nonatomic) CCBackupDetailCell *detailCell; // @synthesize detailCell=_detailCell;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) UILabel *labelLastBackupTime; // @synthesize labelLastBackupTime=_labelLastBackupTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willEnterForground:(id)arg1;
- (void)gotoSystemSettings;
- (void)restoreBtnClicked;
- (void)backupBtnClicked;
- (void)updateCloudCount:(id)arg1;
- (void)handleResult:(_Bool)arg1 withResult:(id)arg2 andType:(int)arg3;
- (void)getLocalPhoneBookInfo;
- (void)getNetPhoneBookInfo;
- (void)getPhoneBookInfo;
- (long long)checkPhoneBookStatus;
- (void)disableBackGesture;
- (void)enableBackGesture;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateLastBackupTime;
- (void)createSubviews;
- (void)adjustSubViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

