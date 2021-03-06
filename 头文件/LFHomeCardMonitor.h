//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface LFHomeCardMonitor : NSObject
{
    NSMutableArray *_exposureCards;
    NSMutableSet *_historyCardIds;
}

@property(retain, nonatomic) NSMutableSet *historyCardIds; // @synthesize historyCardIds=_historyCardIds;
@property(retain, nonatomic) NSMutableArray *exposureCards; // @synthesize exposureCards=_exposureCards;
- (void).cxx_destruct;
- (id)convertToStringFromDictionary:(id)arg1;
- (void)viewController:(id)arg1 didDisappear:(_Bool)arg2;
- (void)addExposureCards:(id)arg1;
- (id)init;

@end

