//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIColor;

@interface ALPOperationMessage : NSObject
{
    int _operationType;
    float _refreshTime;
    NSString *_altText;
    id _message;
    NSString *_messageEncoding;
    UIColor *_textColor;
    NSString *_passId;
    NSString *_messagePreFix;
    NSMutableDictionary *_operationTypeDic;
}

@property(retain, nonatomic) NSMutableDictionary *operationTypeDic; // @synthesize operationTypeDic=_operationTypeDic;
@property(nonatomic) float refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSString *messagePreFix; // @synthesize messagePreFix=_messagePreFix;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *messageEncoding; // @synthesize messageEncoding=_messageEncoding;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) id message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
- (void).cxx_destruct;
- (void)executeExchangeWithlatitude:(double)arg1 longitude:(double)arg2;
- (void)useExchange;
- (void)clickExchange;
- (void)clickThirdPartyApp;
- (void)clickHyperLink;
- (_Bool)isValid;
- (int)parseOperationType:(id)arg1;
@property(readonly, nonatomic) _Bool isPassdQRCode;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)initWithDictionary:(id)arg1;

@end

