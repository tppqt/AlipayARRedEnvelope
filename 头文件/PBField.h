//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, PBAppendableArray, PBArray;

@interface PBField : NSObject
{
    PBAppendableArray *_varintArray;
    PBAppendableArray *_fixed32Array;
    PBAppendableArray *_fixed64Array;
    NSMutableArray *_lengthDelimitedArray;
    NSMutableArray *_groupArray;
}

+ (id)defaultInstance;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *groupArray; // @synthesize groupArray=_groupArray;
@property(readonly, nonatomic) NSArray *lengthDelimitedArray; // @synthesize lengthDelimitedArray=_lengthDelimitedArray;
@property(readonly, nonatomic) PBArray *fixed64Array; // @synthesize fixed64Array=_fixed64Array;
@property(readonly, nonatomic) PBArray *fixed32Array; // @synthesize fixed32Array=_fixed32Array;
@property(readonly, nonatomic) PBArray *varintArray; // @synthesize varintArray=_varintArray;
- (void).cxx_destruct;
- (void)writeAsMessageSetExtensionTo:(int)arg1 output:(id)arg2;
- (void)writeDescriptionFor:(int)arg1 to:(id)arg2 withIndent:(id)arg3;
- (void)writeTo:(int)arg1 output:(id)arg2;
- (int)getSerializedSizeAsMessageSetExtension:(int)arg1;
- (int)getSerializedSize:(int)arg1;

@end

