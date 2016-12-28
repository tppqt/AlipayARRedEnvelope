//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface RpcResponse : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultStatus;
    int _resultStatus;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int resultStatus; // @synthesize resultStatus=_resultStatus;
@property(readonly) _Bool hasResultStatus; // @synthesize hasResultStatus=_hasResultStatus;
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

