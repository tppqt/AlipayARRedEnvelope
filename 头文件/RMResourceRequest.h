//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface RMResourceRequest : NSObject
{
    _Bool _needUnZip;
    long long _type;
    NSString *_identity;
    NSString *_businessType;
    NSString *_bundle;
    NSString *_MD5;
    long long _downloadNetType;
    long long _downloadChannel;
    NSNumber *_expireTime;
    NSString *_cacheBusiness;
}

@property(retain, nonatomic) NSString *cacheBusiness; // @synthesize cacheBusiness=_cacheBusiness;
@property(retain, nonatomic) NSNumber *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long downloadChannel; // @synthesize downloadChannel=_downloadChannel;
@property(nonatomic) long long downloadNetType; // @synthesize downloadNetType=_downloadNetType;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(nonatomic) _Bool needUnZip; // @synthesize needUnZip=_needUnZip;
@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)requestString;
- (id)initWithIdentity:(id)arg1 type:(long long)arg2 businessType:(id)arg3;
- (id)initWithIdentity:(id)arg1 type:(long long)arg2 bundle:(id)arg3 businessType:(id)arg4;
- (id)init;

@end

