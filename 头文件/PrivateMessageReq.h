//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface PrivateMessageReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasClientMsgId;
    _Bool _hasReceiverId;
    _Bool _hasTemplateCode;
    _Bool _hasTemplateData;
    _Bool _hasBizType;
    NSString *_clientMsgId;
    NSString *_receiverId;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_bizType;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSString *receiverId; // @synthesize receiverId=_receiverId;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasTemplateData; // @synthesize hasTemplateData=_hasTemplateData;
@property(readonly) _Bool hasTemplateCode; // @synthesize hasTemplateCode=_hasTemplateCode;
@property(readonly) _Bool hasReceiverId; // @synthesize hasReceiverId=_hasReceiverId;
@property(readonly) _Bool hasClientMsgId; // @synthesize hasClientMsgId=_hasClientMsgId;
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

