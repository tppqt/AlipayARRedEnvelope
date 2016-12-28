//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableDictionary, NSString;

@interface APDPBGeneratedMessage : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    NSMutableDictionary *_nameValues;
    NSMutableDictionary *_tagValues;
}

+ (id)parseFromData:(id)arg1;
+ (CDStruct_af61540b *)_fieldInfos;
@property(retain, nonatomic) NSMutableDictionary *tagValues; // @synthesize tagValues=_tagValues;
@property(retain, nonatomic) NSMutableDictionary *nameValues; // @synthesize nameValues=_nameValues;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)argumentValueWithPBInfo:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)getArgument:(id)arg1 pbInfo:(id)arg2;
- (void)setArgument:(id)arg1 pbInfo:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)formaterKey:(id)arg1 suffixLen:(int)arg2;
- (id)objCTypeGetterWithFloat:(int)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

