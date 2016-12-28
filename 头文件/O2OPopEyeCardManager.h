//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer, O2OPopEyeBaseCardCell, O2OPopEyeBaseCardItem, UICollectionView, UIView;

@interface O2OPopEyeCardManager : NSObject
{
    _Bool _animationEnabled;
    double _animationInterval;
    double _animationDuration;
    UICollectionView *_collectionView;
    NSMutableArray *_visiableCardItems;
    NSMutableArray *_visiableNormalCardItems;
    NSMutableArray *_visiableLightShowCardItems;
    unsigned long long _unableRollImageCardCount;
    NSTimer *_cardTimer;
    double _lastRollCardTime;
    O2OPopEyeBaseCardCell *_rollingCardCell;
    O2OPopEyeBaseCardItem *_rollingCardItem;
    UIView *_currentRollingView;
    UIView *_nextRollingView;
    O2OPopEyeBaseCardCell *_lightShowingCardCell;
    O2OPopEyeBaseCardItem *_lightShowingCardItem;
}

@property(nonatomic) __weak O2OPopEyeBaseCardItem *lightShowingCardItem; // @synthesize lightShowingCardItem=_lightShowingCardItem;
@property(nonatomic) __weak O2OPopEyeBaseCardCell *lightShowingCardCell; // @synthesize lightShowingCardCell=_lightShowingCardCell;
@property(nonatomic) __weak UIView *nextRollingView; // @synthesize nextRollingView=_nextRollingView;
@property(nonatomic) __weak UIView *currentRollingView; // @synthesize currentRollingView=_currentRollingView;
@property(nonatomic) __weak O2OPopEyeBaseCardItem *rollingCardItem; // @synthesize rollingCardItem=_rollingCardItem;
@property(nonatomic) __weak O2OPopEyeBaseCardCell *rollingCardCell; // @synthesize rollingCardCell=_rollingCardCell;
@property(nonatomic) double lastRollCardTime; // @synthesize lastRollCardTime=_lastRollCardTime;
@property(retain, nonatomic) NSTimer *cardTimer; // @synthesize cardTimer=_cardTimer;
@property(nonatomic) unsigned long long unableRollImageCardCount; // @synthesize unableRollImageCardCount=_unableRollImageCardCount;
@property(retain, nonatomic) NSMutableArray *visiableLightShowCardItems; // @synthesize visiableLightShowCardItems=_visiableLightShowCardItems;
@property(retain, nonatomic) NSMutableArray *visiableNormalCardItems; // @synthesize visiableNormalCardItems=_visiableNormalCardItems;
@property(retain, nonatomic) NSMutableArray *visiableCardItems; // @synthesize visiableCardItems=_visiableCardItems;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool animationEnabled; // @synthesize animationEnabled=_animationEnabled;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)playLightShow:(id)arg1;
- (void)startLightShow:(id)arg1;
- (void)refreshLightShow;
- (void)checkLigthShowCard;
- (void)spliteVisiableCardItems;
- (void)updateVisiableCardItems:(id)arg1;
- (void)stopAnimation;
- (void)stop;
- (void)start;
- (id)randomItemForItems:(id)arg1;
- (id)randomRollCardItem;
- (long long)nextShowingIndex:(id)arg1 cardCell:(id)arg2;
- (void)rollCard;
- (id)initWithView:(id)arg1;

@end

