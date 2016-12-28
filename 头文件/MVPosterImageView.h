//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, NSURL, UILabel, UIView;

@interface MVPosterImageView : UIImageView
{
    UILabel *_placeholderLabel;
    _Bool _isShowPlayButton;
    _Bool _shouldUseBigPlay;
    NSURL *_imageUrl;
    NSString *_mark;
    CDUnknownBlockType _touchedBlock;
    UIView *_markBgView;
    UILabel *_markLabel;
    UIImageView *_playImageView;
}

+ (id)placeholderImage;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIView *markBgView; // @synthesize markBgView=_markBgView;
@property(nonatomic) _Bool shouldUseBigPlay; // @synthesize shouldUseBigPlay=_shouldUseBigPlay;
@property(nonatomic) _Bool isShowPlayButton; // @synthesize isShowPlayButton=_isShowPlayButton;
@property(copy, nonatomic) CDUnknownBlockType touchedBlock; // @synthesize touchedBlock=_touchedBlock;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)_initPlayImageIfNeeded;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_commonSetup;
- (void)setIconSize:(double)arg1;
- (id)placeholderLabel;

@end

