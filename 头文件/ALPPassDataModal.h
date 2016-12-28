//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KABAOPRODPassManager, KABAOPRODPassManagerV95, KABAOPRODPresentManager, KABAOPRODPresentManagerV96;

@interface ALPPassDataModal : NSObject
{
    KABAOPRODPassManager *_passManger;
    KABAOPRODPresentManager *_presentManger;
    KABAOPRODPassManagerV95 *_passV95Manger;
    KABAOPRODPresentManagerV96 *_presentV96Manger;
}

+ (id)sharedModal;
@property(retain, nonatomic) KABAOPRODPresentManagerV96 *presentV96Manger; // @synthesize presentV96Manger=_presentV96Manger;
@property(retain, nonatomic) KABAOPRODPassManagerV95 *passV95Manger; // @synthesize passV95Manger=_passV95Manger;
@property(retain, nonatomic) KABAOPRODPresentManager *presentManger; // @synthesize presentManger=_presentManger;
@property(retain, nonatomic) KABAOPRODPassManager *passManger; // @synthesize passManger=_passManger;
- (void).cxx_destruct;
- (void)excuteRPCWithRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPassdQRCode:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)updateHandle:(id)arg1 goToMainList:(_Bool)arg2;
- (_Bool)updateHandle:(id)arg1;
- (void)exchange:(id)arg1 longitude:(id)arg2 latitude:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)deletePassWithPassId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)handleRPCFailure:(id)arg1 desc:(id)arg2 showToast:(_Bool)arg3 mainView:(id)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleRPCFailure:(id)arg1 desc:(id)arg2 showToast:(_Bool)arg3 mainView:(id)arg4 duration:(double)arg5;
- (void)queryPresentPassStatus:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 showNetError:(_Bool)arg3;
- (void)applyPresentPass:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 showNetError:(_Bool)arg3;
- (void)presentPassNew:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)presentPass:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPresentMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)queryPassListByChannelId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addPass:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getDynamicId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)getShareInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)deleteUserPass:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 showNetError:(_Bool)arg3;
- (void)queryMsgPassInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 showNetError:(_Bool)arg3;
- (id)init;

@end

