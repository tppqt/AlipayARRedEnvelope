//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADyncRouterResponse.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface SADyncRouterWebResponse : SADyncRouterResponse <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
}

@property(nonatomic) __weak UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (_Bool)urlEncodeSwitch;
- (void)performAction;
- (_Bool)canPerformAction;
- (id)initWithRpcResponse:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

