//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFFlagElement : NSObject
{
    int _type;
    NSString *_content;
    long long _begin;
    long long _end;
}

@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long begin; // @synthesize begin=_begin;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

