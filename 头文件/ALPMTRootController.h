//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "H5ServiceDelegate.h"

@class DTViewController, NSString, UIImageView, UIScrollView;

@interface ALPMTRootController : UITabBarController <H5ServiceDelegate>
{
    _Bool _isNavItemSet;
    double _clickLastTime;
    UIScrollView *_mineScrollView;
    UIImageView *_badgeImgView;
    UIImageView *_performanceBadgeImageView;
    DTViewController *_performanceVC;
    _Bool _webViewLoaded;
    _Bool didRecordSqm_;
    int _tabIndex;
    NSString *_sqmCode;
}

@property(retain, nonatomic) NSString *sqmCode; // @synthesize sqmCode=_sqmCode;
@property(nonatomic) int tabIndex; // @synthesize tabIndex=_tabIndex;
- (void).cxx_destruct;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (unsigned long long)getFirstMoviePage;
- (id)createBadgeViewWithTabIndex:(unsigned int)arg1;
- (void)dismissBadgeInPerformanceItem;
- (void)showBadgeInPerformanceItem;
- (void)dismissBadgeInDiscoveryItem;
- (void)showBadgeInDiscoveryItem;
- (void)seedMe:(id)arg1;
- (void)viewWillDestroy;
- (void)popMe;
- (void)changeTabWithOption:(id)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)opaqueNavigationBarColor;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)configViewController:(id)arg1 type:(long long)arg2 tabTitle:(id)arg3 tabImageIdentifier:(id)arg4 hightlightImageIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

