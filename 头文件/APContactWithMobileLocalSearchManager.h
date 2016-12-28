//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSocialSearchProtocol.h"

@class NSOperationQueue, NSString;

@interface APContactWithMobileLocalSearchManager : NSObject <APSocialSearchProtocol>
{
    NSOperationQueue *_searchQueue;
    NSString *_defaultPath;
}

+ (void)fillMobileMatchWithAPContactInfo:(id)arg1 matchField:(id)arg2 searchText:(id)arg3 searchPhone:(_Bool)arg4;
@property(retain, nonatomic) NSString *defaultPath; // @synthesize defaultPath=_defaultPath;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
- (void).cxx_destruct;
- (id)search:(id)arg1 owner:(id)arg2 params:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

