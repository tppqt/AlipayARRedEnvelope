//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class BisBehavCommon, BisBehavToken, BisClientInfo, NSMutableArray, NSString;

@interface BisBehavLog : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasClientInfo;
    _Bool _hasBehavToken;
    _Bool _hasBehavCommon;
    BisClientInfo *_clientInfo;
    BisBehavToken *_behavToken;
    BisBehavCommon *_behavCommon;
    NSMutableArray *_behavTask;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *behavTask; // @synthesize behavTask=_behavTask;
@property(retain, nonatomic) BisBehavCommon *behavCommon; // @synthesize behavCommon=_behavCommon;
@property(retain, nonatomic) BisBehavToken *behavToken; // @synthesize behavToken=_behavToken;
@property(retain, nonatomic) BisClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) _Bool hasBehavCommon; // @synthesize hasBehavCommon=_hasBehavCommon;
@property(readonly) _Bool hasBehavToken; // @synthesize hasBehavToken=_hasBehavToken;
@property(readonly) _Bool hasClientInfo; // @synthesize hasClientInfo=_hasClientInfo;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addBehavTask:(id)arg1;
- (void)setBehavTaskArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

