//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface SeedLogItem : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasLogo;
    _Bool _hasName;
    _Bool _hasUserId;
    _Bool _hasFee;
    _Bool _hasLogDate;
    _Bool _hasAlipayAccount;
    NSString *_logo;
    NSString *_name;
    NSString *_userId;
    NSString *_fee;
    NSString *_logDate;
    NSString *_alipayAccount;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *logDate; // @synthesize logDate=_logDate;
@property(retain, nonatomic) NSString *fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(readonly) _Bool hasAlipayAccount; // @synthesize hasAlipayAccount=_hasAlipayAccount;
@property(readonly) _Bool hasLogDate; // @synthesize hasLogDate=_hasLogDate;
@property(readonly) _Bool hasFee; // @synthesize hasFee=_hasFee;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasName; // @synthesize hasName=_hasName;
@property(readonly) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
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

