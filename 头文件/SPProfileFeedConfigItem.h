//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SPProfileFeedConfigItem : NSObject <NSCoding>
{
    NSString *_itemCode;
    NSString *_itemName;
    NSString *_itemBizType;
}

@property(retain, nonatomic) NSString *itemBizType; // @synthesize itemBizType=_itemBizType;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemCode; // @synthesize itemCode=_itemCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSceneVO:(id)arg1;

@end

