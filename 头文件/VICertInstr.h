//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VICertInstrProtocol.h"

@class NSString;

@interface VICertInstr : NSObject <VICertInstrProtocol>
{
    _Bool _success;
    NSString *_version;
    NSString *_service;
    NSString *_userid;
    NSString *_refercode;
    NSString *_challenge;
    NSString *_result;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) NSString *refercode; // @synthesize refercode=_refercode;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)monitorAPICallWithName:(id)arg1 duration:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)executeWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)execute;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

