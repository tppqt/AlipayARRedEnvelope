//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseResponse.h"

@class CheckServiceResponse, NSString;

@interface ANXCheckServiceResponse : ANXBaseResponse
{
    CheckServiceResponse *_response;
}

@property(retain, nonatomic) CheckServiceResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *serviceAgreementUrl;
@property(readonly, nonatomic) NSString *zmxyAgreementUrl;
@property(readonly, nonatomic) NSString *pcreditpaySchema;
@property(readonly, nonatomic) NSString *supportedLines;
@property(readonly, nonatomic) _Bool needOpenPcreditPay;
@property(readonly, nonatomic) int status;
- (id)baseInfo;
- (id)reformWithResponse:(id)arg1;

@end

