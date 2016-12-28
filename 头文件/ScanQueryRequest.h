//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class Location, NSString;

@interface ScanQueryRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasCurrentLocation;
    _Bool _hasScanFeature;
    _Bool _hasScanPicId;
    _Bool _hasAccuracy;
    _Bool _hasClientHasMatch;
    _Bool _hasPicType;
    _Bool _hasEventId;
    _Bool _hasSParam;
    _Bool _hasPicDataBase64;
    _Bool _hasIsUploadToServer;
    _Bool _clientHasMatch;
    _Bool _isUploadToServer;
    Location *_currentLocation;
    NSString *_scanFeature;
    NSString *_scanPicId;
    double _accuracy;
    NSString *_picType;
    NSString *_eventId;
    NSString *_sParam;
    NSString *_picDataBase64;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool isUploadToServer; // @synthesize isUploadToServer=_isUploadToServer;
@property(retain, nonatomic) NSString *picDataBase64; // @synthesize picDataBase64=_picDataBase64;
@property(retain, nonatomic) NSString *sParam; // @synthesize sParam=_sParam;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *picType; // @synthesize picType=_picType;
@property(nonatomic) _Bool clientHasMatch; // @synthesize clientHasMatch=_clientHasMatch;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSString *scanPicId; // @synthesize scanPicId=_scanPicId;
@property(retain, nonatomic) NSString *scanFeature; // @synthesize scanFeature=_scanFeature;
@property(retain, nonatomic) Location *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly) _Bool hasIsUploadToServer; // @synthesize hasIsUploadToServer=_hasIsUploadToServer;
@property(readonly) _Bool hasPicDataBase64; // @synthesize hasPicDataBase64=_hasPicDataBase64;
@property(readonly) _Bool hasSParam; // @synthesize hasSParam=_hasSParam;
@property(readonly) _Bool hasEventId; // @synthesize hasEventId=_hasEventId;
@property(readonly) _Bool hasPicType; // @synthesize hasPicType=_hasPicType;
@property(readonly) _Bool hasClientHasMatch; // @synthesize hasClientHasMatch=_hasClientHasMatch;
@property(readonly) _Bool hasAccuracy; // @synthesize hasAccuracy=_hasAccuracy;
@property(readonly) _Bool hasScanPicId; // @synthesize hasScanPicId=_hasScanPicId;
@property(readonly) _Bool hasScanFeature; // @synthesize hasScanFeature=_hasScanFeature;
@property(readonly) _Bool hasCurrentLocation; // @synthesize hasCurrentLocation=_hasCurrentLocation;
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

