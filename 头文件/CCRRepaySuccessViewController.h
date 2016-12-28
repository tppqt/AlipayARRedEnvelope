//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRTableBaseViewController.h"

#import "CCRRecommondCellDelegate.h"
#import "PromotionCenterDelegate.h"
#import "UIWebViewDelegate.h"

@class CCRCellObject, CCRGetRepaymentResultRespVO, CCRSavedCard, CDPSpaceView, NSString, UIImageView, UILabel;

@interface CCRRepaySuccessViewController : CCRTableBaseViewController <PromotionCenterDelegate, CCRRecommondCellDelegate, UIWebViewDelegate>
{
    CDPSpaceView *_spaceView;
    UILabel *_footViewLabel;
    UIImageView *_imageView;
    CCRCellObject *_webCellObject;
    _Bool _remindDayLoading;
    _Bool _needWriteShowGuideLog;
    float _adsHeight;
    CCRGetRepaymentResultRespVO *_repaymentResultResp;
    NSString *_billNumber;
    NSString *_remindDay;
    CCRSavedCard *_savedCard;
}

@property(nonatomic) float adsHeight; // @synthesize adsHeight=_adsHeight;
@property(nonatomic) _Bool needWriteShowGuideLog; // @synthesize needWriteShowGuideLog=_needWriteShowGuideLog;
@property(retain, nonatomic) CCRSavedCard *savedCard; // @synthesize savedCard=_savedCard;
@property(nonatomic) _Bool remindDayLoading; // @synthesize remindDayLoading=_remindDayLoading;
@property(retain, nonatomic) NSString *remindDay; // @synthesize remindDay=_remindDay;
@property(retain, nonatomic) NSString *billNumber; // @synthesize billNumber=_billNumber;
@property(retain, nonatomic) CCRGetRepaymentResultRespVO *repaymentResultResp; // @synthesize repaymentResultResp=_repaymentResultResp;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1;
- (id)buildLine:(double)arg1 lineWidth:(double)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openUrl:(id)arg1;
- (void)doClickButton;
- (id)attributeTextForArriveTime:(id)arg1;
- (void)deductTipView:(id)arg1 Icon:(id)arg2 Text:(id)arg3;
- (void)requestAds;
- (void)requestRepaymentResult;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)back;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)cellObjectForPPRecommend:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForRecommend:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForRepayAds:(id)arg1;
- (id)cellObjectForToAccountTime:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForRepayFailInfo:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForRepayResultInfo:(id)arg1 OtherParam:(id)arg2;
- (void)layoutWillChange;
- (void)viewWillLayoutSubviews;
- (void)createSubviews;
- (id)initWithSavedCard:(id)arg1 billNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

