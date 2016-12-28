//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MemberPrivilegeRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPassId;
    _Bool _hasSource;
    _Bool _hasTemplateId;
    _Bool _hasPartnerId;
    NSString *_passId;
    NSString *_source;
    NSString *_templateId;
    NSString *_partnerId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(readonly) _Bool hasPartnerId; // @synthesize hasPartnerId=_hasPartnerId;
@property(readonly) _Bool hasTemplateId; // @synthesize hasTemplateId=_hasTemplateId;
@property(readonly) _Bool hasSource; // @synthesize hasSource=_hasSource;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
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

