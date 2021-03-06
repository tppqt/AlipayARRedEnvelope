//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FullScreenView, NSString, UIButton, UIImageView;

@interface CodeImageView : UIView
{
    NSString *codeString;
    long long codeType;
    UIImageView *codeImageView;
    UIButton *button;
    FullScreenView *screenView;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FullScreenView *screenView; // @synthesize screenView;
@property(retain, nonatomic) UIButton *button; // @synthesize button;
@property(retain, nonatomic) UIImageView *codeImageView; // @synthesize codeImageView;
@property(nonatomic) long long codeType; // @synthesize codeType;
@property(retain, nonatomic) NSString *codeString; // @synthesize codeString;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeFullCode;
- (void)updateCode:(_Bool)arg1;
- (void)updateWithCode:(_Bool)arg1 code:(id)arg2;
- (id)initWithCoderType:(long long)arg1 frame:(struct CGRect)arg2;
- (void)dealloc;

@end

