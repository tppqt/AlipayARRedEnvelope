//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface AREPOICell : UITableViewCell
{
    _Bool _isLastRecord;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) _Bool isLastRecord; // @synthesize isLastRecord=_isLastRecord;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

