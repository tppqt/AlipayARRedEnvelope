//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "H5NavItemViewDelegate.h"

@class APBarButtonItem, AUFloatMenu, NSString, UIBarButtonItem, UIButton;

@interface Plugin4NavigationItem : NBPluginBase <H5NavItemViewDelegate>
{
    _Bool _hideLeftButtonsByJs;
    _Bool _shouldSetDefaultColor;
    _Bool _isDefaultImage;
    UIButton *_backLeftItem;
    APBarButtonItem *_backButtonItem;
    UIBarButtonItem *_closeButtonItem;
    UIButton *_settingButton;
    UIButton *_subSettingButton;
    AUFloatMenu *_popView;
    NSString *_icontype;
}

@property(retain, nonatomic) NSString *icontype; // @synthesize icontype=_icontype;
@property(nonatomic) _Bool isDefaultImage; // @synthesize isDefaultImage=_isDefaultImage;
@property(retain, nonatomic) AUFloatMenu *popView; // @synthesize popView=_popView;
@property(nonatomic) _Bool shouldSetDefaultColor; // @synthesize shouldSetDefaultColor=_shouldSetDefaultColor;
@property(nonatomic) __weak UIButton *subSettingButton; // @synthesize subSettingButton=_subSettingButton;
@property(nonatomic) __weak UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UIBarButtonItem *closeButtonItem; // @synthesize closeButtonItem=_closeButtonItem;
@property(retain, nonatomic) APBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) _Bool hideLeftButtonsByJs; // @synthesize hideLeftButtonsByJs=_hideLeftButtonsByJs;
@property(nonatomic) __weak UIButton *backLeftItem; // @synthesize backLeftItem=_backLeftItem;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)hidePopMenu;
- (void)showPopMenuWithData:(id)arg1;
- (void)updateLeftItem;
- (void)addJSApis;
- (id)currentViewController;
- (_Bool)isStandardColor:(id)arg1;
- (void)setNavigationBar:(_Bool)arg1;
- (void)handleEvent:(id)arg1;
- (void)setButtonTitleColor:(id)arg1 Color:(id)arg2;
- (void)pluginDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

