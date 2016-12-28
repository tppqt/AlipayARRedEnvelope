//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UIView;

@interface ShowBigViewController : DTViewController <UIScrollViewDelegate, UINavigationControllerDelegate>
{
    UIScrollView *_scrollerview;
    _Bool isClick;
    int _number;
    UIButton *rightbtn;
    NSMutableArray *_arrayOK;
    long long _count;
    UIView *_baseView;
    UIButton *_completeBtn;
    UILabel *_label;
    NSMutableArray *_tagArray;
    UIView *_titleView;
}

@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSMutableArray *tagArray; // @synthesize tagArray=_tagArray;
@property(nonatomic) int number; // @synthesize number=_number;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *arrayOK; // @synthesize arrayOK=_arrayOK;
@property(nonatomic) _Bool isClick; // @synthesize isClick;
@property(retain, nonatomic) UIButton *rightbtn; // @synthesize rightbtn;
- (void).cxx_destruct;
- (id)getBackButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)completeClick;
- (void)dismiss;
- (void)select:(id)arg1;
- (void)tapGesture;
- (void)layOut;
- (void)getBaseView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

