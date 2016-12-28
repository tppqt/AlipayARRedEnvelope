//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPAutoRotateVC.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ImmPaySettingService, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UISwitch, UITableView;

@interface ImmPaySetting : MMPAutoRotateVC <UITableViewDelegate, UITableViewDataSource>
{
    UISwitch *_jfbSwitch;
    UIButton *_asiBtn;
    UIImageView *_asiIcon;
    UILabel *_asiLabel;
    ImmPaySettingService *_settingService;
    NSString *_settingAction;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *settingAction; // @synthesize settingAction=_settingAction;
@property(nonatomic) __weak ImmPaySettingService *settingService; // @synthesize settingService=_settingService;
@property(retain, nonatomic) UILabel *asiLabel; // @synthesize asiLabel=_asiLabel;
@property(retain, nonatomic) UIImageView *asiIcon; // @synthesize asiIcon=_asiIcon;
@property(retain, nonatomic) UIButton *asiBtn; // @synthesize asiBtn=_asiBtn;
@property(retain, nonatomic) UISwitch *jfbSwitch; // @synthesize jfbSwitch=_jfbSwitch;
- (void).cxx_destruct;
- (void)doClickNaviLeftAction:(id)arg1;
- (void)onSwitchValueChanged:(id)arg1;
- (void)onShowNoPwdSetting;
- (void)onShowChannelSetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)updatePaySettingAsi;
- (void)updatePaySettingAll;
@property(readonly, nonatomic) _Bool showNopwdSection; // @dynamic showNopwdSection;
- (void)setupDataSource;
- (void)viewDidLoad;
- (id)initWithSetting:(id)arg1 andAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

