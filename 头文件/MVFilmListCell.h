//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVBaseTableViewCell.h"

@class MVBorderedButton, MVLineView, MVPosterImageView, MVShowVersionLabel, MVTagLabel, NSLayoutConstraint, UILabel;

@interface MVFilmListCell : MVBaseTableViewCell
{
    _Bool _isSpecial;
    MVPosterImageView *_posterImageView;
    UILabel *_filmNameLabel;
    UILabel *_descLabel;
    UILabel *_starringLabel;
    UILabel *_directorLabel;
    NSLayoutConstraint *_onlineLabelLeftConstraint;
    MVBorderedButton *_isWantButton;
    NSLayoutConstraint *_lineHeight;
    MVBorderedButton *_buyButton;
    MVShowVersionLabel *_showVersionLabel;
    MVTagLabel *_activityTagLabel;
    UILabel *_onlineLabel;
    NSLayoutConstraint *_topDirectorConstraint;
    MVLineView *_bottomLineView;
}

@property(nonatomic) _Bool isSpecial; // @synthesize isSpecial=_isSpecial;
@property(nonatomic) __weak MVLineView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak NSLayoutConstraint *topDirectorConstraint; // @synthesize topDirectorConstraint=_topDirectorConstraint;
@property(nonatomic) __weak UILabel *onlineLabel; // @synthesize onlineLabel=_onlineLabel;
@property(nonatomic) __weak MVTagLabel *activityTagLabel; // @synthesize activityTagLabel=_activityTagLabel;
@property(nonatomic) __weak MVShowVersionLabel *showVersionLabel; // @synthesize showVersionLabel=_showVersionLabel;
@property(nonatomic) __weak MVBorderedButton *buyButton; // @synthesize buyButton=_buyButton;
@property(nonatomic) __weak NSLayoutConstraint *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) __weak MVBorderedButton *isWantButton; // @synthesize isWantButton=_isWantButton;
@property(nonatomic) __weak NSLayoutConstraint *onlineLabelLeftConstraint; // @synthesize onlineLabelLeftConstraint=_onlineLabelLeftConstraint;
@property(nonatomic) __weak UILabel *directorLabel; // @synthesize directorLabel=_directorLabel;
@property(nonatomic) __weak UILabel *starringLabel; // @synthesize starringLabel=_starringLabel;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *filmNameLabel; // @synthesize filmNameLabel=_filmNameLabel;
@property(nonatomic) __weak MVPosterImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)awakeFromNib;

@end

