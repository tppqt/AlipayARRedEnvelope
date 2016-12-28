//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSNumber, aluCountryInfo;

@interface aluAllCountries : NSObject <NSCoding>
{
    NSNumber *_updateTime;
    aluCountryInfo *_defaultCountry;
    NSArray *_sectionList;
    NSArray *_countryList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *countryList; // @synthesize countryList=_countryList;
@property(retain, nonatomic) NSArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) aluCountryInfo *defaultCountry; // @synthesize defaultCountry=_defaultCountry;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)saveToLocal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)getCountryInfoByCode:(id)arg1;
- (void)loadPreset;
- (void)load;

@end

