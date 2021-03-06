//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface APFundIncomeListCell : UITableViewCell
{
    UIImageView *_indicatorView;
    UILabel *_cellTitle;
    UILabel *_cellStartInfo;
    UILabel *_cellEndInfo;
    UILabel *_cellExtraEndInfo;
    long long _cellStyle;
}

+ (float)cellHeight;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UILabel *cellExtraEndInfo; // @synthesize cellExtraEndInfo=_cellExtraEndInfo;
@property(retain, nonatomic) UILabel *cellEndInfo; // @synthesize cellEndInfo=_cellEndInfo;
@property(retain, nonatomic) UILabel *cellStartInfo; // @synthesize cellStartInfo=_cellStartInfo;
@property(retain, nonatomic) UILabel *cellTitle; // @synthesize cellTitle=_cellTitle;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

