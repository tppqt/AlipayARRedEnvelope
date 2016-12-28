//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "PSDPluginProtocol.h"

@class NBDebugLogListViewController, NBDebugPageCollection, NSMutableDictionary, NSString;

@interface NBDebugHybridPlugin : NBPluginBase <PSDPluginProtocol>
{
    NBDebugPageCollection *_pageStatusCollection;
    NBDebugLogListViewController *_logListVC;
    NSMutableDictionary *_switchBtnMap;
}

@property(retain, nonatomic) NSMutableDictionary *switchBtnMap; // @synthesize switchBtnMap=_switchBtnMap;
@property(retain, nonatomic) NBDebugLogListViewController *logListVC; // @synthesize logListVC=_logListVC;
@property(retain, nonatomic) NBDebugPageCollection *pageStatusCollection; // @synthesize pageStatusCollection=_pageStatusCollection;
- (void).cxx_destruct;
- (void)switchBtnDoubleTap:(id)arg1;
- (void)switchBtnClick:(id)arg1;
- (void)removeLogViewActionOfViewId:(id)arg1;
- (void)startScreenTaskWithView:(id)arg1 viewId:(id)arg2;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

