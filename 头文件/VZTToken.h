//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VZTToken : NSObject
{
    NSString *_token;
    unsigned long long _type;
    struct _NSRange _range;
}

@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 type:(unsigned long long)arg2 range:(struct _NSRange)arg3;

@end

