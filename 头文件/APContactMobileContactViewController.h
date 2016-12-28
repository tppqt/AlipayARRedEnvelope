//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class APCommonSelectView, NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIView;

@interface APContactMobileContactViewController : APContactBaseViewController
{
    _Bool _timeout;
    NSArray *_dataArray;
    NSMutableDictionary *_addingContact;
    NSMutableDictionary *_addedDict;
    UIView *_footerLoadingView;
    UIActivityIndicatorView *_footerActView;
    NSString *_source;
    NSString *_profileSource;
}

@property(retain, nonatomic) NSString *profileSource; // @synthesize profileSource=_profileSource;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) UIActivityIndicatorView *footerActView; // @synthesize footerActView=_footerActView;
@property(retain, nonatomic) UIView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(retain, nonatomic) NSMutableDictionary *addedDict; // @synthesize addedDict=_addedDict;
@property(retain, nonatomic) NSMutableDictionary *addingContact; // @synthesize addingContact=_addingContact;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)getSPMID;
- (id)handleSearchText:(id)arg1;
- (id)getProfileSource;
- (id)getSource;
- (void)errorViewShow:(_Bool)arg1 error:(id)arg2;
- (void)didSelectContactInfo:(id)arg1;
- (void)didClickButtonForItem:(id)arg1 commonView:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (void)footerLoadingViewShow:(_Bool)arg1;
- (void)reloadFooterLoadingView;
- (void)hideLoadingView;
- (void)loadingViewShow:(_Bool)arg1;
- (void)contactCacheUpdate:(id)arg1;
- (void)handleContactDataReslutWithResponseVO:(id)arg1;
- (void)reloadContacts:(id)arg1;
- (void)reloadContacts;
- (void)loadContact;
- (void)setupSelectView;
- (void)viewWillDestroy;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(retain, nonatomic) APCommonSelectView *selectView;

@end

