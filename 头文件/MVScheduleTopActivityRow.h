//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVActivityModel, MVCinemaLotteryVOModel, MVCinemaModel, MVScheduleTopActivityView;

@interface MVScheduleTopActivityRow : MVTableRow
{
    MVScheduleTopActivityView *_activityView;
    MVActivityModel *_activityModel;
    MVCinemaLotteryVOModel *_lotteryVoModel;
    MVCinemaModel *_cinemaModel;
    CDUnknownBlockType _mcardClickBlock;
    CDUnknownBlockType _couponClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType couponClickBlock; // @synthesize couponClickBlock=_couponClickBlock;
@property(copy, nonatomic) CDUnknownBlockType mcardClickBlock; // @synthesize mcardClickBlock=_mcardClickBlock;
@property(retain, nonatomic) MVCinemaModel *cinemaModel; // @synthesize cinemaModel=_cinemaModel;
@property(retain, nonatomic) MVCinemaLotteryVOModel *lotteryVoModel; // @synthesize lotteryVoModel=_lotteryVoModel;
@property(retain, nonatomic) MVActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) MVScheduleTopActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight;

@end

