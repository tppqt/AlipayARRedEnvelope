//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSString;

@interface O2OSearchMistListItem : O2OMistListItem
{
    _Bool _needUpdate;
    _Bool _isBeforeUnfoldItem;
    _Bool _isLastInSection;
    _Bool _isFirstInSection;
    NSString *_spmTag;
    long long _positionIndex;
}

@property(nonatomic) long long positionIndex; // @synthesize positionIndex=_positionIndex;
@property(copy, nonatomic) NSString *spmTag; // @synthesize spmTag=_spmTag;
@property(nonatomic) _Bool isFirstInSection; // @synthesize isFirstInSection=_isFirstInSection;
@property(nonatomic) _Bool isLastInSection; // @synthesize isLastInSection=_isLastInSection;
@property(nonatomic) _Bool isBeforeUnfoldItem; // @synthesize isBeforeUnfoldItem=_isBeforeUnfoldItem;
- (void).cxx_destruct;
- (void)updateModel:(id)arg1 constrainedSize:(struct CGSize)arg2 context:(id)arg3;
- (void)tryToUpdate;

@end

