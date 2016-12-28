//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AutoTransferEditView, AutoTransferRuleCellDetailView, AutoTransferRuleCellTitleView;

@interface AutoTransferRuleCell : UITableViewCell
{
    _Bool _cellEditing;
    id <AutoTransferRuleCellButtonClickDelegate> _delegate;
    AutoTransferRuleCellTitleView *_titleView;
    AutoTransferRuleCellDetailView *_detailsView;
    AutoTransferEditView *_editView;
}

+ (double)cellHeight;
@property(retain, nonatomic) AutoTransferEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) AutoTransferRuleCellDetailView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) AutoTransferRuleCellTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool cellEditing; // @synthesize cellEditing=_cellEditing;
@property(nonatomic) __weak id <AutoTransferRuleCellButtonClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTitleViewClickAction:(SEL)arg1 tag:(long long)arg2;
- (void)editButtonClick;
- (void)deleteButtonClick;
- (void)setStateTextColor:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setStateText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIconUrl:(id)arg1 defaultImageString:(id)arg2;
- (void)initEditView;
- (void)initDetailsView;
- (void)initTitleView;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

