//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBaseMapViewController.h"

#import "UIActionSheetDelegate.h"

@class AMapRoute, NSArray, NSString;

@interface APPOISearchViewController : APBaseMapViewController <UIActionSheetDelegate>
{
    NSArray *config;
    id <MAAnnotation> currentAnnotation;
    _Bool _firstUpdateLocation;
    int _searchType;
    id <MAAnnotation> _originAnnotation;
    id <MAAnnotation> _destinationAnnotation;
    AMapRoute *_route;
    long long _currentPage;
    NSString *_lastKeywords;
    NSString *_tableID;
}

@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *tableID; // @synthesize tableID=_tableID;
@property(retain, nonatomic) NSString *lastKeywords; // @synthesize lastKeywords=_lastKeywords;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) AMapRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) id <MAAnnotation> destinationAnnotation; // @synthesize destinationAnnotation=_destinationAnnotation;
@property(retain, nonatomic) id <MAAnnotation> originAnnotation; // @synthesize originAnnotation=_originAnnotation;
@property(nonatomic) _Bool firstUpdateLocation; // @synthesize firstUpdateLocation=_firstUpdateLocation;
- (void).cxx_destruct;
- (id)appID;
- (void)search:(id)arg1;
- (void)cloudRequest:(id)arg1 error:(id)arg2;
- (void)onCloudPlaceAroundSearchDone:(id)arg1 response:(id)arg2;
- (void)setMapViewForShowAnnotations:(id)arg1;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (id)buildSchemeUrl:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)searchKeywords:(id)arg1 inCity:(id)arg2;
- (void)setPOISearchType;
- (void)startSearching;
- (void)setLaunchOptions:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

