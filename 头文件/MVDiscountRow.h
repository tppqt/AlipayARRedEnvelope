//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVBannerModel;

@interface MVDiscountRow : MVTableRow
{
    MVBannerModel *_banner;
}

@property(retain, nonatomic) MVBannerModel *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;

@end

