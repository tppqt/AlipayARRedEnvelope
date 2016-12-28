//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface UnifyLoginResPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasCode;
    _Bool _hasSessionId;
    _Bool _hasMsg;
    _Bool _hasToken;
    _Bool _hasSignData;
    _Bool _hasSsoToken;
    _Bool _hasScene;
    _Bool _hasHid;
    _Bool _hasUserId;
    _Bool _hasTaobaoUserId;
    _Bool _hasTaobaoNick;
    _Bool _hasHeadImg;
    _Bool _hasAlipayLoginId;
    _Bool _hasTbLoginId;
    _Bool _hasResultData;
    _Bool _hasH5Url;
    _Bool _hasCheckCodeId;
    _Bool _hasCheckCodeUrl;
    _Bool _hasMobileNo;
    _Bool _success;
    NSString *_code;
    NSString *_sessionId;
    NSString *_msg;
    NSString *_token;
    NSString *_signData;
    NSString *_ssoToken;
    NSString *_scene;
    long long _hid;
    NSString *_userId;
    long long _taobaoUserId;
    NSString *_taobaoNick;
    NSString *_headImg;
    NSString *_alipayLoginId;
    NSString *_tbLoginId;
    NSString *_resultData;
    NSString *_h5Url;
    NSString *_checkCodeId;
    NSString *_checkCodeUrl;
    NSMutableArray *_extMap;
    NSString *_mobileNo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *mobileNo; // @synthesize mobileNo=_mobileNo;
@property(retain, nonatomic) NSMutableArray *extMap; // @synthesize extMap=_extMap;
@property(retain, nonatomic) NSString *checkCodeUrl; // @synthesize checkCodeUrl=_checkCodeUrl;
@property(retain, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) NSString *tbLoginId; // @synthesize tbLoginId=_tbLoginId;
@property(retain, nonatomic) NSString *alipayLoginId; // @synthesize alipayLoginId=_alipayLoginId;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSString *taobaoNick; // @synthesize taobaoNick=_taobaoNick;
@property(nonatomic) long long taobaoUserId; // @synthesize taobaoUserId=_taobaoUserId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long hid; // @synthesize hid=_hid;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasMobileNo; // @synthesize hasMobileNo=_hasMobileNo;
@property(readonly) _Bool hasCheckCodeUrl; // @synthesize hasCheckCodeUrl=_hasCheckCodeUrl;
@property(readonly) _Bool hasCheckCodeId; // @synthesize hasCheckCodeId=_hasCheckCodeId;
@property(readonly) _Bool hasH5Url; // @synthesize hasH5Url=_hasH5Url;
@property(readonly) _Bool hasResultData; // @synthesize hasResultData=_hasResultData;
@property(readonly) _Bool hasTbLoginId; // @synthesize hasTbLoginId=_hasTbLoginId;
@property(readonly) _Bool hasAlipayLoginId; // @synthesize hasAlipayLoginId=_hasAlipayLoginId;
@property(readonly) _Bool hasHeadImg; // @synthesize hasHeadImg=_hasHeadImg;
@property(readonly) _Bool hasTaobaoNick; // @synthesize hasTaobaoNick=_hasTaobaoNick;
@property(readonly) _Bool hasTaobaoUserId; // @synthesize hasTaobaoUserId=_hasTaobaoUserId;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasHid; // @synthesize hasHid=_hasHid;
@property(readonly) _Bool hasScene; // @synthesize hasScene=_hasScene;
@property(readonly) _Bool hasSsoToken; // @synthesize hasSsoToken=_hasSsoToken;
@property(readonly) _Bool hasSignData; // @synthesize hasSignData=_hasSignData;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
@property(readonly) _Bool hasMsg; // @synthesize hasMsg=_hasMsg;
@property(readonly) _Bool hasSessionId; // @synthesize hasSessionId=_hasSessionId;
@property(readonly) _Bool hasCode; // @synthesize hasCode=_hasCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtMap:(id)arg1;
- (void)setExtMapArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

