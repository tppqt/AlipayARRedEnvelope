//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface APTableViewCell : UITableViewCell
{
    UIView *_lineView;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)setAccessoryType:(long long)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)layoutMargins;
- (void)drawUnderlineInRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)commontInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addGroupSubView:(id)arg1;

@end

