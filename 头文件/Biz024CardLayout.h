//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Biz024CardLayout : NSObject
{
    long long _direction;
    NSString *_card_backgroundColor;
    NSString *_card_title_backgroundColor;
    NSString *_card_title_fontSize;
    NSString *_card_title_fontColor;
    NSString *_card_title_numberofLine;
    NSString *_card_subtitle_fontSize;
    NSString *_card_subtitle_fontColor;
    NSString *_card_subtitle_backgroundColor;
    NSString *_card_subtitle_numberofLine;
    NSString *_card_x_hidden;
    NSString *_card_title_hidden;
    NSString *_card_action_hidden;
    NSString *_card_subtitle_hidden;
    unsigned long long _actionBtnFrameStatus;
    struct CGSize _card_itemSize;
    struct CGRect _cardFrame;
    struct CGRect _card_mainImgFrame;
    struct CGRect _card_titleFrame;
    struct CGRect _card_subtitleFrame;
    struct CGRect _card_xFrame;
    struct CGRect _card_actionBtnFrame;
}

@property(nonatomic) unsigned long long actionBtnFrameStatus; // @synthesize actionBtnFrameStatus=_actionBtnFrameStatus;
@property(retain, nonatomic) NSString *card_subtitle_hidden; // @synthesize card_subtitle_hidden=_card_subtitle_hidden;
@property(retain, nonatomic) NSString *card_action_hidden; // @synthesize card_action_hidden=_card_action_hidden;
@property(retain, nonatomic) NSString *card_title_hidden; // @synthesize card_title_hidden=_card_title_hidden;
@property(retain, nonatomic) NSString *card_x_hidden; // @synthesize card_x_hidden=_card_x_hidden;
@property(nonatomic) struct CGSize card_itemSize; // @synthesize card_itemSize=_card_itemSize;
@property(retain, nonatomic) NSString *card_subtitle_numberofLine; // @synthesize card_subtitle_numberofLine=_card_subtitle_numberofLine;
@property(retain, nonatomic) NSString *card_subtitle_backgroundColor; // @synthesize card_subtitle_backgroundColor=_card_subtitle_backgroundColor;
@property(retain, nonatomic) NSString *card_subtitle_fontColor; // @synthesize card_subtitle_fontColor=_card_subtitle_fontColor;
@property(retain, nonatomic) NSString *card_subtitle_fontSize; // @synthesize card_subtitle_fontSize=_card_subtitle_fontSize;
@property(retain, nonatomic) NSString *card_title_numberofLine; // @synthesize card_title_numberofLine=_card_title_numberofLine;
@property(retain, nonatomic) NSString *card_title_fontColor; // @synthesize card_title_fontColor=_card_title_fontColor;
@property(retain, nonatomic) NSString *card_title_fontSize; // @synthesize card_title_fontSize=_card_title_fontSize;
@property(retain, nonatomic) NSString *card_title_backgroundColor; // @synthesize card_title_backgroundColor=_card_title_backgroundColor;
@property(retain, nonatomic) NSString *card_backgroundColor; // @synthesize card_backgroundColor=_card_backgroundColor;
@property(nonatomic) struct CGRect card_actionBtnFrame; // @synthesize card_actionBtnFrame=_card_actionBtnFrame;
@property(nonatomic) struct CGRect card_xFrame; // @synthesize card_xFrame=_card_xFrame;
@property(nonatomic) struct CGRect card_subtitleFrame; // @synthesize card_subtitleFrame=_card_subtitleFrame;
@property(nonatomic) struct CGRect card_titleFrame; // @synthesize card_titleFrame=_card_titleFrame;
@property(nonatomic) struct CGRect card_mainImgFrame; // @synthesize card_mainImgFrame=_card_mainImgFrame;
@property(nonatomic) struct CGRect cardFrame; // @synthesize cardFrame=_cardFrame;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)init:(id)arg1;

@end

