//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OFilterPopoverView.h"

@class NSMutableArray, NSString, O2OSearchResultMenuGroup, UIButton, UIScrollView;

@interface O2OFilterPopoverViewTagMultiSelect : O2OFilterPopoverView
{
    UIButton *_resetButton;
    UIButton *_conformButton;
    UIScrollView *_menuContainerView;
    NSMutableArray *_tagsListView;
    NSString *_style;
    O2OSearchResultMenuGroup *_originMenuData;
    O2OSearchResultMenuGroup *_selectedMenuData;
}

@property(retain, nonatomic) O2OSearchResultMenuGroup *selectedMenuData; // @synthesize selectedMenuData=_selectedMenuData;
@property(retain, nonatomic) O2OSearchResultMenuGroup *originMenuData; // @synthesize originMenuData=_originMenuData;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *tagsListView; // @synthesize tagsListView=_tagsListView;
@property(retain, nonatomic) UIScrollView *menuContainerView; // @synthesize menuContainerView=_menuContainerView;
@property(retain, nonatomic) UIButton *conformButton; // @synthesize conformButton=_conformButton;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
- (void).cxx_destruct;
- (void)hiddenFunc;
- (void)onResetClick:(id)arg1;
- (void)onConformClick:(id)arg1;
- (void)reloadWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

