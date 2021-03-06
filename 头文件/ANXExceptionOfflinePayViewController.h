//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseOfflinePayViewController.h"

@class NSString, UIImageView, UILabel, UIView;

@interface ANXExceptionOfflinePayViewController : ANXBaseOfflinePayViewController
{
    NSString *_pageName;
    NSString *_errorTips;
    UIView *_containerView;
    UIImageView *_errorImageView;
    UILabel *_errorMainTitle;
    UILabel *_errorSubTitle;
}

@property(nonatomic) __weak UILabel *errorSubTitle; // @synthesize errorSubTitle=_errorSubTitle;
@property(nonatomic) __weak UILabel *errorMainTitle; // @synthesize errorMainTitle=_errorMainTitle;
@property(nonatomic) __weak UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *errorTips; // @synthesize errorTips=_errorTips;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)configureNavigationItem;
- (void)initializeConstraints;
- (void)viewDidLoad;

@end

