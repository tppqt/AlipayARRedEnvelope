//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVBaseViewController.h"

#import "MVFilmRootDataFetch.h"

@class MVFilmListViewController, MVGetShowsResponse, NSMutableArray, NSString, TBSDKMTOPServer;

@interface MVFilmRootViewController : MVBaseViewController <MVFilmRootDataFetch>
{
    TBSDKMTOPServer *nowPlayingServer;
    TBSDKMTOPServer *upcomingServer;
    NSMutableArray *nowPlayingCallbackArray;
    NSMutableArray *upcomingCallbackArray;
    MVGetShowsResponse *nowPlayingResponse;
    MVGetShowsResponse *upcomingResponse;
    MVFilmListViewController *_filmListViewController;
    id <MVLBService> _locationService;
}

- (void).cxx_destruct;
- (void)viewScroll2Top;
- (id)fetchUpcomingListAtPage:(long long)arg1 pageSize:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchNowPlayingListAtPage:(long long)arg1 pageSize:(long long)arg2 completion:(CDUnknownBlockType)arg3 needRefresh:(_Bool)arg4;
- (void)addObserverForUpcoming:(id)arg1;
- (void)addObserverForNowPlaying:(id)arg1;
- (void)triggerRefreshAll;
- (void)clearResponses;
- (void)changeCity:(id)arg1;
- (void)cityDidChanged:(id)arg1;
- (void)showCityChooser:(id)arg1;
- (id)filmListViewController;
- (void)resetNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resetTitileView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

