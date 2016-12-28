//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APLogAutoPageStatus, APLogFormatter, APLogTrackClickModel, NSMutableArray, NSMutableDictionary;

@interface APLogAutoContext : NSObject
{
    struct _opaque_pthread_rwlock_t _lock;
    NSMutableDictionary *_pageInfos;
    NSMutableArray *_spmViewIds;
    APLogAutoPageStatus *_pageStatus;
    APLogFormatter *_formatter;
    NSMutableDictionary *_updatePageIds;
    NSMutableDictionary *_updateEntityIds;
    NSMutableDictionary *_updateParamStrings;
    APLogTrackClickModel *_clickModel;
    NSMutableDictionary *_backgroundViewInfos;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *backgroundViewInfos; // @synthesize backgroundViewInfos=_backgroundViewInfos;
@property(retain, nonatomic) APLogTrackClickModel *clickModel; // @synthesize clickModel=_clickModel;
@property(retain, nonatomic) NSMutableDictionary *updateParamStrings; // @synthesize updateParamStrings=_updateParamStrings;
@property(retain, nonatomic) NSMutableDictionary *updateEntityIds; // @synthesize updateEntityIds=_updateEntityIds;
@property(retain, nonatomic) NSMutableDictionary *updatePageIds; // @synthesize updatePageIds=_updatePageIds;
@property(retain, nonatomic) APLogFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) APLogAutoPageStatus *pageStatus; // @synthesize pageStatus=_pageStatus;
- (void).cxx_destruct;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (id)pageInfoForKey:(id)arg1;
- (void)removePageInfoForKey:(id)arg1;
- (void)setPageInfo:(id)arg1 forKey:(id)arg2;
- (void)checkWeakPageInfo;
- (id)init;
- (void)dealloc;

@end

