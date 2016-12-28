//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class APButton, NSString, SUImageView, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface SocialCommonCollectionCell : UICollectionViewCell
{
    _Bool _enableDismiss;
    _Bool _hideDetail;
    _Bool _enableIconCorner;
    _Bool _didLoadImage;
    int _selectType;
    int _buttonType;
    id <APCommonItemProtocol> _item;
    id <APCommonSelectTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIImageView *_rightIcon;
    UILabel *_detailLabel;
    SUImageView *_iconImage;
    UIImageView *_coverView;
    NSString *_buttonTitle;
    UIImage *_buttonImage;
    APButton *_accButton;
    APButton *_dismissBtn;
    UIImageView *_accButtonBgView;
    UIImage *_defaultIconImage;
    UIView *_bottomSepLine;
    NSString *_currentHeadUrl;
    double _totalDate;
    double _date;
    NSString *_loadedImageString;
    NSString *_moreOptionsButtonTitle;
    UITapGestureRecognizer *_panRecognizer;
    UIImageView *_rightImage;
}

+ (double)widthOfCell;
+ (double)heightOfCell;
+ (id)cellIdentifier;
@property(retain, nonatomic) UIImageView *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) UITapGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) NSString *moreOptionsButtonTitle; // @synthesize moreOptionsButtonTitle=_moreOptionsButtonTitle;
@property(retain, nonatomic) NSString *loadedImageString; // @synthesize loadedImageString=_loadedImageString;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) double totalDate; // @synthesize totalDate=_totalDate;
@property(retain, nonatomic) NSString *currentHeadUrl; // @synthesize currentHeadUrl=_currentHeadUrl;
@property(nonatomic) _Bool didLoadImage; // @synthesize didLoadImage=_didLoadImage;
@property(retain, nonatomic) UIView *bottomSepLine; // @synthesize bottomSepLine=_bottomSepLine;
@property(nonatomic) _Bool enableIconCorner; // @synthesize enableIconCorner=_enableIconCorner;
@property(retain, nonatomic) UIImage *defaultIconImage; // @synthesize defaultIconImage=_defaultIconImage;
@property(nonatomic) _Bool hideDetail; // @synthesize hideDetail=_hideDetail;
@property(retain, nonatomic) UIImageView *accButtonBgView; // @synthesize accButtonBgView=_accButtonBgView;
@property(nonatomic) _Bool enableDismiss; // @synthesize enableDismiss=_enableDismiss;
@property(retain, nonatomic) APButton *dismissBtn; // @synthesize dismissBtn=_dismissBtn;
@property(retain, nonatomic) APButton *accButton; // @synthesize accButton=_accButton;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) SUImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <APCommonSelectTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <APCommonItemProtocol> item; // @synthesize item=_item;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
- (void).cxx_destruct;
- (id)getLocalImageWithName:(id)arg1 stretchLeftCap:(double)arg2 topHeight:(double)arg3;
- (id)getLocalImageWithName:(id)arg1;
- (id)cachedImageForUrl:(id)arg1;
- (void)didCLickIcon;
- (void)didClickDismissBtn;
- (void)didClickBtn;
- (double)titleTextValidWidth:(double)arg1;
- (void)refreshDismissBtn;
- (double)refreshCellButtonType:(int)arg1 locY:(double)arg2;
- (double)refreshDetail:(double)arg1;
- (double)refreshTitleLabel:(double)arg1;
- (double)refreshIconImage:(double)arg1;
- (double)refreshCellWithItem:(id)arg1;
- (void)setupAccBtn;
- (void)setupDismissBtn;
- (void)setupIconImage;
- (void)setupDetailLabel;
- (void)setupTitleLabel;
- (void)setupUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

