//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface PBChildStageInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasStageCode;
    _Bool _hasStageName;
    _Bool _hasIsRuleDegrade;
    _Bool _hasDataversion;
    _Bool _isRuleDegrade;
    NSString *_stageCode;
    NSString *_stageName;
    NSMutableArray *_appIds;
    NSMutableArray *_configMap;
    NSString *_dataversion;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *dataversion; // @synthesize dataversion=_dataversion;
@property(retain, nonatomic) NSMutableArray *configMap; // @synthesize configMap=_configMap;
@property(nonatomic) _Bool isRuleDegrade; // @synthesize isRuleDegrade=_isRuleDegrade;
@property(retain, nonatomic) NSMutableArray *appIds; // @synthesize appIds=_appIds;
@property(retain, nonatomic) NSString *stageName; // @synthesize stageName=_stageName;
@property(retain, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
@property(readonly) _Bool hasDataversion; // @synthesize hasDataversion=_hasDataversion;
@property(readonly) _Bool hasIsRuleDegrade; // @synthesize hasIsRuleDegrade=_hasIsRuleDegrade;
@property(readonly) _Bool hasStageName; // @synthesize hasStageName=_hasStageName;
@property(readonly) _Bool hasStageCode; // @synthesize hasStageCode=_hasStageCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addConfigMap:(id)arg1;
- (void)setConfigMapArray:(id)arg1;
- (void)addAppIds:(id)arg1;
- (void)setAppIdsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

