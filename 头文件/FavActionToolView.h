//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface FavActionToolView : UIView
{
    _Bool _disableActions;
    id <FavActionToolViewDelegate> _delegate;
    UIButton *_shareBtn;
    UIButton *_deleteBtn;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(nonatomic) _Bool disableActions; // @synthesize disableActions=_disableActions;
@property(nonatomic) __weak id <FavActionToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionToolView:(id)arg1 didSelectAction:(int)arg2;
- (void)clickActionButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

