//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LIVETRADEPRODOnsiteBaseRes.h"

@class NSArray, NSString;

@interface LIVETRADEPRODFindLbsUserRes : LIVETRADEPRODOnsiteBaseRes
{
    NSString *_dynamicId;
    NSString *_timestamp;
    NSArray *_userList;
}

+ (Class)userListElementClass;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *dynamicId; // @synthesize dynamicId=_dynamicId;
- (void).cxx_destruct;

@end

