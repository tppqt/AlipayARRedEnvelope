//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APShareServiceCardControl, NSDictionary, NSString, REDataEngine, UIImage, UIViewController;

@interface REShare3In1Manager : NSObject
{
    NSString *_crowdNo;
    NSString *_nodeId;
    long long _count;
    NSString *_prodCode;
    NSString *_cardTitle;
    NSString *_shareChannel;
    NSString *_remark;
    NSString *_prevBiz;
    UIImage *_alertimage;
    NSString *_shareFrom;
    UIViewController *_contactVC;
    NSDictionary *_options;
    APShareServiceCardControl *_cardControl;
    REDataEngine *_dataEngine;
    id <REShare3in1ManagerDelegate> _delegate;
}

+ (id)shareToContact:(id)arg1 options:(id)arg2 delegate:(id)arg3;
+ (id)share3In1WithOptions:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <REShare3in1ManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) REDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) APShareServiceCardControl *cardControl; // @synthesize cardControl=_cardControl;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) UIViewController *contactVC; // @synthesize contactVC=_contactVC;
@property(readonly, nonatomic) NSString *shareFrom; // @synthesize shareFrom=_shareFrom;
@property(readonly, nonatomic) UIImage *alertimage; // @synthesize alertimage=_alertimage;
@property(readonly, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(readonly, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(readonly, nonatomic) NSString *shareChannel; // @synthesize shareChannel=_shareChannel;
@property(readonly, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(readonly, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(readonly, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
- (void).cxx_destruct;
- (void)handleCompletion:(unsigned long long)arg1 contact:(id)arg2;
- (void)mockMessageToChannel:(id)arg1 withResult:(id)arg2;
- (void)beginShare;
- (id)buildRequestByContact:(id)arg1;
- (void)shareToContactRPC:(id)arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

