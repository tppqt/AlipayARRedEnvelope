//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, O2OSearchHotword;

@interface O2OSearchHotwordsResponse : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultCode;
    _Bool _hasSuccess;
    _Bool _hasResultDesc;
    _Bool _hasRecommendId;
    _Bool _hasSearchText;
    _Bool _hasCityId;
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_recommendId;
    O2OSearchHotword *_searchText;
    NSMutableArray *_searchHotwords;
    NSString *_cityId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSMutableArray *searchHotwords; // @synthesize searchHotwords=_searchHotwords;
@property(retain, nonatomic) O2OSearchHotword *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSString *recommendId; // @synthesize recommendId=_recommendId;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(readonly) _Bool hasCityId; // @synthesize hasCityId=_hasCityId;
@property(readonly) _Bool hasSearchText; // @synthesize hasSearchText=_hasSearchText;
@property(readonly) _Bool hasRecommendId; // @synthesize hasRecommendId=_hasRecommendId;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addSearchHotwords:(id)arg1;
- (void)setSearchHotwordsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

