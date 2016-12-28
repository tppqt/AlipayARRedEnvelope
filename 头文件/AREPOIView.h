//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class AMapPOI, CLLocation, MASConstraint, NSArray, NSString, UIButton, UILabel, UITableView;

@interface AREPOIView : UIImageView
{
    id <AREPOIViewDelegate> _delegate;
    unsigned long long _currentState;
    CLLocation *_location;
    NSArray *_POIList;
    AMapPOI *_currentPOI;
    long long _POIRank;
    NSString *_rid;
    UILabel *_POILabel;
    UIButton *_changePOIButton;
    MASConstraint *_selfMasWidth;
    MASConstraint *_POILabelWidth;
    MASConstraint *_ChangeButtonWidth;
    UIImageView *_pickupContainerView;
    UITableView *_pickupList;
    UIButton *_retryButon;
}

@property(retain, nonatomic) UIButton *retryButon; // @synthesize retryButon=_retryButon;
@property(retain, nonatomic) UITableView *pickupList; // @synthesize pickupList=_pickupList;
@property(retain, nonatomic) UIImageView *pickupContainerView; // @synthesize pickupContainerView=_pickupContainerView;
@property(retain, nonatomic) MASConstraint *ChangeButtonWidth; // @synthesize ChangeButtonWidth=_ChangeButtonWidth;
@property(retain, nonatomic) MASConstraint *POILabelWidth; // @synthesize POILabelWidth=_POILabelWidth;
@property(retain, nonatomic) MASConstraint *selfMasWidth; // @synthesize selfMasWidth=_selfMasWidth;
@property(retain, nonatomic) UIButton *changePOIButton; // @synthesize changePOIButton=_changePOIButton;
@property(retain, nonatomic) UILabel *POILabel; // @synthesize POILabel=_POILabel;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(nonatomic) long long POIRank; // @synthesize POIRank=_POIRank;
@property(retain, nonatomic) AMapPOI *currentPOI; // @synthesize currentPOI=_currentPOI;
@property(retain, nonatomic) NSArray *POIList; // @synthesize POIList=_POIList;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <AREPOIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assitLogForBI_changePOI:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)animateClosePOIPickupList;
- (void)animateShowPOIPickipList;
- (void)assitLogForBI_poiListViewDisplay;
- (void)toggleShowPOIPickupList;
- (void)selectUserPOI;
- (void)assitLogForBI_poiListFetchDone;
- (void)startDecodeLocation;
- (void)startLocate;
- (void)retryLocateOrDecodeLocation;
- (void)animateUpdateLoadingText;
- (id)currentAttributedText;
- (void)reloadViews;
- (void)viewLayout;
- (void)applicationBecameActive;
- (void)registerNotifications;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithPOI:(id)arg1;
- (id)initWithLocation:(id)arg1 withDelegate:(id)arg2;
- (id)init;

@end

