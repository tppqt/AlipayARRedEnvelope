//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MVFilterGroupView, NSArray, NSString, UIScrollView;

@interface MVFilterView : UIView
{
    UIScrollView *contentView_;
    UIView *wrapperView_;
    MVFilterGroupView *regionGroupView_;
    MVFilterGroupView *featureGroupView_;
    MVFilterGroupView *timeGroupView_;
    UIView *bottomView_;
    double rate_;
    NSArray *_regionValueArray;
    NSArray *_featureKeyArray;
    NSArray *_featureValueArray;
    NSArray *_timeKeyArray;
    NSArray *_timeValueArray;
    NSString *_regionFilterKey;
    NSString *_featureFilterKey;
    NSString *_timeFilterKey;
    NSString *_filmId;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) NSString *filmId; // @synthesize filmId=_filmId;
@property(retain, nonatomic) NSString *timeFilterKey; // @synthesize timeFilterKey=_timeFilterKey;
@property(retain, nonatomic) NSString *featureFilterKey; // @synthesize featureFilterKey=_featureFilterKey;
@property(retain, nonatomic) NSString *regionFilterKey; // @synthesize regionFilterKey=_regionFilterKey;
@property(retain, nonatomic) NSArray *timeValueArray; // @synthesize timeValueArray=_timeValueArray;
@property(retain, nonatomic) NSArray *timeKeyArray; // @synthesize timeKeyArray=_timeKeyArray;
@property(retain, nonatomic) NSArray *featureValueArray; // @synthesize featureValueArray=_featureValueArray;
@property(retain, nonatomic) NSArray *featureKeyArray; // @synthesize featureKeyArray=_featureKeyArray;
@property(retain, nonatomic) NSArray *regionValueArray; // @synthesize regionValueArray=_regionValueArray;
- (void).cxx_destruct;
- (void)flashScrollIndicators;
- (void)confirmButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)reloadData;
- (void)initContent;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

