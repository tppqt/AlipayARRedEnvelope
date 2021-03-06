//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUDialogButton, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UITextField;

@interface AUDialogBuilder : NSObject
{
    _Bool _grayMessage;
    _Bool _emptyContent;
    NSString *_title;
    NSString *_message;
    UIImage *_image;
    NSString *_linkText;
    NSString *_placeholder;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UITextField *_textField;
    AUDialogButton *_closeButton;
    AUDialogButton *_linkButton;
    long long _builderType;
    NSMutableArray *_buttons;
    struct CGSize _imageSize;
}

@property(nonatomic) _Bool emptyContent; // @synthesize emptyContent=_emptyContent;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long builderType; // @synthesize builderType=_builderType;
@property(retain, nonatomic) AUDialogButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) AUDialogButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool grayMessage; // @synthesize grayMessage=_grayMessage;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)lineView;
- (_Bool)validateString:(id)arg1;
- (void)buildAlertButtonView:(id)arg1;
- (void)buildAlertContentView:(id)arg1;
- (void)addButton:(id)arg1;
- (id)init;

@end

