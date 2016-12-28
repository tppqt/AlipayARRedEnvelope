//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class BaseRPCRequestInfo, NSString;

@interface CheckServiceRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBaseRpcrequestInfo;
    _Bool _hasCityCode;
    BaseRPCRequestInfo *_baseRpcrequestInfo;
    NSString *_cityCode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) BaseRPCRequestInfo *baseRpcrequestInfo; // @synthesize baseRpcrequestInfo=_baseRpcrequestInfo;
@property(readonly) _Bool hasCityCode; // @synthesize hasCityCode=_hasCityCode;
@property(readonly) _Bool hasBaseRpcrequestInfo; // @synthesize hasBaseRpcrequestInfo=_hasBaseRpcrequestInfo;
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

