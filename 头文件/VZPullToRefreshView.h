//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "VZPullToRefreshControlInterface.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface VZPullToRefreshView : UIView <VZPullToRefreshControlInterface>
{
    long long _state;
    UIActivityIndicatorView *_indicator;
    UILabel *_textLabel;
    _Bool _isRefreshing;
    float _progress;
    CDUnknownBlockType _pullRefreshDidTrigger;
}

@property(copy, nonatomic) CDUnknownBlockType pullRefreshDidTrigger; // @synthesize pullRefreshDidTrigger=_pullRefreshDidTrigger;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)scrollviewDidEndDragging:(id)arg1;
- (void)scrollviewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

