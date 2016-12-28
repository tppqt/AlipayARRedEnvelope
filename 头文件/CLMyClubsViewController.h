//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCommonSelectDelegate.h"

@class APCommonSelectView, CLBlankClubListView, NSArray, NSString;

@interface CLMyClubsViewController : DTViewController <APCommonSelectDelegate>
{
    APCommonSelectView *_selectView;
    NSArray *_clubListData;
    _Bool _hasCacheData;
    NSString *_clubUserId;
    NSString *_clubLoginId;
    NSString *_sourceId;
    NSString *_currentUserId;
    CLBlankClubListView *_blankView;
}

@property(retain, nonatomic) CLBlankClubListView *blankView; // @synthesize blankView=_blankView;
- (void).cxx_destruct;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)mainDataInCommonView:(id)arg1;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (void)reloadUI:(id)arg1;
- (void)loadOnline;
- (void)buildSelectView;
- (void)viewDidLoad;
- (id)initWithClubUserId:(id)arg1 clubLoginId:(id)arg2 sourceId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

