//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, ProtoUpAckMsg;

@interface ProtoSyncOpCode2005 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasSyncKey;
    _Bool _hasUserId;
    _Bool _hasAckMsg;
    _Bool _hasServerIp;
    int _bizType;
    unsigned int _serverIp;
    long long _syncKey;
    NSString *_userId;
    ProtoUpAckMsg *_ackMsg;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) unsigned int serverIp; // @synthesize serverIp=_serverIp;
@property(retain, nonatomic) ProtoUpAckMsg *ackMsg; // @synthesize ackMsg=_ackMsg;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasServerIp; // @synthesize hasServerIp=_hasServerIp;
@property(readonly) _Bool hasAckMsg; // @synthesize hasAckMsg=_hasAckMsg;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasSyncKey; // @synthesize hasSyncKey=_hasSyncKey;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
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

