//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SUContactActionSheet;

@interface APContactMutableBindSheetVO : NSObject
{
    int _sheetID;
    CDUnknownBlockType _callback;
    NSArray *_accounts;
    NSString *_phoneNumber;
    SUContactActionSheet *_sheet;
}

@property(retain, nonatomic) SUContactActionSheet *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) int sheetID; // @synthesize sheetID=_sheetID;
- (void).cxx_destruct;

@end

