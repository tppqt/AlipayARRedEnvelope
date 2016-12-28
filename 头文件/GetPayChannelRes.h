//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface GetPayChannelRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDes;
    _Bool _hasQueryOrNo;
    _Bool _hasDisplayPayChannel;
    _Bool _success;
    _Bool _queryOrNo;
    _Bool _displayPayChannel;
    NSString *_resultCode;
    NSString *_resultDes;
    NSMutableArray *_payChannelModel;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *payChannelModel; // @synthesize payChannelModel=_payChannelModel;
@property(nonatomic) _Bool displayPayChannel; // @synthesize displayPayChannel=_displayPayChannel;
@property(nonatomic) _Bool queryOrNo; // @synthesize queryOrNo=_queryOrNo;
@property(retain, nonatomic) NSString *resultDes; // @synthesize resultDes=_resultDes;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasDisplayPayChannel; // @synthesize hasDisplayPayChannel=_hasDisplayPayChannel;
@property(readonly) _Bool hasQueryOrNo; // @synthesize hasQueryOrNo=_hasQueryOrNo;
@property(readonly) _Bool hasResultDes; // @synthesize hasResultDes=_hasResultDes;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addPayChannelModel:(id)arg1;
- (void)setPayChannelModelArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

