//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface VcardInstantMessageAddress : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasLabel;
    _Bool _hasLabelType;
    _Bool _hasUsername;
    _Bool _hasService;
    int _labelType;
    NSString *_label;
    NSString *_username;
    NSString *_service;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly) _Bool hasService; // @synthesize hasService=_hasService;
@property(readonly) _Bool hasUsername; // @synthesize hasUsername=_hasUsername;
@property(readonly) _Bool hasLabelType; // @synthesize hasLabelType=_hasLabelType;
@property(readonly) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
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

