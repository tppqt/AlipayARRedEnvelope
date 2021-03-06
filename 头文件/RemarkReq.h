//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface RemarkReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasTargetUserId;
    _Bool _hasAlipayAccount;
    _Bool _hasTextInfo;
    _Bool _hasRemarkName;
    NSString *_targetUserId;
    NSString *_alipayAccount;
    NSMutableArray *_phones;
    NSString *_textInfo;
    NSString *_remarkName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *remarkName; // @synthesize remarkName=_remarkName;
@property(retain, nonatomic) NSString *textInfo; // @synthesize textInfo=_textInfo;
@property(retain, nonatomic) NSMutableArray *phones; // @synthesize phones=_phones;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *targetUserId; // @synthesize targetUserId=_targetUserId;
@property(readonly) _Bool hasRemarkName; // @synthesize hasRemarkName=_hasRemarkName;
@property(readonly) _Bool hasTextInfo; // @synthesize hasTextInfo=_hasTextInfo;
@property(readonly) _Bool hasAlipayAccount; // @synthesize hasAlipayAccount=_hasAlipayAccount;
@property(readonly) _Bool hasTargetUserId; // @synthesize hasTargetUserId=_hasTargetUserId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addPhones:(id)arg1;
- (void)setPhonesArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

