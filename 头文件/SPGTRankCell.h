//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APContactInfo, LOTPAYLotPayRank, NSString, UIImageView, UILabel, UIView;

@interface SPGTRankCell : UITableViewCell
{
    LOTPAYLotPayRank *_rankInfo;
    UIImageView *_headImgView;
    UILabel *_accountLabel;
    UILabel *_totalLabel;
    UILabel *_inComeLabel;
    UILabel *_outLabel;
    UIView *_topLine;
    UIView *_btmLine;
    APContactInfo *_curContact;
    long long _position;
    NSString *_rank;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) APContactInfo *curContact; // @synthesize curContact=_curContact;
@property(retain, nonatomic) UIView *btmLine; // @synthesize btmLine=_btmLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *outLabel; // @synthesize outLabel=_outLabel;
@property(retain, nonatomic) UILabel *inComeLabel; // @synthesize inComeLabel=_inComeLabel;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) LOTPAYLotPayRank *rankInfo; // @synthesize rankInfo=_rankInfo;
- (void).cxx_destruct;
- (_Bool)getIsMe;
- (id)displayName;
- (id)contactInfo;
- (id)getBtmLine;
- (id)getTopLine;
- (void)buildSepratorLine;
- (void)buildCell;
- (void)reloadData:(id)arg1 position:(long long)arg2 rank:(id)arg3;
- (id)initWithIdentifer:(id)arg1;

@end

