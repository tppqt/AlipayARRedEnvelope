//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppLoadChecker : NSObject
{
}

+ (id)sharedInstance;
- (void)p_syncToDataBaseByDictionary:(id)arg1;
- (id)p_getAllCheckeObjs;
- (void)p_removeAllCheckerObjs;
- (void)p_removeCheckerObj:(id)arg1;
- (void)p_addCheckerObj:(id)arg1;
- (_Bool)checkAppByName:(id)arg1;
- (void)unregisterAllCheckers;
- (void)unregisterCheckerByClassName:(id)arg1 RedirectURL:(id)arg2;
- (void)registerCheckerByClassName:(id)arg1 RedirectURLStr:(id)arg2;

@end

