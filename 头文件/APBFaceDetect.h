//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APFaceDetectDelegate.h"

@class APBResponse, APFaceDetectBizFacade, NSMutableDictionary, NSString;

@interface APBFaceDetect : NSObject <APFaceDetectDelegate>
{
    _Bool _isBusy;
    _Bool _isClosed;
    _Bool _isKeepUploadPage;
    APFaceDetectBizFacade *_biz;
    NSMutableDictionary *_param;
    APBResponse *_response;
    CDUnknownBlockType _callBack;
    CDUnknownBlockType _execCallBack;
    NSString *_bisToken;
}

+ (id)getMetaInfo;
@property(nonatomic) _Bool isKeepUploadPage; // @synthesize isKeepUploadPage=_isKeepUploadPage;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(retain, nonatomic) NSString *bisToken; // @synthesize bisToken=_bisToken;
@property(copy, nonatomic) CDUnknownBlockType execCallBack; // @synthesize execCallBack=_execCallBack;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) APBResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) APFaceDetectBizFacade *biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (void)faceDetectVCStatus:(int)arg1;
- (void)faceDetectSuccessWithImageToken:(id)arg1;
- (void)faceDetectFailedWith:(int)arg1;
- (void)dealloc;
- (void)onFDVCDismissNotify;
- (void)exec:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)authWithRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

