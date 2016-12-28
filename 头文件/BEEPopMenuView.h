//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APWindow.h"

@class BEEMultiStyleCellView, NSArray, UIImageView, UIView;

@interface BEEPopMenuView : APWindow
{
    NSArray *_data;
    UIView *_maskView;
    APWindow *_oldKeyWindow;
    struct CGPoint _startLocation;
    UIImageView *_archpointView;
    UIView *_menuView;
    struct CGRect _realFrame;
    _Bool _isAnimation;
    _Bool _isUpward;
    BEEMultiStyleCellView *_cellView;
}

@property(retain, nonatomic) BEEMultiStyleCellView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hidePopMenuWithAnimation:(_Bool)arg1;
- (void)showPopMenu:(id)arg1 animation:(_Bool)arg2;
- (void)hidePopMenu;
- (void)showPopMenu:(id)arg1;
- (void)prepareForPopMenuView:(id)arg1;
- (struct CGRect)checkFrameValid:(struct CGRect)arg1 isUpward:(_Bool)arg2;
- (void)createSubViewWithLocation:(struct CGPoint)arg1 offset:(double)arg2;
- (void)loginDidFinished:(id)arg1;
- (id)initWithData:(id)arg1 location:(struct CGPoint)arg2 offset:(double)arg3;

@end

