//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRCardManagementViewController.h"

@class AssetBankCardItem, WEALTHPasswordTokenCreator;

@interface MBankManagementViewController : CCRCardManagementViewController
{
    AssetBankCardItem *_bankCard;
    WEALTHPasswordTokenCreator *_tokenCreator;
    _Bool _isCreditCardDelete;
    _Bool _supIcDelete;
}

- (void).cxx_destruct;
- (void)removeBankCardWithReq;
- (void)removeBankCardWithVIEngine;
- (void)gotoSuccessView;
- (void)doRemoveCard;
- (id)initWithBankCard:(id)arg1 pswTokenCreator:(id)arg2 isCreditCardDelete:(_Bool)arg3 supIcDelete:(_Bool)arg4;

@end

