//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface SendBegRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *begType; // @dynamic begType;
@property(retain, nonatomic) NSString *cardMId; // @dynamic cardMId;
@property(readonly) _Bool hasBegType; // @dynamic hasBegType;
@property(readonly) _Bool hasCardMId; // @dynamic hasCardMId;
@property(readonly) _Bool hasSource; // @dynamic hasSource;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSArray *toBegReceivers; // @dynamic toBegReceivers;

@end

