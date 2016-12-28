//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface AccountSettingItemPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasAccoutSettingItemKey;
    _Bool _hasAccoutSettingItemValue;
    _Bool _success;
    NSString *_accoutSettingItemKey;
    NSString *_accoutSettingItemValue;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *accoutSettingItemValue; // @synthesize accoutSettingItemValue=_accoutSettingItemValue;
@property(retain, nonatomic) NSString *accoutSettingItemKey; // @synthesize accoutSettingItemKey=_accoutSettingItemKey;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasAccoutSettingItemValue; // @synthesize hasAccoutSettingItemValue=_hasAccoutSettingItemValue;
@property(readonly) _Bool hasAccoutSettingItemKey; // @synthesize hasAccoutSettingItemKey=_hasAccoutSettingItemKey;
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

