//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface LifeHomeRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPublicId;
    _Bool _hasSourceId;
    _Bool _hasExtArgs;
    NSString *_publicId;
    NSString *_sourceId;
    NSString *_extArgs;
    NSMutableArray *_broadUnReadList;
    NSMutableArray *_syncUnReadList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *syncUnReadList; // @synthesize syncUnReadList=_syncUnReadList;
@property(retain, nonatomic) NSMutableArray *broadUnReadList; // @synthesize broadUnReadList=_broadUnReadList;
@property(retain, nonatomic) NSString *extArgs; // @synthesize extArgs=_extArgs;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(readonly) _Bool hasExtArgs; // @synthesize hasExtArgs=_hasExtArgs;
@property(readonly) _Bool hasSourceId; // @synthesize hasSourceId=_hasSourceId;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addSyncUnReadList:(id)arg1;
- (void)setSyncUnReadListArray:(id)arg1;
- (void)addBroadUnReadList:(id)arg1;
- (void)setBroadUnReadListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

