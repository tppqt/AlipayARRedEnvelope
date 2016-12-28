//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSURL, UIButton, UIImage, UIImageView, aluLabel, aluTextField;

@interface aluRDSBox : UIView
{
    double _textFieldLeftX;
    UIImage *_codeImage;
    NSURL *_codeImageUrl;
    NSString *_checkCodeId;
    aluLabel *_label;
    aluTextField *_textField;
    UIImageView *_codeImageView;
    UIButton *_refreshBtn;
    UIImageView *_refreshImageView;
    id <aluRDSBoxDelegate> _delegate;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_separatorLine;
    id <IHttpGetRequest> _imageLoadRequest;
}

@property(retain, nonatomic) id <IHttpGetRequest> imageLoadRequest; // @synthesize imageLoadRequest=_imageLoadRequest;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak id <aluRDSBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *refreshImageView; // @synthesize refreshImageView=_refreshImageView;
@property(nonatomic) __weak UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(nonatomic) __weak UIImageView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(nonatomic) __weak aluTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak aluLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
@property(retain, nonatomic) NSURL *codeImageUrl; // @synthesize codeImageUrl=_codeImageUrl;
@property(retain, nonatomic) UIImage *codeImage; // @synthesize codeImage=_codeImage;
- (void).cxx_destruct;
- (void)textFieldEndEdit:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBegin:(id)arg1;
- (void)doStopLoadingIndicator;
- (void)doStartLoadingIndicator;
- (void)onRefresh;
- (id)getRDSCode;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

