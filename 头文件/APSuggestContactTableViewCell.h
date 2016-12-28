//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface APSuggestContactTableViewCell : UITableViewCell
{
    NSString *_groupKey;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (double)cellHeight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutNoSubTitle;
- (void)layoutWithSubtitle;
- (void)setModel:(id)arg1 inGroup:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

