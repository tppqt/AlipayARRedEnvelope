//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface DynamicResourceInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasSuccess;
    _Bool _hasMessage;
    _Bool _hasVersion;
    _Bool _hasRollback;
    _Bool _success;
    _Bool _rollback;
    int _bizType;
    NSString *_message;
    NSString *_version;
    NSMutableArray *_item;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *item; // @synthesize item=_item;
@property(nonatomic) _Bool rollback; // @synthesize rollback=_rollback;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasRollback; // @synthesize hasRollback=_hasRollback;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasMessage; // @synthesize hasMessage=_hasMessage;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addItem:(id)arg1;
- (void)setItemArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

