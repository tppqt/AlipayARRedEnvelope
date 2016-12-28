//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface AuthLoginTokenResPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasCode;
    _Bool _hasMsg;
    _Bool _hasToken;
    _Bool _success;
    NSString *_code;
    NSString *_msg;
    NSString *_token;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
@property(readonly) _Bool hasMsg; // @synthesize hasMsg=_hasMsg;
@property(readonly) _Bool hasCode; // @synthesize hasCode=_hasCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
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

