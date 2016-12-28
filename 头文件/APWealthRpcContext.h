//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APWealthRpcContext : NSObject
{
    _Bool repeat;
    _Bool showMBProgressHUD;
    _Bool showNetErrorView;
    _Bool showToast;
    _Bool rpcCancelable;
    _Bool _backgroundMode;
    SEL repeatAction;
    NSMutableDictionary *businessDict;
    id _actionDelegate;
}

@property(nonatomic) _Bool backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) __weak id actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSMutableDictionary *businessDict; // @synthesize businessDict;
@property(nonatomic) _Bool rpcCancelable; // @synthesize rpcCancelable;
@property(nonatomic) _Bool showToast; // @synthesize showToast;
@property(nonatomic) _Bool showNetErrorView; // @synthesize showNetErrorView;
@property(nonatomic) _Bool showMBProgressHUD; // @synthesize showMBProgressHUD;
@property(nonatomic) SEL repeatAction; // @synthesize repeatAction;
@property(nonatomic) _Bool repeat; // @synthesize repeat;
- (void).cxx_destruct;
- (id)init;

@end

