//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SocialCommonCollectionCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface SocialRecommendCollectionCell : SocialCommonCollectionCell
{
    _Bool _showLoadMore;
    _Bool _enableMobile;
    _Bool _touchDown;
    _Bool _didLoadSmaillImage;
    NSString *_moreText;
    NSString *_errorMsg;
    UIImageView *_validateImage;
    UILabel *_accLabel;
    UIImageView *_accImageView;
    UIView *_mobilePhoneBgView;
    UILabel *_mobileLabel;
}

+ (id)getImgSyncCacheAndExsitFor:(id)arg1 size:(struct CGSize)arg2 originSize:(struct CGSize)arg3 functionName:(const char *)arg4;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UIView *mobilePhoneBgView; // @synthesize mobilePhoneBgView=_mobilePhoneBgView;
@property(retain, nonatomic) UIImageView *accImageView; // @synthesize accImageView=_accImageView;
@property(nonatomic) _Bool didLoadSmaillImage; // @synthesize didLoadSmaillImage=_didLoadSmaillImage;
@property(nonatomic) _Bool touchDown; // @synthesize touchDown=_touchDown;
@property(retain, nonatomic) UILabel *accLabel; // @synthesize accLabel=_accLabel;
@property(retain, nonatomic) UIImageView *validateImage; // @synthesize validateImage=_validateImage;
@property(nonatomic) _Bool enableMobile; // @synthesize enableMobile=_enableMobile;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(nonatomic) _Bool showLoadMore; // @synthesize showLoadMore=_showLoadMore;
- (void).cxx_destruct;
- (void)setupMobileView;
- (void)refreshMobileBar;
- (double)refreshCellButtonType:(int)arg1 locY:(double)arg2;
- (double)getRightCap;
- (void)adjustValidateFrame;
- (double)adjustAccBtnFrame:(double)arg1;
- (double)refreshValidateIcon:(double)arg1;
- (double)refreshDetail:(double)arg1;
- (double)refreshTitleLabel:(double)arg1;
- (double)refreshIconImage:(double)arg1;
- (double)refreshCellWithItem:(id)arg1;
- (void)setupAccBtn;
- (void)setupUI;

@end

