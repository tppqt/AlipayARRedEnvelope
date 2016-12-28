//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface UploadMobileContact : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasDeviceId;
    _Bool _hasIncr;
    _Bool _hasFirstBatch;
    _Bool _hasOrder;
    _Bool _hasPurge;
    _Bool _hasLifeSessionId;
    _Bool _incr;
    _Bool _firstBatch;
    _Bool _purge;
    int _order;
    NSString *_deviceId;
    NSMutableArray *_recordList;
    NSString *_lifeSessionId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *lifeSessionId; // @synthesize lifeSessionId=_lifeSessionId;
@property(nonatomic) _Bool purge; // @synthesize purge=_purge;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) _Bool firstBatch; // @synthesize firstBatch=_firstBatch;
@property(retain, nonatomic) NSMutableArray *recordList; // @synthesize recordList=_recordList;
@property(nonatomic) _Bool incr; // @synthesize incr=_incr;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly) _Bool hasLifeSessionId; // @synthesize hasLifeSessionId=_hasLifeSessionId;
@property(readonly) _Bool hasPurge; // @synthesize hasPurge=_hasPurge;
@property(readonly) _Bool hasOrder; // @synthesize hasOrder=_hasOrder;
@property(readonly) _Bool hasFirstBatch; // @synthesize hasFirstBatch=_hasFirstBatch;
@property(readonly) _Bool hasIncr; // @synthesize hasIncr=_hasIncr;
@property(readonly) _Bool hasDeviceId; // @synthesize hasDeviceId=_hasDeviceId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addRecordList:(id)arg1;
- (void)setRecordListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

