//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ARConfig : NSObject
{
    float _version;
    unsigned long long _type;
    NSDictionary *_recEventMap;
    NSDictionary *_renderConfig;
}

@property(retain, nonatomic) NSDictionary *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *recEventMap; // @synthesize recEventMap=_recEventMap;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)mapType:(id)arg1;
- (id)initWithParam:(id)arg1;

@end

