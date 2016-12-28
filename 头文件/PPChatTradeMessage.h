//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessage.h"

#import "NSCoding.h"
#import "PPChatActionSource.h"

@class NSDictionary, NSString;

@interface PPChatTradeMessage : PPChatMessage <NSCoding, PPChatActionSource>
{
    _Bool _isIncome;
    _Bool _showsAvatar;
    _Bool _isFinished;
    NSString *_tradeNumber;
    NSString *_name;
    NSString *_amount;
    NSString *_date;
    NSString *_tradeStatusText;
    NSString *_iconUrl;
    NSString *_actionType;
    NSString *_actionParam;
    NSString *_createTime;
    NSString *_gmtCreate;
    NSString *_consumeStatus;
    NSString *_emotionId;
    NSDictionary *_extInfo;
    NSString *_voiceMemoUrl;
    NSString *_textMemo;
    NSString *_extInfoString;
}

@property(retain, nonatomic) NSString *extInfoString; // @synthesize extInfoString=_extInfoString;
@property(retain, nonatomic) NSString *textMemo; // @synthesize textMemo=_textMemo;
@property(retain, nonatomic) NSString *voiceMemoUrl; // @synthesize voiceMemoUrl=_voiceMemoUrl;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *emotionId; // @synthesize emotionId=_emotionId;
@property(retain, nonatomic) NSString *consumeStatus; // @synthesize consumeStatus=_consumeStatus;
@property(retain, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool showsAvatar; // @synthesize showsAvatar=_showsAvatar;
@property(nonatomic) _Bool isIncome; // @synthesize isIncome=_isIncome;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *tradeStatusText; // @synthesize tradeStatusText=_tradeStatusText;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *tradeNumber; // @synthesize tradeNumber=_tradeNumber;
- (void).cxx_destruct;
- (id)friendlyDateString;
- (id)dateString;
- (id)titleForHome;
@property(readonly, nonatomic) _Bool isSuccess;
- (void)merge:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

