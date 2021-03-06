//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSData, NSString;

@interface EdgeResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasErrorCode;
    _Bool _hasPolicyPackData;
    _Bool _hasFlag;
    _Bool _hasExtData;
    _Bool _success;
    int _flag;
    NSString *_errorCode;
    NSData *_policyPackData;
    NSString *_extData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extData; // @synthesize extData=_extData;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSData *policyPackData; // @synthesize policyPackData=_policyPackData;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasExtData; // @synthesize hasExtData=_hasExtData;
@property(readonly) _Bool hasFlag; // @synthesize hasFlag=_hasFlag;
@property(readonly) _Bool hasPolicyPackData; // @synthesize hasPolicyPackData=_hasPolicyPackData;
@property(readonly) _Bool hasErrorCode; // @synthesize hasErrorCode=_hasErrorCode;
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

