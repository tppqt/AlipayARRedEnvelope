//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, VIModule;

@interface VITaskContext : NSObject
{
    NSString *_verifyId;
    NSString *_token;
    NSDictionary *_envInfo;
    NSDictionary *_extParams;
    NSString *_bizRequestData;
    VIModule *_currentModule;
}

@property(nonatomic) __weak VIModule *currentModule; // @synthesize currentModule=_currentModule;
@property(retain, nonatomic) NSString *bizRequestData; // @synthesize bizRequestData=_bizRequestData;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSDictionary *envInfo; // @synthesize envInfo=_envInfo;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
- (void).cxx_destruct;

@end

