//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPProfileSettingItem.h"

@interface SPProfileSettingPushItem : SPProfileSettingItem
{
    _Bool _isPushed;
    id _rawData;
    CDUnknownBlockType _push_block;
}

@property(copy, nonatomic) CDUnknownBlockType push_block; // @synthesize push_block=_push_block;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(retain, nonatomic) id rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;

@end

