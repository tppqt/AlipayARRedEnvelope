//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface APChatMessage : NSObject <NSCopying>
{
    long long _localId;
    NSString *_clientMsgID;
    long long _msgID;
    long long _preMsgID;
    NSString *_fromUId;
    NSString *_fromLoginId;
    NSString *_toUId;
    NSString *_toLoginId;
    NSString *_toType;
    unsigned long long _side;
    unsigned long long _state;
    NSString *_hintMemo;
    NSString *_read;
    NSString *_recent;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_bizMemo;
    NSString *_bizType;
    NSString *_bizIcon;
    NSString *_appId;
    NSString *_link;
    NSDate *_createTime;
    NSString *_extendData;
    NSString *_egg;
    NSString *_contextData;
    long long _action;
    NSData *_resources;
    NSDictionary *_extendParams;
    NSString *_fillImageKey;
    NSString *_bizRemind;
    NSString *_msgIndex;
    NSString *_minVersion;
}

@property(retain, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) NSString *msgIndex; // @synthesize msgIndex=_msgIndex;
@property(retain, nonatomic) NSString *bizRemind; // @synthesize bizRemind=_bizRemind;
@property(retain, nonatomic) NSString *fillImageKey; // @synthesize fillImageKey=_fillImageKey;
@property(retain, nonatomic) NSDictionary *extendParams; // @synthesize extendParams=_extendParams;
@property(retain, nonatomic) NSData *resources; // @synthesize resources=_resources;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSString *egg; // @synthesize egg=_egg;
@property(retain, nonatomic) NSString *extendData; // @synthesize extendData=_extendData;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *bizIcon; // @synthesize bizIcon=_bizIcon;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizMemo; // @synthesize bizMemo=_bizMemo;
@property(retain, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSString *recent; // @synthesize recent=_recent;
@property(retain, nonatomic) NSString *read; // @synthesize read=_read;
@property(retain, nonatomic) NSString *hintMemo; // @synthesize hintMemo=_hintMemo;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long side; // @synthesize side=_side;
@property(retain, nonatomic) NSString *toType; // @synthesize toType=_toType;
@property(retain, nonatomic) NSString *toLoginId; // @synthesize toLoginId=_toLoginId;
@property(retain, nonatomic) NSString *toUId; // @synthesize toUId=_toUId;
@property(retain, nonatomic) NSString *fromLoginId; // @synthesize fromLoginId=_fromLoginId;
@property(retain, nonatomic) NSString *fromUId; // @synthesize fromUId=_fromUId;
@property(nonatomic) long long preMsgID; // @synthesize preMsgID=_preMsgID;
@property(nonatomic) long long msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(nonatomic) long long localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (id)initWithChatMessage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

