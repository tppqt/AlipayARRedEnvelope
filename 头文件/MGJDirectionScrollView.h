//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface MGJDirectionScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <UIScrollViewDelegate> _mgjScrollViewDelegate;
    double _lastOffsetY;
    double _currentOffsetY;
    id _directionTarget;
    SEL _directionUpSelector;
    SEL _directionDownSelector;
    double _systemVersion;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)doDirectionSelector;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

