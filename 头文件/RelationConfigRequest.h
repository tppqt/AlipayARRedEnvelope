//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface RelationConfigRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasScope;
    _Bool _hasSubScope;
    _Bool _hasOriginalId;
    _Bool _hasAction;
    NSString *_scope;
    NSString *_subScope;
    NSMutableArray *_addUserIds;
    NSMutableArray *_delUserIds;
    NSString *_originalId;
    NSString *_action;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *originalId; // @synthesize originalId=_originalId;
@property(retain, nonatomic) NSMutableArray *delUserIds; // @synthesize delUserIds=_delUserIds;
@property(retain, nonatomic) NSMutableArray *addUserIds; // @synthesize addUserIds=_addUserIds;
@property(retain, nonatomic) NSString *subScope; // @synthesize subScope=_subScope;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(readonly) _Bool hasOriginalId; // @synthesize hasOriginalId=_hasOriginalId;
@property(readonly) _Bool hasSubScope; // @synthesize hasSubScope=_hasSubScope;
@property(readonly) _Bool hasScope; // @synthesize hasScope=_hasScope;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addDelUserIds:(id)arg1;
- (void)setDelUserIdsArray:(id)arg1;
- (void)addAddUserIds:(id)arg1;
- (void)setAddUserIdsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

