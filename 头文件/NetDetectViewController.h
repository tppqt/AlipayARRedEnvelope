//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDTViewController.h"

#import "ManualNetCheckResultInterface.h"

@class NSString, UIButton, UILabel, UIScrollView;

@interface NetDetectViewController : SCDTViewController <ManualNetCheckResultInterface>
{
    UILabel *_netDetect;
    UIButton *_startBtn;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)onNetCheckProgress:(int)arg1 state:(long long)arg2 tip:(id)arg3;
- (void)startDetect;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

