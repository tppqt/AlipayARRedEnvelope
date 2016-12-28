//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface GetZhiCodeResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDesc;
    _Bool _hasMiddleSegment;
    _Bool _hasFrontSegment;
    _Bool _hasBehindSegment;
    _Bool _hasTitle;
    _Bool _success;
    int _resultCode;
    NSString *_resultDesc;
    NSString *_middleSegment;
    NSString *_frontSegment;
    NSString *_behindSegment;
    NSString *_title;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *behindSegment; // @synthesize behindSegment=_behindSegment;
@property(retain, nonatomic) NSString *frontSegment; // @synthesize frontSegment=_frontSegment;
@property(retain, nonatomic) NSString *middleSegment; // @synthesize middleSegment=_middleSegment;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(readonly) _Bool hasBehindSegment; // @synthesize hasBehindSegment=_hasBehindSegment;
@property(readonly) _Bool hasFrontSegment; // @synthesize hasFrontSegment=_hasFrontSegment;
@property(readonly) _Bool hasMiddleSegment; // @synthesize hasMiddleSegment=_hasMiddleSegment;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

