//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol PSDViewControllerDelegate <NSObject>
- (void)viewController:(UIViewController *)arg1 viewWillDestroy:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidDisappear:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewWillDisappear:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidLayoutSubviews:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidAppear:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewWillAppear:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidUnLoad:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 viewDidLoad:(_Bool)arg2;
- (void)viewController:(UIViewController *)arg1 loadView:(_Bool)arg2;
@end

