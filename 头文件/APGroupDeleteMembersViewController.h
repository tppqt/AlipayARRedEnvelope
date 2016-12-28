//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCommonSelectTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APAlertView, NSArray, NSString, UITableView;

@interface APGroupDeleteMembersViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, APCommonSelectTableViewCellDelegate>
{
    UITableView *_tableView;
    NSArray *_members;
    NSString *_groupId;
    APAlertView *_alertView;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak APAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)back;
- (void)deleteMember:(id)arg1;
- (int)displayModeForDataArray:(id)arg1 indexPath:(id)arg2;
- (void)didClickAccBtnWithItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshContactInfos;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMembers:(id)arg1 groupId:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

