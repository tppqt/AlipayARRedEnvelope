//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NYBaseObject.h"

#import "NSCoding.h"

@class NSString;

@interface NYFuCardPageUserInfo : NYBaseObject <NSCoding>
{
    _Bool _isFirstEnter;
    _Bool _isFirstShowFlipOverTip;
    _Bool _isAnimated;
    _Bool _needAlertPilfering;
    _Bool _alreadyAlertPilfering;
    _Bool _canAutoPatch;
    long long _stage;
    NSString *_autoPatchAlertString;
    NSString *_autoPatchBtnTitle;
}

+ (id)initialObject;
@property(retain, nonatomic) NSString *autoPatchBtnTitle; // @synthesize autoPatchBtnTitle=_autoPatchBtnTitle;
@property(retain, nonatomic) NSString *autoPatchAlertString; // @synthesize autoPatchAlertString=_autoPatchAlertString;
@property(nonatomic) _Bool canAutoPatch; // @synthesize canAutoPatch=_canAutoPatch;
@property(nonatomic) _Bool alreadyAlertPilfering; // @synthesize alreadyAlertPilfering=_alreadyAlertPilfering;
@property(nonatomic) _Bool needAlertPilfering; // @synthesize needAlertPilfering=_needAlertPilfering;
@property(nonatomic) long long stage; // @synthesize stage=_stage;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) _Bool isFirstShowFlipOverTip; // @synthesize isFirstShowFlipOverTip=_isFirstShowFlipOverTip;
@property(nonatomic) _Bool isFirstEnter; // @synthesize isFirstEnter=_isFirstEnter;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

