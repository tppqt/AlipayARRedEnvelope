//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMNetServerAddress : NSObject
{
    NSString *_ipStr;
    unsigned long long _port;
}

+ (id)serverAddressIp:(id)arg1 port:(unsigned long long)arg2;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ipStr; // @synthesize ipStr=_ipStr;
- (void).cxx_destruct;

@end

