//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WKTableModel : NSObject
{
    _Bool _isShowDrapRefresh;
    _Bool _hasMore;
    NSArray *_sectionArray;
    NSString *_headerTemplateId;
    NSObject *_headerData;
    NSString *_footerTemplateId;
    NSObject *_footerData;
}

@property(retain, nonatomic) NSObject *footerData; // @synthesize footerData=_footerData;
@property(retain, nonatomic) NSString *footerTemplateId; // @synthesize footerTemplateId=_footerTemplateId;
@property(retain, nonatomic) NSObject *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSString *headerTemplateId; // @synthesize headerTemplateId=_headerTemplateId;
@property(retain, nonatomic) NSArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isShowDrapRefresh; // @synthesize isShowDrapRefresh=_isShowDrapRefresh;
- (void).cxx_destruct;

@end

