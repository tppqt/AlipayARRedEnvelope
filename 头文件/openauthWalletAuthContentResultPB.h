//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface openauthWalletAuthContentResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *agreements; // @dynamic agreements;
@property(retain, nonatomic) NSString *appLogoLink; // @dynamic appLogoLink;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSArray *authText; // @dynamic authText;
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(readonly) _Bool hasAppLogoLink; // @dynamic hasAppLogoLink;
@property(readonly) _Bool hasAppName; // @dynamic hasAppName;
@property(readonly) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(readonly) _Bool hasErrorMsg; // @dynamic hasErrorMsg;
@property(readonly) _Bool hasIsSuccess; // @dynamic hasIsSuccess;
@property(nonatomic) _Bool isSuccess; // @dynamic isSuccess;

@end

