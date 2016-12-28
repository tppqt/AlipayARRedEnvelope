//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface APMCacheItem : NSObject
{
    int _modifyTime;
    int _accessTime;
    unsigned long long _record_id;
    NSString *_key;
    NSString *_aliasKey;
    NSData *_value;
    NSString *_filename;
    unsigned long long _size;
    unsigned long long _type;
    NSString *_business;
    unsigned long long _tag;
    NSString *_info;
}

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int accessTime; // @synthesize accessTime=_accessTime;
@property(nonatomic) int modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *aliasKey; // @synthesize aliasKey=_aliasKey;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long record_id; // @synthesize record_id=_record_id;
- (void).cxx_destruct;

@end

