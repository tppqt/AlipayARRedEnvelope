//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFFundChannel;

@interface TFFundChannelManager : NSObject
{
    TFFundChannel *_fundChannel;
    NSString *_bizFundLimit;
}

@property(readonly, nonatomic) NSString *bizFundLimit; // @synthesize bizFundLimit=_bizFundLimit;
- (void).cxx_destruct;
- (id)displayBankCardChannelContent;
- (id)displayChannelNameToCard;
- (id)displayChannelNameToAccount;
- (id)displayChannelContentToCard;
- (id)displayChannelLimitAmountForToAccount;
- (id)displayChannelLimitToCard;
- (void)reloadDataWIthChannelDict:(id)arg1;
- (void)reloadDataWithBizChannelResp:(id)arg1;
@property(readonly, nonatomic) TFFundChannel *curFundChannel;

@end

