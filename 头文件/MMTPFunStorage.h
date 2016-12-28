//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMTPFunStorage : NSObject
{
    _Bool _isIpAndDns;
    _Bool _isTcpInfo;
    _Bool _isTreeStore;
    _Bool _isBuryPoint;
    _Bool _isQosLevel;
    _Bool _isTraffic;
    _Bool _isABTest;
    _Bool _isColdStart;
    _Bool _isBackgroundFetch;
    _Bool _isReportMsg;
    _Bool _isUseExceptionView;
}

+ (id)shareInstance;
@property _Bool isUseExceptionView; // @synthesize isUseExceptionView=_isUseExceptionView;
@property _Bool isReportMsg; // @synthesize isReportMsg=_isReportMsg;
@property _Bool isBackgroundFetch; // @synthesize isBackgroundFetch=_isBackgroundFetch;
@property _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
@property _Bool isABTest; // @synthesize isABTest=_isABTest;
@property _Bool isTraffic; // @synthesize isTraffic=_isTraffic;
@property _Bool isQosLevel; // @synthesize isQosLevel=_isQosLevel;
@property _Bool isBuryPoint; // @synthesize isBuryPoint=_isBuryPoint;
@property _Bool isTreeStore; // @synthesize isTreeStore=_isTreeStore;
@property _Bool isTcpInfo; // @synthesize isTcpInfo=_isTcpInfo;
@property _Bool isIpAndDns; // @synthesize isIpAndDns=_isIpAndDns;
- (void)storeNewFunDictToDisk:(id)arg1;
- (id)getNewFunDictFromDisk;
- (id)init;

@end

