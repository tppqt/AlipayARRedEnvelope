//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoPlayerInternal.h"

#import "APResourceLoaderDelegate.h"

@class APResourceLoader, NSString;

@interface MediaPlayerInternal : VideoPlayerInternal <APResourceLoaderDelegate>
{
    _Bool _needCache;
    _Bool _isCloudId;
    _Bool _shouldPlayWhenReady;
    _Bool _networkResource;
    id <APMediaPlayerDelegate> _delegate;
    NSString *_cloudID;
    APResourceLoader *_resourceLoader;
}

@property(nonatomic) _Bool networkResource; // @synthesize networkResource=_networkResource;
@property(nonatomic) _Bool shouldPlayWhenReady; // @synthesize shouldPlayWhenReady=_shouldPlayWhenReady;
@property(retain, nonatomic) APResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property(nonatomic) _Bool isCloudId; // @synthesize isCloudId=_isCloudId;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(nonatomic) __weak id <APMediaPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loader:(id)arg1 cacheProgress:(double)arg2;
- (void)loader:(id)arg1 failLoadingWithError:(id)arg2;
- (void)notifyDelegateFailedWithError:(id)arg1;
- (void)notifyDelegateCurrentLoadedTime:(double)arg1;
- (void)notifyDelegateDidReadyToPlay;
- (void)processLoadedTimeRanges;
- (void)processPlayItem:(id)arg1 playBackKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserversForCurrentItem;
- (void)addObserversForCurrentItem;
- (void)setCurrentItem:(id)arg1;
- (_Bool)replaceCurrentItemWithIdentifier:(id)arg1;
- (id)getVideoItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (_Bool)isReadyForDisplay;
- (double)getDurationWatched;
- (double)getTotalDuration;
- (void)seekEnd;
- (void)loadThumbnail;
- (void)showPlayer;
- (void)pause;
- (void)stop;
- (void)play;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

