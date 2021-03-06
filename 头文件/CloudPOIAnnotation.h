//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MAAnnotation.h"

@class AMapCloudPOI, NSString;

@interface CloudPOIAnnotation : NSObject <MAAnnotation>
{
    AMapCloudPOI *_cloudPOI;
}

@property(retain, nonatomic) AMapCloudPOI *cloudPOI; // @synthesize cloudPOI=_cloudPOI;
- (void).cxx_destruct;
- (id)initWithCloudPOI:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

