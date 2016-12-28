//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPSpaceInfo, NSDictionary, NSMutableDictionary, NSString;

@interface PromotionDataSource : NSObject
{
    _Bool _isRPCInitialSpaceInfoFinished;
    NSMutableDictionary *_serverDataDic;
    CDPSpaceInfo *_localSpaceInfo;
    NSDictionary *_blackList;
    NSMutableDictionary *_originDic;
    NSMutableDictionary *_opLogIdDic;
    NSString *_cacheUserId;
    NSMutableDictionary *_adCodeDic;
}

+ (void)notifyForInitFinish;
+ (void)notifyForSpaceInfos:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *adCodeDic; // @synthesize adCodeDic=_adCodeDic;
@property(nonatomic) _Bool isRPCInitialSpaceInfoFinished; // @synthesize isRPCInitialSpaceInfoFinished=_isRPCInitialSpaceInfoFinished;
@property(retain, nonatomic) NSString *cacheUserId; // @synthesize cacheUserId=_cacheUserId;
@property(retain, nonatomic) NSMutableDictionary *opLogIdDic; // @synthesize opLogIdDic=_opLogIdDic;
@property(retain, nonatomic) NSMutableDictionary *originDic; // @synthesize originDic=_originDic;
@property(retain, nonatomic) NSDictionary *blackList; // @synthesize blackList=_blackList;
@property(retain, nonatomic) CDPSpaceInfo *localSpaceInfo; // @synthesize localSpaceInfo=_localSpaceInfo;
@property(retain, nonatomic) NSMutableDictionary *serverDataDic; // @synthesize serverDataDic=_serverDataDic;
- (void).cxx_destruct;
- (id)getCacheSpaceInfoBySpaceCode:(id)arg1;
- (id)getRPCMergeExtInfo:(id)arg1 spaceCodes:(id)arg2;
- (_Bool)isRPCMerge:(id)arg1;
- (id)getCacheAdCodeWithSpaceCode:(id)arg1;
- (void)cacheAdCode:(id)arg1 spaceCode:(id)arg2;
- (void)specailLogForCheck:(id)arg1 tag:(id)arg2;
- (void)remoteAdSaveLog:(id)arg1 spaceObjectInfo:(id)arg2;
- (_Bool)rpcInitIsFinished;
- (void)rpcInitFinished:(_Bool)arg1;
- (_Bool)isInFloatTopBlackList:(id)arg1 viewControllerName:(id)arg2;
- (void)resetBlackList:(id)arg1;
- (void)initBlackList;
- (void)setOpLogId:(long long)arg1 globalOpLogId:(long long)arg2;
- (long long)getGlobalOpLogId;
- (long long)getUserOpLogId;
- (_Bool)hasOpLogId;
- (id)arrayToDic:(id)arg1;
- (void)removeLocalData:(id)arg1;
- (void)addLocalData:(id)arg1;
- (void)preloadPIC:(id)arg1;
- (void)setVCOriginY:(double)arg1 viewId:(id)arg2;
- (id)getVCOriginY:(id)arg1;
- (_Bool)needReplaceSpaceInfo:(id)arg1 withSpaceInfo:(id)arg2;
- (_Bool)isSpaceInfo:(id)arg1 InviewId:(id)arg2 appId:(id)arg3 h5ViewId:(id)arg4;
- (void)getSpaceInfo:(id)arg1 appId:(id)arg2 h5ViewId:(id)arg3 controller:(id)arg4 completionOnCallQueue:(CDUnknownBlockType)arg5;
- (id)deleteDefaultSpaceObjectIfNeed:(id)arg1;
- (id)getUsefulSpaceInfoFrom:(id)arg1 needFilter:(_Bool)arg2 controller:(id)arg3;
- (void)getUsefulSpaceInfosFrom:(id)arg1 controller:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSpaceInfoBySpaceCode:(id)arg1 needFilterInvalidSpaceInfo:(_Bool)arg2 controller:(id)arg3 completionOnCallQueue:(CDUnknownBlockType)arg4;
- (void)addCDPSpaceQueryResult:(id)arg1;
- (void)deleteObjectListInfos:(id)arg1 needNoti:(_Bool)arg2;
- (void)deleteObjectListIn:(id)arg1 needNoti:(_Bool)arg2;
- (void)updateSpaceInfoWithObjectList:(id)arg1 needNoti:(_Bool)arg2 needRemoteLog:(_Bool)arg3;
- (void)deleteSpaceInfo:(id)arg1;
- (void)updateSpaceInfos:(id)arg1 needNoti:(_Bool)arg2;
- (void)updateCacheData:(id)arg1;
- (void)updateSpaceInfoObject:(id)arg1 needNoti:(_Bool)arg2;
- (void)updateSpaceInfo:(id)arg1 needNoti:(_Bool)arg2 needRemoteLog:(_Bool)arg3;
- (void)cacheSpaceInfos:(id)arg1;
- (void)initDataSourceIfNeeded;
- (id)getCacheUserId;
- (void)logout;
- (void)start;

@end

