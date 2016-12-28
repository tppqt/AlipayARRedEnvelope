//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface ALPPassDQRService : NSObject
{
    _Bool _launching;
    NSString *_currentDQRCode;
    NSString *_passId;
    double _timeInterval;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(nonatomic) _Bool launching; // @synthesize launching=_launching;
@property(retain, nonatomic) NSString *currentDQRCode; // @synthesize currentDQRCode=_currentDQRCode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)updateDQRCode;
- (void)fetchLocalDQRCod;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)startWithPassId:(id)arg1 timeInterval:(float)arg2;

@end

