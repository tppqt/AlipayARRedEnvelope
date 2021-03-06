//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCardFeedBaseVC.h"

#import "UIActionSheetDelegate.h"

@class APActivityIndicatorView, APCustomNavigationView, BEEGradientColorView, NSString, QueryFeedsResp, QueryTopicDetailResp, UIImageView, UILabel, UIView;

@interface CLTopicHomeViewController : CCardFeedBaseVC <UIActionSheetDelegate>
{
    NSString *_topicName;
    NSString *_topicId;
    NSString *_lastFeedId;
    long long _totalComment;
    QueryTopicDetailResp *_topicDetailResp;
    QueryFeedsResp *_loadMoreResult;
    APCustomNavigationView *_navigationView;
    APActivityIndicatorView *_progressView;
    UIImageView *_headImageView;
    BEEGradientColorView *_gradientView;
    UIView *_backGroundView;
    _Bool _hasNotJoined;
    UIView *_topicInfoView;
    UILabel *_introLabel;
    UILabel *_viewNumbLabel;
    UIImageView *_commentImage;
    UILabel *_commentNumbLabel;
    UIView *_exceptionView;
}

@property(retain, nonatomic) UIView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UILabel *commentNumbLabel; // @synthesize commentNumbLabel=_commentNumbLabel;
@property(retain, nonatomic) UIImageView *commentImage; // @synthesize commentImage=_commentImage;
@property(retain, nonatomic) UILabel *viewNumbLabel; // @synthesize viewNumbLabel=_viewNumbLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UIView *topicInfoView; // @synthesize topicInfoView=_topicInfoView;
- (void).cxx_destruct;
- (_Bool)autohideNavigationBar;
- (id)customNavigationBar;
- (void)publishCardDidUpdate;
- (_Bool)shouldReceiveCardData:(id)arg1 forClubId:(id)arg2 andTopicId:(id)arg3;
- (void)doAddComment:(id)arg1;
- (_Bool)receiveSucessNotification:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendNewsfeed;
- (void)doCoverArea;
- (void)doNavigationBar:(double)arg1;
- (void)doNavigationBar;
- (_Bool)hasUIContent;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hanldExceptionProgress;
- (void)handleCommOp:(id)arg1 indexSub:(long long)arg2;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)replaceCardViewwithTipview:(id)arg1;
- (void)doErrorUIWithStatusCode:(id)arg1 isRPCCradlistNil:(_Bool)arg2 errorMsg:(id)arg3;
- (void)noPermissionVisitTopic;
- (void)showContent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshTopicHeader:(id)arg1;
- (void)updateResultToUI:(id)arg1 cardList:(id)arg2;
- (void)resetLoadingState;
- (void)requestMore;
- (void)viewWillDestroy;
- (void)saveCache;
- (void)requestTopicData:(_Bool)arg1;
- (_Bool)loadDataWithCache;
- (_Bool)hasCache;
- (void)buildTopViews;
- (void)buildNavigationView;
- (void)viewDidLoad;
- (id)initWithTopicName:(id)arg1 topicId:(id)arg2 communityId:(id)arg3;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

