//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface promoprodBudgetQueryResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *amountMessage; // @dynamic amountMessage;
@property(readonly) _Bool hasAmountMessage; // @dynamic hasAmountMessage;
@property(readonly) _Bool hasRemainAmount; // @dynamic hasRemainAmount;
@property(readonly) _Bool hasRequestIndex; // @dynamic hasRequestIndex;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasTipMessage; // @dynamic hasTipMessage;
@property(readonly) _Bool hasTotalAmount; // @dynamic hasTotalAmount;
@property(nonatomic) long long remainAmount; // @dynamic remainAmount;
@property(retain, nonatomic) NSString *requestIndex; // @dynamic requestIndex;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *tipMessage; // @dynamic tipMessage;
@property(nonatomic) long long totalAmount; // @dynamic totalAmount;

@end

