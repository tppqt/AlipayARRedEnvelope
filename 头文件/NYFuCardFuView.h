//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NYFuCard, NYFuCardType, NYFuNameView, UIImageView;

@interface NYFuCardFuView : UIView
{
    UIImageView *_imageView;
    NYFuNameView *_nameView;
    UIView *_contentView;
    UIImageView *_cloudImageView;
    _Bool _emptyShow;
    long long _displayStyle;
    double _imageExpandHeight;
    NYFuCard *_card;
    NSString *_fuImageId;
    NYFuCardType *_cardType;
}

@property(nonatomic) _Bool emptyShow; // @synthesize emptyShow=_emptyShow;
@property(retain, nonatomic) NYFuCardType *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *fuImageId; // @synthesize fuImageId=_fuImageId;
@property(retain, nonatomic) NYFuCard *card; // @synthesize card=_card;
@property(nonatomic) double imageExpandHeight; // @synthesize imageExpandHeight=_imageExpandHeight;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCardType:(id)arg1 writeFuImageId:(id)arg2;
- (void)setCardTypeForShowEmpty:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

