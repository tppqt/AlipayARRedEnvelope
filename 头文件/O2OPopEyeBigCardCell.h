//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OPopEyeBaseCardCell.h"

@interface O2OPopEyeBigCardCell : O2OPopEyeBaseCardCell
{
    struct CGSize _size;
}

+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)stopInfoCardAnimation;
- (void)stopImageCardAnimation;
- (void)startInfoCardAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startImageCardAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopTransitionShow;
- (void)startTransitionShow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

