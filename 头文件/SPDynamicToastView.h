//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface SPDynamicToastView : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_superView;
}

+ (id)showToastWithTitle:(id)arg1 inView:(id)arg2;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)buildView;
- (void)hide;
- (void)showWithTitle:(id)arg1;
- (id)init;

@end

