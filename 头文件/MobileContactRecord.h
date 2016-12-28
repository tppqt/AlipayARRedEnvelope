//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MobileContactRecord : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasName;
    _Bool _hasMobile;
    _Bool _hasMemo;
    _Bool _hasRemove;
    _Bool _remove;
    NSString *_name;
    NSString *_mobile;
    NSString *_memo;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool remove; // @synthesize remove=_remove;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) _Bool hasRemove; // @synthesize hasRemove=_hasRemove;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
@property(readonly) _Bool hasMobile; // @synthesize hasMobile=_hasMobile;
@property(readonly) _Bool hasName; // @synthesize hasName=_hasName;
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

