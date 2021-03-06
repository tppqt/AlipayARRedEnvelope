//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WDProcessDelegate.h"

@class NSMutableArray, NSString, SWDevice, UIActivityIndicatorView, UIAlertView, UITableView;

@interface SWDeviceListViewController : SWViewController <UITableViewDataSource, UITableViewDelegate, WDProcessDelegate>
{
    _Bool _isBinding;
    UITableView *_tableView;
    NSMutableArray *_deviceArray;
    SWDevice *_target;
    UIActivityIndicatorView *_indicator;
    UIAlertView *_processAlert;
}

@property(retain, nonatomic) UIAlertView *processAlert; // @synthesize processAlert=_processAlert;
@property(nonatomic) _Bool isBinding; // @synthesize isBinding=_isBinding;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) SWDevice *target; // @synthesize target=_target;
@property(retain, nonatomic) NSMutableArray *deviceArray; // @synthesize deviceArray=_deviceArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onResult:(id)arg1;
- (void)onDeviceFound:(id)arg1;
- (void)onPromptNeeded:(int)arg1;
- (void)dismissPrompt;
- (void)checkPwdAndUploadRegData;
- (void)sendChallengeData;
- (void)connectDevice:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)fetchChallengeData;
- (void)stopScan;
- (void)startScan;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)back;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

