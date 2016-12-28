//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APGroupAppStageViewController.h"

#import "APCommonSelectDelegate.h"

@class APCommonSelectView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface APGroupListViewController : APGroupAppStageViewController <APCommonSelectDelegate>
{
    _Bool _multiSelectEnable;
    _Bool _enableSelectNone;
    id <APGroupListViewControllerDelegate> _groupListDelegate;
    NSDictionary *_params;
    APCommonSelectView *_selectView;
    NSMutableArray *_currentGroups;
    NSMutableDictionary *_pyDict;
    NSArray *_indexChar;
    UILabel *_emptyMemo;
    NSString *_confirmBtnTitle;
    long long _maxMultiCount;
    NSString *_overMaxText;
    NSMutableArray *_needAddItems;
    long long _selectedCount;
}

+ (id)groupListWithParams:(id)arg1;
@property(nonatomic) _Bool enableSelectNone; // @synthesize enableSelectNone=_enableSelectNone;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(retain, nonatomic) NSMutableArray *needAddItems; // @synthesize needAddItems=_needAddItems;
@property(retain, nonatomic) NSString *overMaxText; // @synthesize overMaxText=_overMaxText;
@property(nonatomic) long long maxMultiCount; // @synthesize maxMultiCount=_maxMultiCount;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(retain, nonatomic) UILabel *emptyMemo; // @synthesize emptyMemo=_emptyMemo;
@property(retain, nonatomic) NSArray *indexChar; // @synthesize indexChar=_indexChar;
@property(retain, nonatomic) NSMutableDictionary *pyDict; // @synthesize pyDict=_pyDict;
@property(retain, nonatomic) NSMutableArray *currentGroups; // @synthesize currentGroups=_currentGroups;
@property(retain, nonatomic) APCommonSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool multiSelectEnable; // @synthesize multiSelectEnable=_multiSelectEnable;
@property(nonatomic) __weak id <APGroupListViewControllerDelegate> groupListDelegate; // @synthesize groupListDelegate=_groupListDelegate;
- (void).cxx_destruct;
- (void)selectionDidChangeInCommonView:(id)arg1;
- (void)commonView:(id)arg1 didClickSearchBtWithText:(id)arg2;
- (id)commonView:(id)arg1 viewForFooterInCustomSection:(long long)arg2;
- (double)commonView:(id)arg1 heightForFooterInCustomSection:(long long)arg2;
- (void)commonView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (void)refreshContentType;
- (int)sourceCode;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (void)groupListViewController:(id)arg1 didSelectGroupInfos:(id)arg2;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (id)sortedGroupIndexCharAry:(id)arg1;
- (void)sortGroup:(id)arg1;
- (id)organizeGroupInfo:(id)arg1;
- (void)refreshGroupList;
- (void)refreshRightBarButtonTitle;
- (void)setRightBarButtonEnabled:(_Bool)arg1;
- (void)tapRightButtonItem:(id)arg1;
- (id)makeRightBarButtonItemsWithTitle:(id)arg1;
- (void)setupRightBarButton;
- (void)setupSelectView;
- (void)setupEmptyMemo;
- (void)setupFootMemberCount;
- (void)refreshGroupApps;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)quitGroupNotification:(id)arg1;
- (void)responseNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

