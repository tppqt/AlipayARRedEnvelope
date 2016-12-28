//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MspCardInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBankName;
    _Bool _hasCardNo;
    _Bool _hasInstId;
    _Bool _hasPrincipalId;
    _Bool _hasSignId;
    _Bool _hasUserName;
    _Bool _hasExtinfo;
    NSString *_bankName;
    NSString *_cardNo;
    NSString *_instId;
    NSString *_principalId;
    NSString *_signId;
    NSString *_userName;
    NSString *_extinfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extinfo; // @synthesize extinfo=_extinfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *signId; // @synthesize signId=_signId;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(readonly) _Bool hasExtinfo; // @synthesize hasExtinfo=_hasExtinfo;
@property(readonly) _Bool hasUserName; // @synthesize hasUserName=_hasUserName;
@property(readonly) _Bool hasSignId; // @synthesize hasSignId=_hasSignId;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasInstId; // @synthesize hasInstId=_hasInstId;
@property(readonly) _Bool hasCardNo; // @synthesize hasCardNo=_hasCardNo;
@property(readonly) _Bool hasBankName; // @synthesize hasBankName=_hasBankName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

