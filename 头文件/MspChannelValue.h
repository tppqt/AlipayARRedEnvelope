//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class MspCardInfo, NSString;

@interface MspChannelValue : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAssignedChannel;
    _Bool _hasAvailableAmount;
    _Bool _hasCardInfo;
    _Bool _hasChannelFullName;
    _Bool _hasChannelIndex;
    _Bool _hasChannelName;
    _Bool _hasChannelType;
    _Bool _hasLargeLimitSignable;
    _Bool _hasExtinfo;
    int _largeLimitSignable;
    NSString *_assignedChannel;
    NSString *_availableAmount;
    MspCardInfo *_cardInfo;
    NSString *_channelFullName;
    NSString *_channelIndex;
    NSString *_channelName;
    NSString *_channelType;
    NSString *_extinfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extinfo; // @synthesize extinfo=_extinfo;
@property(nonatomic) int largeLimitSignable; // @synthesize largeLimitSignable=_largeLimitSignable;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) NSString *channelIndex; // @synthesize channelIndex=_channelIndex;
@property(retain, nonatomic) NSString *channelFullName; // @synthesize channelFullName=_channelFullName;
@property(retain, nonatomic) MspCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) NSString *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(retain, nonatomic) NSString *assignedChannel; // @synthesize assignedChannel=_assignedChannel;
@property(readonly) _Bool hasExtinfo; // @synthesize hasExtinfo=_hasExtinfo;
@property(readonly) _Bool hasLargeLimitSignable; // @synthesize hasLargeLimitSignable=_hasLargeLimitSignable;
@property(readonly) _Bool hasChannelType; // @synthesize hasChannelType=_hasChannelType;
@property(readonly) _Bool hasChannelName; // @synthesize hasChannelName=_hasChannelName;
@property(readonly) _Bool hasChannelIndex; // @synthesize hasChannelIndex=_hasChannelIndex;
@property(readonly) _Bool hasChannelFullName; // @synthesize hasChannelFullName=_hasChannelFullName;
@property(readonly) _Bool hasCardInfo; // @synthesize hasCardInfo=_hasCardInfo;
@property(readonly) _Bool hasAvailableAmount; // @synthesize hasAvailableAmount=_hasAvailableAmount;
@property(readonly) _Bool hasAssignedChannel; // @synthesize hasAssignedChannel=_hasAssignedChannel;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

