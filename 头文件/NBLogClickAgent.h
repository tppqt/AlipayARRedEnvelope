//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NBLogClickAgentProtocol.h"

@class NSString;

@interface NBLogClickAgent : NSObject <NBLogClickAgentProtocol>
{
}

- (id)extraClickParamForPSDContext:(id)arg1 trackContext:(id)arg2;
- (void)context:(id)arg1 didClickWithData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

