//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APInputBoxCell, APWealthFooterView, NSString, PasswordTokenCreatorPB;

@interface ALPFundTransferOutBalanceViewController : BEEFunctionTableController <UIAlertViewDelegate, UITextFieldDelegate>
{
    APInputBoxCell *_outMoneyCell;
    APWealthFooterView *_tailView;
    PasswordTokenCreatorPB *_passwordTokenCreator;
    NSString *_balanceAmount;
    NSString *_transferOutQuotaString;
    NSString *_transferOutQuotaAmount;
    NSString *_token;
    double _stableViewStartY;
}

- (void).cxx_destruct;
- (void)doOutClick;
- (_Bool)checkAmountValid:(id)arg1;
- (void)gotoInit;
- (id)buildQuotaText:(id)arg1 value:(id)arg2;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (void)loadOnRetry;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateTitleLabelWidth;
- (void)viewDidLoad;
- (void)enableTailButton:(_Bool)arg1;
- (id)tableView;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

