//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIModule.h"

@class NSArray, NSString;

@interface VIMenuModule : VIModule
{
    NSString *_menuTitle;
    NSArray *_menuItems;
    NSArray *_extMenuItems;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray *extMenuItems; // @synthesize extMenuItems=_extMenuItems;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
- (void).cxx_destruct;
- (_Bool)isLiving;
- (void)start;

@end

