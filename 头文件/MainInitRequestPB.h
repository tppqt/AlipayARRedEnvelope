//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface MainInitRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *blessingProVersion; // @dynamic blessingProVersion;
@property(retain, nonatomic) NSString *cardModelVersion; // @dynamic cardModelVersion;
@property(retain, nonatomic) NSString *collectedNum; // @dynamic collectedNum;
@property(readonly) _Bool hasBlessingProVersion; // @dynamic hasBlessingProVersion;
@property(readonly) _Bool hasCardModelVersion; // @dynamic hasCardModelVersion;
@property(readonly) _Bool hasCollectedNum; // @dynamic hasCollectedNum;
@property(readonly) _Bool hasJustQueryCards; // @dynamic hasJustQueryCards;
@property(nonatomic) _Bool justQueryCards; // @dynamic justQueryCards;

@end

