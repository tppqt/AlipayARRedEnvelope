//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APNavItemView.h"

@interface APScanNavItemView : APNavItemView
{
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)onClicked;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 title:(id)arg3 onclick:(CDUnknownBlockType)arg4;

@end

