//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class BlessingCardVoPB, NSString;

@interface WannengBlessingTransResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) BlessingCardVoPB *blessingCard; // @dynamic blessingCard;
@property(retain, nonatomic) NSString *code; // @dynamic code;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(readonly) _Bool hasBlessingCard; // @dynamic hasBlessingCard;
@property(readonly) _Bool hasCode; // @dynamic hasCode;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(nonatomic) _Bool success; // @dynamic success;

@end

