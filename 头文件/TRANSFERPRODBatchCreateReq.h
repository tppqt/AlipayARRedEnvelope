//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TRANSFERPRODBatchCreateReq : NSObject
{
    NSString *_groupId;
    NSString *_batchType;
    NSString *_batchMemo;
    NSString *_payAmountSingle;
    NSString *_payAmountTotal;
    NSString *_showitemsTotal;
    NSString *_realItemsTotal;
    NSString *_channel;
    NSArray *_userList;
}

+ (Class)userListElementClass;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *realItemsTotal; // @synthesize realItemsTotal=_realItemsTotal;
@property(retain, nonatomic) NSString *showitemsTotal; // @synthesize showitemsTotal=_showitemsTotal;
@property(retain, nonatomic) NSString *payAmountTotal; // @synthesize payAmountTotal=_payAmountTotal;
@property(retain, nonatomic) NSString *payAmountSingle; // @synthesize payAmountSingle=_payAmountSingle;
@property(retain, nonatomic) NSString *batchMemo; // @synthesize batchMemo=_batchMemo;
@property(retain, nonatomic) NSString *batchType; // @synthesize batchType=_batchType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

