//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, O2OImageDesc, O2OVoucherDesc;

@interface O2OVoucherDetail : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasItemId;
    _Bool _hasTitle;
    _Bool _hasItemNameA;
    _Bool _hasItemNameB;
    _Bool _hasItemNameC;
    _Bool _hasItemUnit;
    _Bool _hasSalesDesc;
    _Bool _hasImageDesc;
    _Bool _hasBtnStatus;
    _Bool _hasButtonDesc;
    _Bool _hasBtnUrl;
    _Bool _hasAutoObtain;
    _Bool _hasType;
    _Bool _hasStudent;
    _Bool _hasCheckFlag;
    _Bool _hasGmtStart;
    _Bool _hasGmtEnd;
    _Bool _hasCountDown;
    _Bool _hasCountDownTitle;
    _Bool _hasLoadingDesc;
    _Bool _hasDescPrefix;
    _Bool _hasBrandLogo;
    _Bool _hasBrandName;
    _Bool _hasBackgroudColor;
    _Bool _hasHasUnused;
    _Bool _hasProtocolName;
    _Bool _hasProtocolKey;
    _Bool _hasProtocolUrl;
    _Bool _hasMoreUrl;
    _Bool _hasSystemTime;
    _Bool _hasPassId;
    _Bool _hasShow;
    _Bool _hasOperations;
    _Bool _hasOperationTitle;
    _Bool _hasOperationSubTitle;
    _Bool _hasSecondOperations;
    _Bool _hasAppId;
    _Bool _hasChecked;
    _Bool _hasAppName;
    _Bool _hasItemPs;
    _Bool _hasItemActivity;
    _Bool _btnStatus;
    _Bool _autoObtain;
    _Bool _student;
    _Bool _checkFlag;
    _Bool _countDown;
    _Bool _hasUnused;
    _Bool _show;
    int _type;
    NSString *_itemId;
    NSString *_title;
    NSString *_itemNameA;
    NSString *_itemNameB;
    NSString *_itemNameC;
    NSString *_itemUnit;
    NSString *_salesDesc;
    NSMutableArray *_descList;
    O2OImageDesc *_imageDesc;
    NSMutableArray *_subInfoList;
    NSString *_buttonDesc;
    NSString *_btnUrl;
    long long _gmtStart;
    long long _gmtEnd;
    NSString *_countDownTitle;
    NSString *_loadingDesc;
    NSString *_descPrefix;
    NSString *_brandLogo;
    NSString *_brandName;
    NSString *_backgroudColor;
    NSString *_protocolName;
    NSString *_protocolKey;
    NSString *_protocolUrl;
    NSString *_moreUrl;
    long long _systemTime;
    NSString *_passId;
    NSString *_operations;
    NSString *_operationTitle;
    NSString *_operationSubTitle;
    NSString *_secondOperations;
    NSString *_appId;
    NSString *_checked;
    NSString *_appName;
    NSString *_itemPs;
    O2OVoucherDesc *_itemActivity;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) O2OVoucherDesc *itemActivity; // @synthesize itemActivity=_itemActivity;
@property(retain, nonatomic) NSString *itemPs; // @synthesize itemPs=_itemPs;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *secondOperations; // @synthesize secondOperations=_secondOperations;
@property(retain, nonatomic) NSString *operationSubTitle; // @synthesize operationSubTitle=_operationSubTitle;
@property(retain, nonatomic) NSString *operationTitle; // @synthesize operationTitle=_operationTitle;
@property(retain, nonatomic) NSString *operations; // @synthesize operations=_operations;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(nonatomic) long long systemTime; // @synthesize systemTime=_systemTime;
@property(retain, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) NSString *protocolKey; // @synthesize protocolKey=_protocolKey;
@property(retain, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(nonatomic) _Bool hasUnused; // @synthesize hasUnused=_hasUnused;
@property(retain, nonatomic) NSString *backgroudColor; // @synthesize backgroudColor=_backgroudColor;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(retain, nonatomic) NSString *descPrefix; // @synthesize descPrefix=_descPrefix;
@property(retain, nonatomic) NSString *loadingDesc; // @synthesize loadingDesc=_loadingDesc;
@property(retain, nonatomic) NSString *countDownTitle; // @synthesize countDownTitle=_countDownTitle;
@property(nonatomic) _Bool countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long gmtEnd; // @synthesize gmtEnd=_gmtEnd;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(nonatomic) _Bool checkFlag; // @synthesize checkFlag=_checkFlag;
@property(nonatomic) _Bool student; // @synthesize student=_student;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool autoObtain; // @synthesize autoObtain=_autoObtain;
@property(retain, nonatomic) NSString *btnUrl; // @synthesize btnUrl=_btnUrl;
@property(retain, nonatomic) NSString *buttonDesc; // @synthesize buttonDesc=_buttonDesc;
@property(nonatomic) _Bool btnStatus; // @synthesize btnStatus=_btnStatus;
@property(retain, nonatomic) NSMutableArray *subInfoList; // @synthesize subInfoList=_subInfoList;
@property(retain, nonatomic) O2OImageDesc *imageDesc; // @synthesize imageDesc=_imageDesc;
@property(retain, nonatomic) NSMutableArray *descList; // @synthesize descList=_descList;
@property(retain, nonatomic) NSString *salesDesc; // @synthesize salesDesc=_salesDesc;
@property(retain, nonatomic) NSString *itemUnit; // @synthesize itemUnit=_itemUnit;
@property(retain, nonatomic) NSString *itemNameC; // @synthesize itemNameC=_itemNameC;
@property(retain, nonatomic) NSString *itemNameB; // @synthesize itemNameB=_itemNameB;
@property(retain, nonatomic) NSString *itemNameA; // @synthesize itemNameA=_itemNameA;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly) _Bool hasItemActivity; // @synthesize hasItemActivity=_hasItemActivity;
@property(readonly) _Bool hasItemPs; // @synthesize hasItemPs=_hasItemPs;
@property(readonly) _Bool hasAppName; // @synthesize hasAppName=_hasAppName;
@property(readonly) _Bool hasChecked; // @synthesize hasChecked=_hasChecked;
@property(readonly) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(readonly) _Bool hasSecondOperations; // @synthesize hasSecondOperations=_hasSecondOperations;
@property(readonly) _Bool hasOperationSubTitle; // @synthesize hasOperationSubTitle=_hasOperationSubTitle;
@property(readonly) _Bool hasOperationTitle; // @synthesize hasOperationTitle=_hasOperationTitle;
@property(readonly) _Bool hasOperations; // @synthesize hasOperations=_hasOperations;
@property(readonly) _Bool hasShow; // @synthesize hasShow=_hasShow;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
@property(readonly) _Bool hasSystemTime; // @synthesize hasSystemTime=_hasSystemTime;
@property(readonly) _Bool hasMoreUrl; // @synthesize hasMoreUrl=_hasMoreUrl;
@property(readonly) _Bool hasProtocolUrl; // @synthesize hasProtocolUrl=_hasProtocolUrl;
@property(readonly) _Bool hasProtocolKey; // @synthesize hasProtocolKey=_hasProtocolKey;
@property(readonly) _Bool hasProtocolName; // @synthesize hasProtocolName=_hasProtocolName;
@property(readonly) _Bool hasHasUnused; // @synthesize hasHasUnused=_hasHasUnused;
@property(readonly) _Bool hasBackgroudColor; // @synthesize hasBackgroudColor=_hasBackgroudColor;
@property(readonly) _Bool hasBrandName; // @synthesize hasBrandName=_hasBrandName;
@property(readonly) _Bool hasBrandLogo; // @synthesize hasBrandLogo=_hasBrandLogo;
@property(readonly) _Bool hasDescPrefix; // @synthesize hasDescPrefix=_hasDescPrefix;
@property(readonly) _Bool hasLoadingDesc; // @synthesize hasLoadingDesc=_hasLoadingDesc;
@property(readonly) _Bool hasCountDownTitle; // @synthesize hasCountDownTitle=_hasCountDownTitle;
@property(readonly) _Bool hasCountDown; // @synthesize hasCountDown=_hasCountDown;
@property(readonly) _Bool hasGmtEnd; // @synthesize hasGmtEnd=_hasGmtEnd;
@property(readonly) _Bool hasGmtStart; // @synthesize hasGmtStart=_hasGmtStart;
@property(readonly) _Bool hasCheckFlag; // @synthesize hasCheckFlag=_hasCheckFlag;
@property(readonly) _Bool hasStudent; // @synthesize hasStudent=_hasStudent;
@property(readonly) _Bool hasType; // @synthesize hasType=_hasType;
@property(readonly) _Bool hasAutoObtain; // @synthesize hasAutoObtain=_hasAutoObtain;
@property(readonly) _Bool hasBtnUrl; // @synthesize hasBtnUrl=_hasBtnUrl;
@property(readonly) _Bool hasButtonDesc; // @synthesize hasButtonDesc=_hasButtonDesc;
@property(readonly) _Bool hasBtnStatus; // @synthesize hasBtnStatus=_hasBtnStatus;
@property(readonly) _Bool hasImageDesc; // @synthesize hasImageDesc=_hasImageDesc;
@property(readonly) _Bool hasSalesDesc; // @synthesize hasSalesDesc=_hasSalesDesc;
@property(readonly) _Bool hasItemUnit; // @synthesize hasItemUnit=_hasItemUnit;
@property(readonly) _Bool hasItemNameC; // @synthesize hasItemNameC=_hasItemNameC;
@property(readonly) _Bool hasItemNameB; // @synthesize hasItemNameB=_hasItemNameB;
@property(readonly) _Bool hasItemNameA; // @synthesize hasItemNameA=_hasItemNameA;
@property(readonly) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(readonly) _Bool hasItemId; // @synthesize hasItemId=_hasItemId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addSubInfoList:(id)arg1;
- (void)setSubInfoListArray:(id)arg1;
- (void)addDescList:(id)arg1;
- (void)setDescListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

