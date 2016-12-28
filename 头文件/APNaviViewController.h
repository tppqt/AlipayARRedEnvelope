//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBaseMapViewController.h"

#import "UIActionSheetDelegate.h"

@class AMapRoute, NSArray, NSString;

@interface APNaviViewController : APBaseMapViewController <UIActionSheetDelegate>
{
    NSArray *config;
    id <MAAnnotation> currentAnnotation;
    _Bool _firstUpdateLocation;
    id <MAAnnotation> _originAnnotation;
    id <MAAnnotation> _destinationAnnotation;
    AMapRoute *_route;
}

@property(retain, nonatomic) AMapRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) id <MAAnnotation> destinationAnnotation; // @synthesize destinationAnnotation=_destinationAnnotation;
@property(retain, nonatomic) id <MAAnnotation> originAnnotation; // @synthesize originAnnotation=_originAnnotation;
@property(nonatomic) _Bool firstUpdateLocation; // @synthesize firstUpdateLocation=_firstUpdateLocation;
- (void).cxx_destruct;
- (id)appID;
- (void)search:(id)arg1;
- (void)setMapViewForShowAnnotations:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (id)buildSchemeUrl:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)viewDidLoad;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (_Bool)isZoomLevelValid:(double)arg1;
- (void)startSearching;
- (void)setLaunchOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

