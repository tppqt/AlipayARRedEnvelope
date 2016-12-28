//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface ButtonPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasMemo;
    _Bool _hasAppid;
    _Bool _hasExtra;
    NSString *_memo;
    NSString *_appid;
    NSString *_extra;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(readonly) _Bool hasExtra; // @synthesize hasExtra=_hasExtra;
@property(readonly) _Bool hasAppid; // @synthesize hasAppid=_hasAppid;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
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

