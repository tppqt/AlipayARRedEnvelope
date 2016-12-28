//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface SecurityBaseView : UIView
{
    _Bool _hasRisk;
    NSString *_title;
    UILabel *_titleLabel;
    NSString *_detail;
    UILabel *_detailLabel;
    UIImage *_logoImage;
    UIImageView *_logoImageView;
    NSMutableArray *_colorArray;
    CDUnknownBlockType _callBackblock;
    long long _viewType;
    NSString *_resultType;
}

@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(nonatomic) _Bool hasRisk; // @synthesize hasRisk=_hasRisk;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType callBackblock; // @synthesize callBackblock=_callBackblock;
@property(retain, nonatomic) NSMutableArray *colorArray; // @synthesize colorArray=_colorArray;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)layoutSubview;
- (void)initCommonView;
- (void)getColorArray;
- (id)initWithTilte:(id)arg1 detail:(id)arg2 logoImage:(id)arg3 paramDic:(id)arg4;

@end

