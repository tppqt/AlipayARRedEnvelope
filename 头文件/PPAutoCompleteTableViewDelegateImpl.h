//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DTRpcAsyncCaller, NSArray, NSMutableArray, NSString, PPLocalSearchService;

@interface PPAutoCompleteTableViewDelegateImpl : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    DTRpcAsyncCaller *_caller;
    NSString *_sourceTag;
    _Bool _isShowLocalSearch;
    NSMutableArray *_localSearchResultArray;
    NSMutableArray *_remoteAutoCompleteArray;
    NSString *_lastSearchWord;
    NSArray *_cacheFollowList;
    PPLocalSearchService *_localSearchService;
}

@property(retain, nonatomic) PPLocalSearchService *localSearchService; // @synthesize localSearchService=_localSearchService;
@property(retain, nonatomic) NSArray *cacheFollowList; // @synthesize cacheFollowList=_cacheFollowList;
@property(retain, nonatomic) NSString *lastSearchWord; // @synthesize lastSearchWord=_lastSearchWord;
@property(nonatomic) _Bool isShowLocalSearch; // @synthesize isShowLocalSearch=_isShowLocalSearch;
@property(retain, nonatomic) NSMutableArray *remoteAutoCompleteArray; // @synthesize remoteAutoCompleteArray=_remoteAutoCompleteArray;
@property(retain, nonatomic) NSMutableArray *localSearchResultArray; // @synthesize localSearchResultArray=_localSearchResultArray;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)autoComplete:(id)arg1 sourceTag:(id)arg2 targetTableView:(id)arg3;
- (id)autoCompleteResultableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)localSearchResultTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)headCellForTableView:(id)arg1 title:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)localSearchWithText:(id)arg1 fromSearchSource:(id)arg2 inTableView:(id)arg3;
- (void)prepareCacheFollowListAndSearchReloadTableView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

