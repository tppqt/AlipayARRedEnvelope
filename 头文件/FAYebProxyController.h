//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWUtilScrollController.h"

#import "UIActionSheetDelegate.h"

@class APButton, NSString;

@interface FAYebProxyController : WWUtilScrollController <UIActionSheetDelegate>
{
    NSString *_relatedUserId;
    APButton *_footerButton;
}

@property(retain, nonatomic) APButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) NSString *relatedUserId; // @synthesize relatedUserId=_relatedUserId;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)popSelfController:(id)arg1;
- (void)submitHandler;
- (void)agreementHandler:(id)arg1;
- (void)openFund;
- (void)loadContent;
- (id)loadOnline;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

