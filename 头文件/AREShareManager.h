//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REShare3in1ManagerDelegate.h"

@class AREShareImageCombineView, AREShareParams, NSString, REShare3In1Manager, UIView;

@interface AREShareManager : NSObject <REShare3in1ManagerDelegate>
{
    AREShareParams *_params;
    UIView *_containerView;
    CDUnknownBlockType _shareCompletion;
    NSString *_curShareChannel;
    AREShareImageCombineView *_tcSharePanel;
    REShare3In1Manager *_alipayShareHandler;
}

+ (void)hideShowingContainerView;
+ (id)viewForShowingShareView;
+ (void)shareWithParams:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) REShare3In1Manager *alipayShareHandler; // @synthesize alipayShareHandler=_alipayShareHandler;
@property(retain, nonatomic) AREShareImageCombineView *tcSharePanel; // @synthesize tcSharePanel=_tcSharePanel;
@property(retain, nonatomic) NSString *curShareChannel; // @synthesize curShareChannel=_curShareChannel;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AREShareParams *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)shareManagerDidBack:(id)arg1 contactVC:(id)arg2;
- (void)shareManagerDidCompletion:(id)arg1 contactVC:(id)arg2 sharedContact:(id)arg3 completionType:(unsigned long long)arg4;
- (void)shareImageComplete:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveSnapshotImageDelay;
- (void)shareToTencentChannel:(id)arg1;
- (id)zklShareData;
- (void)shareLinkToChannel:(id)arg1;
- (_Bool)isTencentChannel:(id)arg1;
- (_Bool)isAlipayChannel:(id)arg1;
- (void)shareCompletion:(id)arg1 userInfo:(id)arg2;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)shareContentToAplipay:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)dismissContainerView:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

