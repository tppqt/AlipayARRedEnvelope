//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APHealthKitWrapperService.h"

@class NSString;

@interface APHealthKitWrapperServiceImpl : NSObject <APHealthKitWrapperService>
{
    _Bool _shouldForceNewVersion;
}

@property(nonatomic) _Bool shouldForceNewVersion; // @synthesize shouldForceNewVersion=_shouldForceNewVersion;
- (_Bool)isWalkingDonationGreaterThan2020;
- (_Bool)shouldForceBreakingNewVersion;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

