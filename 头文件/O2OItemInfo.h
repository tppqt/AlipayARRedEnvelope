//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface O2OItemInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasItemName;
    _Bool _hasItemType;
    _Bool _hasDiscount;
    _Bool _hasDiscountDesc;
    _Bool _hasItemTypeTitle;
    NSString *_itemName;
    NSString *_itemType;
    NSString *_discount;
    NSString *_discountDesc;
    NSString *_itemTypeTitle;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *itemTypeTitle; // @synthesize itemTypeTitle=_itemTypeTitle;
@property(retain, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly) _Bool hasItemTypeTitle; // @synthesize hasItemTypeTitle=_hasItemTypeTitle;
@property(readonly) _Bool hasDiscountDesc; // @synthesize hasDiscountDesc=_hasDiscountDesc;
@property(readonly) _Bool hasDiscount; // @synthesize hasDiscount=_hasDiscount;
@property(readonly) _Bool hasItemType; // @synthesize hasItemType=_hasItemType;
@property(readonly) _Bool hasItemName; // @synthesize hasItemName=_hasItemName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

