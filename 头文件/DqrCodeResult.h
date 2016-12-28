//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface DqrCodeResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDesc;
    _Bool _hasResultView;
    _Bool _hasPassId;
    _Bool _hasDqrcode;
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSString *_passId;
    NSString *_dqrcode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *dqrcode; // @synthesize dqrcode=_dqrcode;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasDqrcode; // @synthesize hasDqrcode=_hasDqrcode;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
@property(readonly) _Bool hasResultView; // @synthesize hasResultView=_hasResultView;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
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

