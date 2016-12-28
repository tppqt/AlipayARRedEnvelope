//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AUDialogBuilder;

@interface AUDialogBaseView : UIView
{
    AUDialogBuilder *_dialogBuilder;
    long long _cancelIndex;
    _Bool _isDisplay;
    _Bool _grayMessage;
    _Bool _useUnifyShowAnimation;
    id <AUDialogDelegate> _delegate;
    double _animationDuration;
    UIView *_alertContainer;
    UIView *_contentView;
    UIView *_buttonView;
    long long _messageAlignment;
}

@property(nonatomic) long long messageAlignment; // @synthesize messageAlignment=_messageAlignment;
@property(nonatomic) _Bool useUnifyShowAnimation; // @synthesize useUnifyShowAnimation=_useUnifyShowAnimation;
@property(nonatomic) _Bool grayMessage; // @synthesize grayMessage=_grayMessage;
@property(readonly, nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *alertContainer; // @synthesize alertContainer=_alertContainer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak id <AUDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onButtonClicked:(id)arg1;
- (id)addActionButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)addButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)forceHidden;
- (void)dismiss;
- (void)show;
- (void)setupSubviews;
- (void)initialConfiguration;
- (id)init;

@end

