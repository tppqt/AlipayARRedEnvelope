//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIModule.h"

@class APToastView, NSDate, NSNumber, NSString, UIView;

@interface VICertModule : VIModule
{
    NSString *_certCmd;
    NSString *_progress_waiting_time;
    NSString *_progress_content;
    NSString *_pub_key_env;
    NSString *_silent_install;
    UIView *_backgroundView;
    UIView *_keyWindow;
    NSNumber *_isSignOnly;
    NSDate *_signOnlyHUDStartDate;
    APToastView *_progressToastView;
}

+ (id)certSnByKey:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) APToastView *progressToastView; // @synthesize progressToastView=_progressToastView;
@property(retain, nonatomic) NSDate *signOnlyHUDStartDate; // @synthesize signOnlyHUDStartDate=_signOnlyHUDStartDate;
@property(nonatomic) NSNumber *isSignOnly; // @synthesize isSignOnly=_isSignOnly;
@property(nonatomic) __weak UIView *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *silent_install; // @synthesize silent_install=_silent_install;
@property(retain, nonatomic) NSString *pub_key_env; // @synthesize pub_key_env=_pub_key_env;
@property(retain, nonatomic) NSString *progress_content; // @synthesize progress_content=_progress_content;
@property(retain, nonatomic) NSString *progress_waiting_time; // @synthesize progress_waiting_time=_progress_waiting_time;
@property(retain, nonatomic) NSString *certCmd; // @synthesize certCmd=_certCmd;
- (void).cxx_destruct;
- (void)sendResult:(id)arg1 withService:(id)arg2;
- (void)presentToastWithin:(id)arg1 withIcon:(int)arg2 text:(id)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showSuccessToastWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideProgressHUD;
- (void)showProgressHUDWithText:(id)arg1;
- (void)moduleWillFinish;
- (void)parseAndExecuteWithInstruction:(id)arg1 response:(id)arg2;
- (void)start;

@end

