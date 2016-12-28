//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface GiftUserViewInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasUserId;
    _Bool _hasImgUrl;
    _Bool _hasUserName;
    _Bool _hasAlipayAccount;
    _Bool _hasRealFriend;
    _Bool _realFriend;
    NSString *_userId;
    NSString *_imgUrl;
    NSString *_userName;
    NSString *_alipayAccount;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool realFriend; // @synthesize realFriend=_realFriend;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly) _Bool hasRealFriend; // @synthesize hasRealFriend=_hasRealFriend;
@property(readonly) _Bool hasAlipayAccount; // @synthesize hasAlipayAccount=_hasAlipayAccount;
@property(readonly) _Bool hasUserName; // @synthesize hasUserName=_hasUserName;
@property(readonly) _Bool hasImgUrl; // @synthesize hasImgUrl=_hasImgUrl;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
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

