//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel, aluInputBox;

@interface aluRegisterBox : UIView
{
    NSString *_country;
    aluInputBox *_phoneNumInputBox;
    UIImageView *_accessoryView;
    UIButton *_containerView;
    id <aluRegisterBoxDelegate> _delegate;
    UILabel *_countryLabel;
}

@property(nonatomic) __weak UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(nonatomic) __weak id <aluRegisterBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak aluInputBox *phoneNumInputBox; // @synthesize phoneNumInputBox=_phoneNumInputBox;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (void)onClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

