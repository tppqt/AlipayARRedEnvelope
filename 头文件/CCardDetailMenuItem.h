//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEPhotoActionItem.h"

@class NSString;

@interface CCardDetailMenuItem : BEEPhotoActionItem
{
    _Bool _highlight;
    NSString *_itemTitle;
    SEL _itemAction;
}

@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(nonatomic) SEL itemAction; // @synthesize itemAction=_itemAction;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void).cxx_destruct;
- (id)init;

@end

