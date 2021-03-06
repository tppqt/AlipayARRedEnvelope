//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class APVisualStyle, NSString, UIColor, UIImage;

@interface APBarButtonItem : UIBarButtonItem
{
    id _target;
    SEL _action;
    APVisualStyle *_visualStyle;
    NSString *_backButtonTitle;
    UIImage *_backButtonImage;
    UIColor *_titleColor;
}

+ (id)backBarButtonItemWithTitle:(id)arg1 maxWordsCount:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)backBarButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)flexibleSpaceItem;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIImage *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) APVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)initVisualStyle;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

@end

