//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AFStockPriceView;

@interface AFStockPriceCell : UITableViewCell
{
    AFStockPriceView *_leftView;
    AFStockPriceView *_rightView;
}

+ (id)createCellWithTableView:(id)arg1;
+ (double)cellHeight;
@property(retain, nonatomic) AFStockPriceView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) AFStockPriceView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setBuyModel:(id)arg1 sellModel:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)setupViews;

@end

