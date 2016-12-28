//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface aluButton : UIButton
{
    id <aluButtonDelegate> _delegate;
}

+ (id)secondButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)primaryButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)loginButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (void)applyTheme;
@property(nonatomic) __weak id <aluButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTitleColorWithNormalColor:(id)arg1 highlightColor:(id)arg2 disableColor:(id)arg3;
- (void)setBackgroundImageWithNormalColor:(id)arg1 highlightColor:(id)arg2 disableColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)theme_setTitleColorWithNormalColor:(id)arg1 highlightColor:(id)arg2 disableColor:(id)arg3;
- (void)theme_setBackgroundImageWithNormalColor:(id)arg1 highlightColor:(id)arg2 disableColor:(id)arg3;

@end

