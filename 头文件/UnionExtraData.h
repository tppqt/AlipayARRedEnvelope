//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface UnionExtraData : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasKey;
    _Bool _hasValue;
    NSString *_key;
    NSString *_value;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly) _Bool hasValue; // @synthesize hasValue=_hasValue;
@property(readonly) _Bool hasKey; // @synthesize hasKey=_hasKey;
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

