//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class Location, NSString;

@interface HomeQueryRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasLeftBottom;
    _Bool _hasRightTop;
    _Bool _hasCurrentLocation;
    _Bool _hasMapCenterLocation;
    _Bool _hasZoomLevel;
    _Bool _hasIsFirstRequest;
    _Bool _hasAccuracy;
    _Bool _isFirstRequest;
    Location *_leftBottom;
    Location *_rightTop;
    Location *_currentLocation;
    Location *_mapCenterLocation;
    double _zoomLevel;
    double _accuracy;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) Location *mapCenterLocation; // @synthesize mapCenterLocation=_mapCenterLocation;
@property(retain, nonatomic) Location *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) Location *rightTop; // @synthesize rightTop=_rightTop;
@property(retain, nonatomic) Location *leftBottom; // @synthesize leftBottom=_leftBottom;
@property(readonly) _Bool hasAccuracy; // @synthesize hasAccuracy=_hasAccuracy;
@property(readonly) _Bool hasIsFirstRequest; // @synthesize hasIsFirstRequest=_hasIsFirstRequest;
@property(readonly) _Bool hasZoomLevel; // @synthesize hasZoomLevel=_hasZoomLevel;
@property(readonly) _Bool hasMapCenterLocation; // @synthesize hasMapCenterLocation=_hasMapCenterLocation;
@property(readonly) _Bool hasCurrentLocation; // @synthesize hasCurrentLocation=_hasCurrentLocation;
@property(readonly) _Bool hasRightTop; // @synthesize hasRightTop=_hasRightTop;
@property(readonly) _Bool hasLeftBottom; // @synthesize hasLeftBottom=_hasLeftBottom;
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

