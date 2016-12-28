//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APMessageWindow, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface APMessageCenter : NSObject
{
    id <APMessage> _current;
    NSMutableArray *_normalMessages;
    NSMutableDictionary *_msgMap;
    NSRecursiveLock *_msgLock;
    NSRecursiveLock *_mapLock;
    APMessageWindow *_msgWindow;
}

+ (id)defaultCenter;
@property(retain, nonatomic) APMessageWindow *msgWindow; // @synthesize msgWindow=_msgWindow;
@property(retain, nonatomic) NSRecursiveLock *mapLock; // @synthesize mapLock=_mapLock;
@property(retain, nonatomic) NSRecursiveLock *msgLock; // @synthesize msgLock=_msgLock;
@property(retain, nonatomic) NSMutableDictionary *msgMap; // @synthesize msgMap=_msgMap;
@property(retain, nonatomic) NSMutableArray *normalMessages; // @synthesize normalMessages=_normalMessages;
@property(retain, nonatomic) id <APMessage> current; // @synthesize current=_current;
- (void).cxx_destruct;
- (_Bool)isInAppMessage:(id)arg1;
- (void)destroyMsgWindow;
- (void)onDestroyMessage:(id)arg1;
- (void)handleResponseForMessageId:(id)arg1 actionId:(id)arg2;
- (void)onNotificationCenterDidReceiveResponse:(id)arg1;
- (id)messages;
- (id)currentMessage;
- (id)dismissMessageWithIdentifier:(id)arg1;
- (void)presentMessage:(id)arg1;
- (_Bool)enqueueMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

