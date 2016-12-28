//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCardBaseViewController<CCardUpdateProtocol>, NSString;

@interface CCardUpdateManager : NSObject
{
    NSString *_syncBiz;
    CCardBaseViewController<CCardUpdateProtocol> *_cardViewController;
}

+ (void)postCCardChangedNotification:(id)arg1 state:(int)arg2 biz:(id)arg3 userInfo:(id)arg4;
@property(nonatomic) __weak CCardBaseViewController<CCardUpdateProtocol> *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(retain, nonatomic) NSString *syncBiz; // @synthesize syncBiz=_syncBiz;
- (void).cxx_destruct;
- (_Bool)canHandle:(id)arg1;
- (void)updateCardWithChangedCardList:(id)arg1 state:(int)arg2 biz:(id)arg3;
- (void)responseCardSDKCardChangedNotification:(id)arg1;
- (void)responseUpdateNotification:(id)arg1;
- (_Bool)removeUpdateNotificationName:(id)arg1;
- (_Bool)addUpdateNotificationName:(id)arg1;
- (void)updateManager:(id)arg1 finishUpdateCards:(id)arg2 param:(id)arg3;
- (void)updateManager:(id)arg1 updatingCard:(id)arg2 param:(id)arg3;
- (void)enumerateCardsWithBlock:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setupUpdateManagerWithDic:(id)arg1;
- (void)dealloc;
- (id)initWithCardViewController:(id)arg1;

@end

