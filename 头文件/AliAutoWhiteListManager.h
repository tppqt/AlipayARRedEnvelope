//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AliAutoWhiteListManager : NSObject
{
    NSArray *_whiteListArr;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *whiteListArr; // @synthesize whiteListArr=_whiteListArr;
- (void).cxx_destruct;
- (id)readData;
- (_Bool)saveData:(id)arg1;
- (_Bool)canAutologin:(id)arg1;
- (id)domainForUrl:(id)arg1;
- (_Bool)saveWhiteList:(id)arg1;
- (id)readWhiteList;

@end

