//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseViewController.h"

@class UILabel, aluAccountContentBizModel, aluAccountInfoBox, aluButton, aluRoundHeadImage;

@interface aluAccountContentViewController : aluBaseViewController
{
    aluAccountContentBizModel *_bizModel;
    aluButton *_nextBtn;
    UILabel *_mobileNumLabel;
    UILabel *_infoTips;
    aluRoundHeadImage *_headImageView;
    aluAccountInfoBox *_accountInfoBox;
    long long _firstButtonIndex;
}

@property(nonatomic) long long firstButtonIndex; // @synthesize firstButtonIndex=_firstButtonIndex;
@property(retain, nonatomic) aluAccountInfoBox *accountInfoBox; // @synthesize accountInfoBox=_accountInfoBox;
@property(retain, nonatomic) aluRoundHeadImage *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *infoTips; // @synthesize infoTips=_infoTips;
@property(retain, nonatomic) UILabel *mobileNumLabel; // @synthesize mobileNumLabel=_mobileNumLabel;
@property(retain, nonatomic) aluButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) aluAccountContentBizModel *bizModel; // @synthesize bizModel=_bizModel;
- (void).cxx_destruct;
- (_Bool)shouldTrustLogin;
- (void)onBack;
- (id)secondPartOfIndex:(long long)arg1;
- (id)firstPartOfIndex:(long long)arg1;
- (long long)totalDisplayItems;
- (id)tips2;
- (id)tips1;
- (void)gotoLoginPage;
- (void)gotoFindLoginPassword;
- (void)onLogin;
- (void)didReceiveMemoryWarning;
- (void)createMiddleSubViewsStartPosition:(struct CGRect)arg1;
- (void)createSubViews;
- (void)viewDidLoad;

@end

