//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface ALCZmLevelBreaksDownPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasScore; // @dynamic hasScore;
@property(readonly) _Bool hasScoreLevelDesc; // @dynamic hasScoreLevelDesc;
@property(nonatomic) int score; // @dynamic score;
@property(retain, nonatomic) NSString *scoreLevelDesc; // @dynamic scoreLevelDesc;
@property(retain, nonatomic) NSArray *scoreRanges; // @dynamic scoreRanges;
@property(retain, nonatomic) NSArray *scoreRangesDesc; // @dynamic scoreRangesDesc;

@end

