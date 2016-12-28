//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface PrivilegeInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasTypeName;
    NSString *_typeName;
    NSMutableArray *_privilegeItems;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *privilegeItems; // @synthesize privilegeItems=_privilegeItems;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly) _Bool hasTypeName; // @synthesize hasTypeName=_hasTypeName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addPrivilegeItems:(id)arg1;
- (void)setPrivilegeItemsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

