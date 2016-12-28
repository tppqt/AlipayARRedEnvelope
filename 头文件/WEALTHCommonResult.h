//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHToString.h"

#import "NSCoding.h"

@class NSArray, NSString, WEALTHPasswordTokenCreator;

@interface WEALTHCommonResult : WEALTHToString <NSCoding>
{
    _Bool _success;
    int _showType;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSArray *_weavingList;
    WEALTHPasswordTokenCreator *_passwordTokenCreator;
    NSString *_followAction;
}

+ (Class)weavingListElementClass;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) WEALTHPasswordTokenCreator *passwordTokenCreator; // @synthesize passwordTokenCreator=_passwordTokenCreator;
@property(retain, nonatomic) NSArray *weavingList; // @synthesize weavingList=_weavingList;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

