//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIImageView, UILabel;

@interface APToastView : UIView
{
    int _iconType;
    UIView *_iconView;
    UILabel *_textLabel;
    NSString *_progressPrefixText;
    int _suppressCount;
    double _second;
    double _xOffset;
    double _yOffset;
    NSTimer *_timer;
    UIView *_backgoundView;
    CDUnknownBlockType _completion;
    id <APToastDelegate> _toastDelegate;
    UIImageView *_backgroundImageView;
}

+ (id)presentModelToastWithin:(id)arg1 text:(id)arg2;
+ (id)presentToastWithText:(id)arg1;
+ (id)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3;
+ (id)presentToastWithin:(id)arg1 text:(id)arg2;
+ (id)presentModalToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 delay:(double)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)presentModalToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 delay:(double)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4;
+ (id)presentModalTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 delay:(double)arg5 logTag:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)presentModalTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 logTag:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)presentTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 delay:(double)arg5 logTag:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)presentTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 logTag:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 logTag:(id)arg4;
+ (id)presentTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 logTag:(id)arg4;
+ (id)presentModelTagToastWithin:(id)arg1 text:(id)arg2 logTag:(id)arg3;
+ (id)presentTagToastWithText:(id)arg1 logTag:(id)arg2;
+ (id)presentTagToastWithin:(id)arg1 text:(id)arg2 logTag:(id)arg3;
+ (id)presentTagToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 logTag:(id)arg5;
+ (id)callStackString;
+ (void)setLogTag:(id)arg1;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) int suppressCount; // @synthesize suppressCount=_suppressCount;
@property(retain, nonatomic) id <APToastDelegate> toastDelegate; // @synthesize toastDelegate=_toastDelegate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIView *backgoundView; // @synthesize backgoundView=_backgoundView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) double second; // @synthesize second=_second;
- (void).cxx_destruct;
- (void)setProgressText:(float)arg1;
- (void)setProgressPrefix:(id)arg1;
- (void)setSocialTipToastStyle;
- (void)dismissToast;
- (void)updateAllToastDisplay;
- (void)suppressRelatedToasts:(_Bool)arg1;
- (void)popFromStack;
- (void)pushToStack;
- (_Bool)relatedToToast:(id)arg1;
- (void)showDelayedToast;
- (void)showToast;
- (void)addToastIconView;
- (id)initWithText:(id)arg1 toastType:(int)arg2;

@end

