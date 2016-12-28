//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIPageControl, UIScrollView, UIView;

@interface GO2OHomeNavigationCell : APTableViewCell <UIScrollViewDelegate>
{
    _Bool _isImageExists;
    UIPageControl *_pageControl;
    NSArray *_navigations;
    UIScrollView *_scrollView;
    NSMutableArray *_buttons;
    UIView *_separatorLine;
    double _itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) _Bool isImageExists; // @synthesize isImageExists=_isImageExists;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *navigations; // @synthesize navigations=_navigations;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
- (unsigned long long)numberOfPage;
- (void)dealloc;
- (void)configureCellWithNavigations:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

