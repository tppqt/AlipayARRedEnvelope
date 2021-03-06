//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BEEPieRenderView;

@protocol BEEPieRenderViewDelegate <NSObject>

@optional
- (void)renderAnimateFinish:(BEEPieRenderView *)arg1;
- (void)renderAnimateBegin:(BEEPieRenderView *)arg1;
- (void)animateFinish:(BEEPieRenderView *)arg1;
- (void)pieChart:(BEEPieRenderView *)arg1 didDeselectSliceAtIndex:(unsigned long long)arg2;
- (void)pieChart:(BEEPieRenderView *)arg1 willDeselectSliceAtIndex:(unsigned long long)arg2;
- (void)pieChart:(BEEPieRenderView *)arg1 didSelectSliceAtIndex:(unsigned long long)arg2;
- (void)pieChart:(BEEPieRenderView *)arg1 willSelectSliceAtIndex:(unsigned long long)arg2;
@end

