//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMConfigUpdateProtocol.h"

@class NSString;

@interface APXMMusicSetting : NSObject <APMConfigUpdateProtocol>
{
    _Bool _enableATS;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableATS; // @synthesize enableATS=_enableATS;
- (void)configDidUpdate:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

