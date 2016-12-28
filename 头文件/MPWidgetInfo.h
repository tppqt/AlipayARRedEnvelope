//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MPWidgetInfo : NSObject
{
    _Bool _bNeedAck;
    NSString *_widgetId;
    NSString *_style;
    NSDictionary *_styleCountMap;
    unsigned long long _temporaryBadgeNumber;
    unsigned long long _persistentBadgeNumber;
}

@property(nonatomic) unsigned long long persistentBadgeNumber; // @synthesize persistentBadgeNumber=_persistentBadgeNumber;
@property(nonatomic) unsigned long long temporaryBadgeNumber; // @synthesize temporaryBadgeNumber=_temporaryBadgeNumber;
@property(nonatomic) _Bool bNeedAck; // @synthesize bNeedAck=_bNeedAck;
@property(retain, nonatomic) NSDictionary *styleCountMap; // @synthesize styleCountMap=_styleCountMap;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
- (void).cxx_destruct;
- (id)initWithId:(id)arg1;

@end

