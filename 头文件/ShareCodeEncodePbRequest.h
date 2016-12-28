//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, ShareCodeData;

@interface ShareCodeEncodePbRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasBizLinkedId;
    _Bool _hasShareCodeData;
    NSString *_bizType;
    NSString *_bizLinkedId;
    ShareCodeData *_shareCodeData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) ShareCodeData *shareCodeData; // @synthesize shareCodeData=_shareCodeData;
@property(retain, nonatomic) NSString *bizLinkedId; // @synthesize bizLinkedId=_bizLinkedId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasShareCodeData; // @synthesize hasShareCodeData=_hasShareCodeData;
@property(readonly) _Bool hasBizLinkedId; // @synthesize hasBizLinkedId=_hasBizLinkedId;
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

