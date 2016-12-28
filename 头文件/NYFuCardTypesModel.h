//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYBaseObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NYFuCardType;

@interface NYFuCardTypesModel : NYBaseObject <NSCoding, NSCopying>
{
    NSArray *_items;
    NYFuCardType *_fullAbilityFuType;
    NYFuCardType *_randmoFuType;
    NYFuCardType *_fiveFuType;
    long long _userCardCount;
    long long _version;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long userCardCount; // @synthesize userCardCount=_userCardCount;
@property(retain, nonatomic) NYFuCardType *fiveFuType; // @synthesize fiveFuType=_fiveFuType;
@property(retain, nonatomic) NYFuCardType *randmoFuType; // @synthesize randmoFuType=_randmoFuType;
@property(retain, nonatomic) NYFuCardType *fullAbilityFuType; // @synthesize fullAbilityFuType=_fullAbilityFuType;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

