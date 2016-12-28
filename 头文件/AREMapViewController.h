//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseViewController.h"

#import "APMOpenGLESManagerDelegate.h"
#import "ARECircleBtnViewProtocol.h"
#import "ARESchemeProtocol.h"
#import "MAMapViewDelegate.h"

@class APEdgeRiskAnalyzer, AREAggregationTableView, ARECircleBtnView, AREEnvelopeManager, AREMapLoadingView, ARERPCEngine, AREUserAnnotationView, CLLocation, MAMapView, NSMutableArray, NSString, UIPanGestureRecognizer;

@interface AREMapViewController : AREBaseViewController <MAMapViewDelegate, ARECircleBtnViewProtocol, ARESchemeProtocol, APMOpenGLESManagerDelegate>
{
    MAMapView *_mapView;
    ARECircleBtnView *_hideButton;
    ARERPCEngine *_rpcEngine;
    AREEnvelopeManager *_envelopeManager;
    AREUserAnnotationView *_usrAnnotationView;
    AREMapLoadingView *_mapLoadingView;
    AREAggregationTableView *_aggregationTableView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastRoationDegree;
    NSString *_crowdNo;
    APEdgeRiskAnalyzer *_riskAnalyzer;
    CLLocation *_lastLocation;
    double _metersForPerPoint;
    NSMutableArray *_rpcPopViewArray;
    struct CGPoint _fingerLastPoint;
}

+ (unsigned long long)canInitWithOptions:(id)arg1;
@property(retain, nonatomic) NSMutableArray *rpcPopViewArray; // @synthesize rpcPopViewArray=_rpcPopViewArray;
@property(nonatomic) double metersForPerPoint; // @synthesize metersForPerPoint=_metersForPerPoint;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) APEdgeRiskAnalyzer *riskAnalyzer; // @synthesize riskAnalyzer=_riskAnalyzer;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(nonatomic) double lastRoationDegree; // @synthesize lastRoationDegree=_lastRoationDegree;
@property(nonatomic) struct CGPoint fingerLastPoint; // @synthesize fingerLastPoint=_fingerLastPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) AREAggregationTableView *aggregationTableView; // @synthesize aggregationTableView=_aggregationTableView;
@property(retain, nonatomic) AREMapLoadingView *mapLoadingView; // @synthesize mapLoadingView=_mapLoadingView;
@property(retain, nonatomic) AREUserAnnotationView *usrAnnotationView; // @synthesize usrAnnotationView=_usrAnnotationView;
@property(retain, nonatomic) AREEnvelopeManager *envelopeManager; // @synthesize envelopeManager=_envelopeManager;
@property(retain, nonatomic) ARERPCEngine *rpcEngine; // @synthesize rpcEngine=_rpcEngine;
@property(retain, nonatomic) ARECircleBtnView *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)openGLESManagerReceiveDeactiveCommand:(id)arg1;
- (void)openGLESManagerReceiveActiveCommand:(id)arg1;
- (id)normalViewForAnnotation:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)updateScreenAnchorWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 rotationDegree:(double)arg3;
- (void)pushToQueueShowingView:(id)arg1;
- (void)popFromQueueWhenComfirmAlertView;
- (void)querySingleEnvelopeInfo;
- (void)queryArCrowdData;
- (void)updateCircleView;
- (void)setLastLocation;
- (void)didClickCircleButtonView:(id)arg1;
- (void)mapViewRotationByGesture:(id)arg1;
- (void)removeMapAvailableAnnotationView;
- (void)removeMapAnnotationViews;
- (void)receiveEnvelopDataChanged:(id)arg1;
- (void)createEnvelopeSuccess;
- (void)availableDataChanged;
- (void)envelopeDataChanged;
- (void)updateMapLodingStatus;
- (id)horizentalPanGestureRecognizer;
- (id)skyBoxView;
- (id)gradientView;
- (void)initShareButton;
- (void)initButtonViews;
- (void)setupNaviBar;
- (void)setupMapView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

