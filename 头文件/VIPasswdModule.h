//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIModule.h"

@class NSDictionary, NSNumber, NSString, UIViewController, VIPasswdPopupController;

@interface VIPasswdModule : VIModule
{
    NSString *_pubKey;
    NSString *_timestamp;
    NSString *_pageStyle;
    NSString *_keyHeadline;
    NSString *_bodyContent;
    NSString *_keyFootRemark;
    NSString *_loadingTip;
    NSNumber *_isSimplePPW;
    NSNumber *_hasOthers;
    NSNumber *_isFindPPW;
    NSString *_logonId;
    NSString *_referer;
    NSNumber *_isExistPPW;
    NSString *_completePPWUrl;
    NSString *_action;
    NSString *_other;
    NSString *_pass;
    NSString *_rdsPageName;
    UIViewController *_currentNavigationController;
    VIPasswdPopupController *_popupController;
    NSDictionary *_extraData;
    NSString *_moduleNameAtSubmission;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString *moduleNameAtSubmission; // @synthesize moduleNameAtSubmission=_moduleNameAtSubmission;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) VIPasswdPopupController *popupController; // @synthesize popupController=_popupController;
@property(nonatomic) __weak UIViewController *currentNavigationController; // @synthesize currentNavigationController=_currentNavigationController;
@property(retain, nonatomic) NSString *rdsPageName; // @synthesize rdsPageName=_rdsPageName;
@property(retain, nonatomic) NSString *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *other; // @synthesize other=_other;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *completePPWUrl; // @synthesize completePPWUrl=_completePPWUrl;
@property(retain, nonatomic) NSNumber *isExistPPW; // @synthesize isExistPPW=_isExistPPW;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
@property(retain, nonatomic) NSNumber *isFindPPW; // @synthesize isFindPPW=_isFindPPW;
@property(retain, nonatomic) NSNumber *hasOthers; // @synthesize hasOthers=_hasOthers;
@property(retain, nonatomic) NSNumber *isSimplePPW; // @synthesize isSimplePPW=_isSimplePPW;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(retain, nonatomic) NSString *keyFootRemark; // @synthesize keyFootRemark=_keyFootRemark;
@property(retain, nonatomic) NSString *bodyContent; // @synthesize bodyContent=_bodyContent;
@property(retain, nonatomic) NSString *keyHeadline; // @synthesize keyHeadline=_keyHeadline;
@property(retain, nonatomic) NSString *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *pubKey; // @synthesize pubKey=_pubKey;
- (void).cxx_destruct;
- (void)logForCompletion:(long long)arg1;
- (void)logWithParams:(id)arg1;
- (_Bool)canChooseOtherWays;
- (_Bool)canFindPasswd;
- (_Bool)isNumericPasswd;
- (_Bool)isPPWExist;
- (void)tryOtherVerificationMethods;
- (void)findPasswd;
- (void)verifyEncryptedPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)closeAnimated:(_Bool)arg1;
- (void)moduleWillFinish;
- (void)start;
- (void)invalidate;
- (_Bool)isLiving;
- (_Bool)isParamsValid;

@end

