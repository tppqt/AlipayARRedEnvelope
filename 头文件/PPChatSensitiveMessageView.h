//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatTextMessageView.h"

@class UIImageView, UILabel;

@interface PPChatSensitiveMessageView : PPChatTextMessageView
{
    UIImageView *_bgSensitiveView;
    UILabel *_tipMessageLabel;
}

+ (double)heightForData:(id)arg1 ofMessage:(id)arg2;
@property(retain, nonatomic) UILabel *tipMessageLabel; // @synthesize tipMessageLabel=_tipMessageLabel;
@property(retain, nonatomic) UIImageView *bgSensitiveView; // @synthesize bgSensitiveView=_bgSensitiveView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (void)setSensitiveViewImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

