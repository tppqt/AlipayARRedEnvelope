//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class ArModelInfo, BlessingCard, NSString;

@interface ScanQueryResponse : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDesc;
    _Bool _hasType;
    _Bool _hasHasMatch;
    _Bool _hasUnMatchTip;
    _Bool _hasEventSchema;
    _Bool _hasArModelInfo;
    _Bool _hasCurrentTime;
    _Bool _hasArCardInfo;
    _Bool _hasEventId;
    _Bool _hasCocaTouchTip;
    _Bool _hasLuckPicId;
    _Bool _success;
    _Bool _hasMatch;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_type;
    NSString *_unMatchTip;
    NSString *_eventSchema;
    ArModelInfo *_arModelInfo;
    long long _currentTime;
    BlessingCard *_arCardInfo;
    NSString *_eventId;
    NSString *_cocaTouchTip;
    NSString *_luckPicId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *luckPicId; // @synthesize luckPicId=_luckPicId;
@property(retain, nonatomic) NSString *cocaTouchTip; // @synthesize cocaTouchTip=_cocaTouchTip;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) BlessingCard *arCardInfo; // @synthesize arCardInfo=_arCardInfo;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) ArModelInfo *arModelInfo; // @synthesize arModelInfo=_arModelInfo;
@property(retain, nonatomic) NSString *eventSchema; // @synthesize eventSchema=_eventSchema;
@property(retain, nonatomic) NSString *unMatchTip; // @synthesize unMatchTip=_unMatchTip;
@property(nonatomic) _Bool hasMatch; // @synthesize hasMatch=_hasMatch;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasLuckPicId; // @synthesize hasLuckPicId=_hasLuckPicId;
@property(readonly) _Bool hasCocaTouchTip; // @synthesize hasCocaTouchTip=_hasCocaTouchTip;
@property(readonly) _Bool hasEventId; // @synthesize hasEventId=_hasEventId;
@property(readonly) _Bool hasArCardInfo; // @synthesize hasArCardInfo=_hasArCardInfo;
@property(readonly) _Bool hasCurrentTime; // @synthesize hasCurrentTime=_hasCurrentTime;
@property(readonly) _Bool hasArModelInfo; // @synthesize hasArModelInfo=_hasArModelInfo;
@property(readonly) _Bool hasEventSchema; // @synthesize hasEventSchema=_hasEventSchema;
@property(readonly) _Bool hasUnMatchTip; // @synthesize hasUnMatchTip=_hasUnMatchTip;
@property(readonly) _Bool hasHasMatch; // @synthesize hasHasMatch=_hasHasMatch;
@property(readonly) _Bool hasType; // @synthesize hasType=_hasType;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

