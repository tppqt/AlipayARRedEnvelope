//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRCreditCardAutoRepaymentDataSource.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITextFieldDelegate.h"

@class APAgreementBox, APButton, NSString, UIView;

@interface CCRCreditCardAutoSettingDataSource : CCRCreditCardAutoRepaymentDataSource <UITextFieldDelegate, TTTAttributedLabelDelegate>
{
    APButton *_submitBtn;
    APButton *_cancelBtn;
    APAgreementBox *_agreementBox;
    double _scrollViewOffsetWhileShowKeyboard;
    NSString *_passwordInput;
    UIView *_headerView;
    UIView *_mobileZonePasswordFooterView;
    struct CGRect _origalFrame;
}

@property(retain, nonatomic) UIView *mobileZonePasswordFooterView; // @synthesize mobileZonePasswordFooterView=_mobileZonePasswordFooterView;
@property(nonatomic) struct CGRect origalFrame; // @synthesize origalFrame=_origalFrame;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *passwordInput; // @synthesize passwordInput=_passwordInput;
@property(nonatomic) double scrollViewOffsetWhileShowKeyboard; // @synthesize scrollViewOffsetWhileShowKeyboard=_scrollViewOffsetWhileShowKeyboard;
@property(retain, nonatomic) APAgreementBox *agreementBox; // @synthesize agreementBox=_agreementBox;
@property(retain, nonatomic) APButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) APButton *submitBtn; // @synthesize submitBtn=_submitBtn;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)submited:(id)arg1;
- (void)agreementBoxCheckboxClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)actullayDeductDay:(id)arg1 billDay:(id)arg2;
- (_Bool)isSubmitValid;
- (void)relayoutUIWithKeyboardVisibleState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)resignFirstResponser;
- (void)reloadWithDeductInfo:(id)arg1;
- (id)initWithSavedCard:(id)arg1 autoRepaymentType:(int)arg2 deductInfoResp:(id)arg3 settingDelegate:(id)arg4 tableView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

