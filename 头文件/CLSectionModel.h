//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CLSectionModel : NSObject
{
    NSString *_headerStr;
    NSString *_footerStr;
    NSMutableArray *_allRows;
}

@property(retain, nonatomic) NSMutableArray *allRows; // @synthesize allRows=_allRows;
@property(retain, nonatomic) NSString *footerStr; // @synthesize footerStr=_footerStr;
@property(retain, nonatomic) NSString *headerStr; // @synthesize headerStr=_headerStr;
- (void).cxx_destruct;
- (id)init;

@end

