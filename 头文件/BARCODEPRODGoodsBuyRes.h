//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BARCODEPRODRpcCommonResult.h"

@class NSDictionary, NSString;

@interface BARCODEPRODGoodsBuyRes : BARCODEPRODRpcCommonResult
{
    NSString *_tradeNo;
    NSString *_bizType;
    NSString *_subBizType;
    NSDictionary *_bizcontext;
}

+ (Class)bizcontextElementClass;
@property(retain, nonatomic) NSDictionary *bizcontext; // @synthesize bizcontext=_bizcontext;
@property(retain, nonatomic) NSString *subBizType; // @synthesize subBizType=_subBizType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end

