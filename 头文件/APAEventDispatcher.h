//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APAEventDispatcher : NSObject
{
    NSMutableDictionary *_eventRepository;
}

@property(retain, nonatomic) NSMutableDictionary *eventRepository; // @synthesize eventRepository=_eventRepository;
- (void).cxx_destruct;
- (void)dispatcherEvent:(id)arg1 eventInfo:(id)arg2 inViewController:(id)arg3;
- (_Bool)canHandleEvent:(id)arg1;
- (id)eventHandlerForEventName:(id)arg1;
- (void)unregisterEventHandler:(id)arg1;
- (void)registerEventHandler:(id)arg1 eventHanlder:(id)arg2;
- (void)registerDefaultEventHandler;
- (id)init;

@end

