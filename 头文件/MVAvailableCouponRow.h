//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@interface MVAvailableCouponRow : MVTableRow
{
    _Bool _hidBottomLine;
    long long _availableCouponNum;
    CDUnknownBlockType _didClickBlock;
    CDUnknownBlockType _didCloseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didCloseBlock; // @synthesize didCloseBlock=_didCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(nonatomic) _Bool hidBottomLine; // @synthesize hidBottomLine=_hidBottomLine;
@property(nonatomic) long long availableCouponNum; // @synthesize availableCouponNum=_availableCouponNum;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;

@end

