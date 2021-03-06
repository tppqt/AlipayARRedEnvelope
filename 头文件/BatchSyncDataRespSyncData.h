//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface BatchSyncDataRespSyncData : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasType;
    _Bool _hasData;
    _Bool _hasUpdateTime;
    NSString *_type;
    NSString *_data;
    NSString *_updateTime;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly) _Bool hasUpdateTime; // @synthesize hasUpdateTime=_hasUpdateTime;
@property(readonly) _Bool hasData; // @synthesize hasData=_hasData;
@property(readonly) _Bool hasType; // @synthesize hasType=_hasType;
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

