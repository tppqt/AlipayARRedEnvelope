//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITableView, UITextField, UIView;

@interface NickSettingViewController : DTViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isDeleting;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _canceled;
    CDUnknownBlockType _exceptionCallback;
    NSString *_preNickname;
    NSString *_sourceBiz;
    UITableView *_tableView;
    UITextField *_nickField;
    UIView *_footer;
    UILabel *_footerViewLabel;
}

@property(retain, nonatomic) UILabel *footerViewLabel; // @synthesize footerViewLabel=_footerViewLabel;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UITextField *nickField; // @synthesize nickField=_nickField;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *sourceBiz; // @synthesize sourceBiz=_sourceBiz;
@property(retain, nonatomic) NSString *preNickname; // @synthesize preNickname=_preNickname;
@property(copy, nonatomic) CDUnknownBlockType exceptionCallback; // @synthesize exceptionCallback=_exceptionCallback;
@property(copy, nonatomic) CDUnknownBlockType canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)monitorSaveNickClicked;
- (unsigned long long)characterSize:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doSaveNick;
- (void)saveNick;
- (unsigned long long)nickNameLengthMax;
- (void)back;
- (void)textFiledEditChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)createEditorFeild;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

