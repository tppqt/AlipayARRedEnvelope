//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ERTSimpleCurrencyModel : NSObject
{
    _Bool _local;
    _Bool _supportAlipay;
    NSString *_iconUrl;
    NSString *_chnName;
    NSString *_engAbbr;
    NSString *_pinyinName;
    NSString *_chnAlias;
    NSString *_pinyinAbbr;
    NSString *_firstLetter;
}

@property(retain, nonatomic) NSString *firstLetter; // @synthesize firstLetter=_firstLetter;
@property(retain, nonatomic) NSString *pinyinAbbr; // @synthesize pinyinAbbr=_pinyinAbbr;
@property(retain, nonatomic) NSString *chnAlias; // @synthesize chnAlias=_chnAlias;
@property(retain, nonatomic) NSString *pinyinName; // @synthesize pinyinName=_pinyinName;
@property(nonatomic, getter=isSupportAlipay) _Bool supportAlipay; // @synthesize supportAlipay=_supportAlipay;
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(retain, nonatomic) NSString *engAbbr; // @synthesize engAbbr=_engAbbr;
@property(retain, nonatomic) NSString *chnName; // @synthesize chnName=_chnName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

