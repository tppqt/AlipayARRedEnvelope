//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEPopupView.h"

@class NSMutableArray, NYBulgeButton, UIButton, UIImage, UIView;

@interface NYStatusPopupView : BEEPopupView
{
    NSMutableArray *_nodeArray;
    long long _fixedIndex;
    NSMutableArray *_viewArray;
    UIImage *_backgroundViewImage;
    UIView *_backgroundView;
    double contentWidth;
    double contentHeight;
    UIButton *_closeButton;
    NYBulgeButton *_topCloseButton;
    CDUnknownBlockType _nyCancelClick;
    double _centerYOffSet;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double centerYOffSet; // @synthesize centerYOffSet=_centerYOffSet;
@property(copy, nonatomic) CDUnknownBlockType nyCancelClick; // @synthesize nyCancelClick=_nyCancelClick;
@property(retain, nonatomic) NYBulgeButton *topCloseButton; // @synthesize topCloseButton=_topCloseButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContainerViewSize:(struct CGSize)arg1 centerYOffset:(double)arg2;
@property(nonatomic) struct CGSize containerViewSize;
- (id)createImageViewByNode:(id)arg1;
- (id)createButtonByNode:(id)arg1;
- (id)createLabelByNode:(id)arg1;
- (id)createViewByNode:(id)arg1;
- (void)addView:(id)arg1 retain:(_Bool)arg2;
- (void)renderViewWithNode:(id)arg1 view:(id)arg2 preNode:(id)arg3 preView:(id)arg4 up:(_Bool)arg5;
- (void)show;
- (void)addViewNode:(id)arg1;
- (void)popViewClose;
- (void)setupCustomConstrains;
- (void)setupCustomView;
- (void)doNewAppWillStart:(id)arg1;
- (void)addAppNotification;
- (id)init;

@end

