//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEPopupView.h"

@class NYWarmPopupModel, UIButton;

@interface NYWarmPopupView : BEEPopupView
{
    NYWarmPopupModel *_data;
    UIButton *_confirmBtn;
    UIButton *_closeButton;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) NYWarmPopupModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)attachedView;
- (void)onCancel;
- (void)onConfirm;
- (void)buildCustomConstrains;
- (void)setupCustomViews;
- (void)dimmingBackgroundTapped:(id)arg1;
- (void)setupContent;
- (void)hide;
- (void)show;
- (void)loadData:(id)arg1;
- (CDUnknownBlockType)warmHideAnimation;
- (CDUnknownBlockType)warmShowAnimation;
- (id)init;

@end

