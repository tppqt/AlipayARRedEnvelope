//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDynamicDeploymentBaseInteraction.h"

@class NSArray, NSString;

@interface APKoubeiResourceInteraction : APDynamicDeploymentBaseInteraction
{
    NSString *_bizId;
    NSArray *_params;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (void)checkResponseCompleteness:(id)arg1;
- (id)bizIdForResId:(id)arg1;
- (void)handleResponseException:(id)arg1 error:(id)arg2;
- (void)handleResponseResult:(id)arg1;
- (void)responseInfo:(id)arg1 error:(id)arg2;
- (void)setRequest:(id)arg1;
- (void)getResFromNet:(id)arg1 business:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

