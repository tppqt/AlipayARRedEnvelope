//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluCountryListViewController.h"

@class aluRPC;

@interface aluCountryListViewController2 : aluCountryListViewController
{
    aluRPC *_getCountryCodeRPC;
}

@property(retain, nonatomic) aluRPC *getCountryCodeRPC; // @synthesize getCountryCodeRPC=_getCountryCodeRPC;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCountries:(id)arg1;
- (void)doGetCountryCodes;
- (void)onBack;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

