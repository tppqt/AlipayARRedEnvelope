//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GO2OMenuPopoverViewDelegate.h"
#import "GO2OMenuTopViewDelegate.h"

@class GO2OMenuPopoverView, GO2OMenuTopView, NSArray, NSString;

@interface GO2OMenuView : UIView <GO2OMenuPopoverViewDelegate, GO2OMenuTopViewDelegate>
{
    id <GO2OMenuViewDelegate> _delegate;
    double _originHeight;
    GO2OMenuTopView *_topView;
    GO2OMenuPopoverView *_popoverView;
    NSArray *_menuGroups;
}

@property(retain, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(retain, nonatomic) GO2OMenuPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) GO2OMenuTopView *topView; // @synthesize topView=_topView;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) __weak id <GO2OMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)didSelected:(id)arg1;
- (void)didSelectedAtIndex:(unsigned long long)arg1 show:(_Bool)arg2;
- (void)reloadTopView;
- (void)reloadData:(id)arg1;
- (void)resize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

