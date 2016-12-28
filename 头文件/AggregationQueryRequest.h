//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class Location, NSString;

@interface AggregationQueryRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAggregationCenter;
    _Bool _hasAggregationRadius;
    _Bool _hasTimestamp;
    _Bool _hasZoomLevel;
    _Bool _hasAccuracy;
    int _aggregationRadius;
    Location *_aggregationCenter;
    long long _timestamp;
    double _zoomLevel;
    double _accuracy;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int aggregationRadius; // @synthesize aggregationRadius=_aggregationRadius;
@property(retain, nonatomic) Location *aggregationCenter; // @synthesize aggregationCenter=_aggregationCenter;
@property(readonly) _Bool hasAccuracy; // @synthesize hasAccuracy=_hasAccuracy;
@property(readonly) _Bool hasZoomLevel; // @synthesize hasZoomLevel=_hasZoomLevel;
@property(readonly) _Bool hasTimestamp; // @synthesize hasTimestamp=_hasTimestamp;
@property(readonly) _Bool hasAggregationRadius; // @synthesize hasAggregationRadius=_hasAggregationRadius;
@property(readonly) _Bool hasAggregationCenter; // @synthesize hasAggregationCenter=_hasAggregationCenter;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

