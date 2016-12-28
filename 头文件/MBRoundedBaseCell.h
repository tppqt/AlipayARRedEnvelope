//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

@class APRichTextLabel, MBMessageInfoItem, UIButton, UIImageView, UILabel, UIView;

@interface MBRoundedBaseCell : APTableViewCell
{
    UIButton *_bottomButton;
    UILabel *_bottomButtonLabel;
    UIView *_bottomSeperateLine;
    UIImageView *_arrowImageView;
    APRichTextLabel *_titleLabel;
    UILabel *_dateLabel;
    APRichTextLabel *_contentLabel;
    UIView *_containerView;
    MBMessageInfoItem *_messageItem;
    id <MBRoundedCellDelegate> _cellDelegate;
    double _blueHeaderHeight;
    unsigned long long _headerType;
}

+ (id)cellIdentifierForMessage:(id)arg1;
+ (double)cellHeightForMessage:(id)arg1;
@property(nonatomic) unsigned long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) double blueHeaderHeight; // @synthesize blueHeaderHeight=_blueHeaderHeight;
@property(nonatomic) __weak id <MBRoundedCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) MBMessageInfoItem *messageItem; // @synthesize messageItem=_messageItem;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)setupBottomButton;
- (void)setBlueHeaderHeight:(double)arg1 andType:(unsigned long long)arg2;
- (void)delete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

