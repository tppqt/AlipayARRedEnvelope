//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface LoginSendMSGResPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultCode;
    _Bool _hasMemo;
    _Bool _hasSecurityId;
    _Bool _hasToken;
    NSString *_resultCode;
    NSString *_memo;
    NSString *_securityId;
    NSString *_token;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
@property(readonly) _Bool hasSecurityId; // @synthesize hasSecurityId=_hasSecurityId;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
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

