//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APNavItemView.h"

@class NSString;

@interface O2ONavItemView : APNavItemView
{
    id <O2ONavItemListener> _listener;
    NSString *_jumpUrl;
    NSString *_bizType;
}

@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) __weak id <O2ONavItemListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)onClicked;
- (id)initWithMenuItem:(id)arg1 listener:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 listener:(id)arg3;

@end

