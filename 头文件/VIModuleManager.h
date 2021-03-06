//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet;

@interface VIModuleManager : NSObject
{
    NSDictionary *_moduleMap;
    NSSet *_moduleClasses;
    NSDictionary *_prerequisites;
}

+ (id)moduleWithModuleName:(id)arg1 moduleData:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *prerequisites; // @synthesize prerequisites=_prerequisites;
@property(retain, nonatomic) NSSet *moduleClasses; // @synthesize moduleClasses=_moduleClasses;
@property(retain, nonatomic) NSDictionary *moduleMap; // @synthesize moduleMap=_moduleMap;
- (void).cxx_destruct;
- (id)getPrerequisitesByParams:(id)arg1;
- (id)getClassNameByModuleName:(id)arg1;
- (id)init;

@end

