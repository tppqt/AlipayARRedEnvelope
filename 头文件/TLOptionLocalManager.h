//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage;

@interface TLOptionLocalManager : NSObject
{
    APCustomStorage *_timelineStorage;
    id <TLOptionStoreDAOProtocol> _optionStoreDAO;
}

- (void).cxx_destruct;
- (id)clearOptionWithFeedId:(id)arg1 type:(id)arg2 userId:(id)arg3;
- (id)clearOptionWithFeedIdList:(id)arg1;
- (id)deleteOptionListWithout:(id)arg1;
- (id)selectFeedOptionedByUserId:(id)arg1 type:(id)arg2 feedId:(id)arg3;
- (_Bool)existOption:(id)arg1;
- (id)selectOptionListFromDate:(id)arg1 limit:(id)arg2 type:(id)arg3 feedId:(id)arg4;
- (id)selectOptionList:(id)arg1;
- (id)deleteOptionList:(id)arg1;
- (id)insertOptionList:(id)arg1;
- (id)init;

@end

