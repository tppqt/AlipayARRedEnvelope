//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class NSArray, NSMutableArray, UILabel, UIView;

@interface MVScheduleBankActivityRow : MVTableRow
{
    UILabel *titleLabel_;
    UILabel *subtitleLabel_;
    UIView *containerView_;
    NSMutableArray *logoViewArray_;
    NSArray *activityArray_;
}

- (void).cxx_destruct;
- (void)updateWithActivityArray:(id)arg1;
- (void)updateUI;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight;

@end

