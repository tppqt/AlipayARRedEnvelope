//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface ContactOperationSync : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasUserId;
    _Bool _hasDeviceId;
    _Bool _hasOrder;
    _Bool _hasScene;
    _Bool _hasNeedPull;
    _Bool _hasLifeSessionId;
    _Bool _hasSimple;
    _Bool _needPull;
    _Bool _simple;
    int _order;
    int _scene;
    NSString *_userId;
    NSString *_deviceId;
    NSMutableArray *_contacts;
    NSString *_lifeSessionId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool simple; // @synthesize simple=_simple;
@property(retain, nonatomic) NSString *lifeSessionId; // @synthesize lifeSessionId=_lifeSessionId;
@property(nonatomic) _Bool needPull; // @synthesize needPull=_needPull;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int order; // @synthesize order=_order;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly) _Bool hasSimple; // @synthesize hasSimple=_hasSimple;
@property(readonly) _Bool hasLifeSessionId; // @synthesize hasLifeSessionId=_hasLifeSessionId;
@property(readonly) _Bool hasNeedPull; // @synthesize hasNeedPull=_hasNeedPull;
@property(readonly) _Bool hasScene; // @synthesize hasScene=_hasScene;
@property(readonly) _Bool hasOrder; // @synthesize hasOrder=_hasOrder;
@property(readonly) _Bool hasDeviceId; // @synthesize hasDeviceId=_hasDeviceId;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addContacts:(id)arg1;
- (void)setContactsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

