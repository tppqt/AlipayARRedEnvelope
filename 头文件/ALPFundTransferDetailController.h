//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEScrollController.h"

@class ALPFundDetailCaptionView, FundTradeRecordFunctionData, NSString;

@interface ALPFundTransferDetailController : BEEScrollController
{
    NSString *_billNo;
    NSString *_subTransCode;
    FundTradeRecordFunctionData *_cacheData;
    NSString *_filterCondition;
    ALPFundDetailCaptionView *_captionView;
}

@property(retain, nonatomic) ALPFundDetailCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) NSString *filterCondition; // @synthesize filterCondition=_filterCondition;
- (void).cxx_destruct;
- (int)getWWResultIcon:(id)arg1;
- (int)getWWResultStatusEnum:(id)arg1;
- (void)renderResult;
- (void)prepareForRenderResult;
- (void)reloadContent;
- (void)loadContent;
- (id)loadData;
- (void)viewDidLoad;
- (id)initWithFilterCondition:(id)arg1 billNo:(id)arg2 subTransCode:(id)arg3;
- (id)initWithFilterCondition:(id)arg1 Record:(id)arg2;

@end

