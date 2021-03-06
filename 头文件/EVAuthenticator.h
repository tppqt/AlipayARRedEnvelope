//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EVAuthenticatorDelegate.h"

@class EVAudioLiveness, EVEventDelegate, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer, UIView, VideoCamera;

@interface EVAuthenticator : NSObject <EVAuthenticatorDelegate>
{
    NSObject<OS_dispatch_source> *brightnessTimer;
    _Bool _idleTimerWasEnabled;
    _Bool _brightnessUp;
    _Bool _isEnrollment;
    _Bool _isFirstEnrollmentSession;
    _Bool _captureStarted;
    _Bool _sentEyesInViewNotification;
    _Bool _sentFinishedCapturingNotification;
    _Bool _isPaused;
    _Bool _assetsLoaded;
    float _originalBrightness;
    float _brightnessGrowthRate;
    int _current_capture_state;
    int _current_eye_status;
    NSString *_userName;
    NSData *_userKey;
    UIView *_captureView;
    id <EVAuthSessionDelegate> _authSessionDelegate;
    double _brightnessFadeStartTime;
    VideoCamera *_camera;
    EVAudioLiveness *_audioLiveness;
    id <EyeVerifyDelegate> _evDelegate;
    NSTimer *_repeatingTimer;
    NSString *_licenseCertificate;
    EVEventDelegate *_eventDelegate;
    struct evp_auth_t *_evpAuth;
    NSObject<OS_dispatch_queue> *_evproc_queue;
}

+ (_Bool)isCameraAvailable;
+ (void)importSettings:(id)arg1;
+ (_Bool)isDeviceSupported;
+ (id)getInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *evproc_queue; // @synthesize evproc_queue=_evproc_queue;
@property(nonatomic) struct evp_auth_t *evpAuth; // @synthesize evpAuth=_evpAuth;
@property(retain, nonatomic) EVEventDelegate *eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic, getter=isAssetsLoaded) _Bool assetsLoaded; // @synthesize assetsLoaded=_assetsLoaded;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) int current_eye_status; // @synthesize current_eye_status=_current_eye_status;
@property(nonatomic) int current_capture_state; // @synthesize current_capture_state=_current_capture_state;
@property(nonatomic) _Bool sentFinishedCapturingNotification; // @synthesize sentFinishedCapturingNotification=_sentFinishedCapturingNotification;
@property(nonatomic) _Bool sentEyesInViewNotification; // @synthesize sentEyesInViewNotification=_sentEyesInViewNotification;
@property(nonatomic) _Bool captureStarted; // @synthesize captureStarted=_captureStarted;
@property(nonatomic) _Bool isFirstEnrollmentSession; // @synthesize isFirstEnrollmentSession=_isFirstEnrollmentSession;
@property(nonatomic) _Bool isEnrollment; // @synthesize isEnrollment=_isEnrollment;
@property(copy, nonatomic) NSString *licenseCertificate; // @synthesize licenseCertificate=_licenseCertificate;
@property(retain, nonatomic) NSTimer *repeatingTimer; // @synthesize repeatingTimer=_repeatingTimer;
@property(nonatomic) __weak id <EyeVerifyDelegate> evDelegate; // @synthesize evDelegate=_evDelegate;
@property(retain, nonatomic) EVAudioLiveness *audioLiveness; // @synthesize audioLiveness=_audioLiveness;
@property(retain, nonatomic) VideoCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) double brightnessFadeStartTime; // @synthesize brightnessFadeStartTime=_brightnessFadeStartTime;
@property(nonatomic) float brightnessGrowthRate; // @synthesize brightnessGrowthRate=_brightnessGrowthRate;
@property(nonatomic) _Bool brightnessUp; // @synthesize brightnessUp=_brightnessUp;
@property(nonatomic) float originalBrightness; // @synthesize originalBrightness=_originalBrightness;
@property(nonatomic) __weak id <EVAuthSessionDelegate> authSessionDelegate; // @synthesize authSessionDelegate=_authSessionDelegate;
@property(nonatomic) __weak UIView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) NSData *userKey; // @synthesize userKey=_userKey;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (void)releaseResources;
- (void)resume;
- (void)pause;
- (void)processRemoteMessage:(int)arg1 data:(id)arg2;
- (void)cancelTimeout;
- (void)startInactivityTimer;
- (void)stopInactivityTimer;
- (void)setUpViews;
- (void)stop;
- (void)resumeTimers;
- (void)haltTimers;
- (void)dealloc;
- (void)restoreBrightness;
- (void)fadeBrightnessDown;
- (void)updateBrightnessTimer;
- (void)fadeBrightnessUp;
- (void)verificationStepCompleted:(int)arg1 attemptNumber:(int)arg2 maxAttempts:(int)arg3;
- (void)processingStarted;
- (void)showTarget:(_Bool)arg1 atPoint:(struct CGPoint)arg2 animationDuration:(double)arg3;
- (void)enrollmentSessionStarted:(int)arg1;
- (void)enrollmentStepCompleted:(int)arg1 step:(int)arg2 totalSteps:(int)arg3 counter:(int)arg4;
- (void)handleInvalidLicense;
- (void)handleNormalLighting;
- (void)handleLowLighting;
- (void)handleEyeStatusChanged:(int)arg1 centerDistance:(double)arg2;
- (void)verificationCompleted:(int)arg1 userKey:(id)arg2 abortReason:(int)arg3;
- (void)enrollmentCompleted:(int)arg1 abortReason:(int)arg2;
- (id)abortReason2error:(int)arg1;
- (void)enrollmentSessionCompleted:(_Bool)arg1;
- (_Bool)initializeEVP:(id)arg1 assetsDirectory:(id)arg2 remoteCallback:(CDUnknownFunctionPointerType)arg3 remoteUserData:(void *)arg4 error:(id *)arg5;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (void)captureVerification;
- (void)captureEnrollment:(_Bool)arg1;
- (void)cameraPermitted:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForLaunch:(CDUnknownBlockType)arg1;
- (void)takeDarkCapture;
- (void)continueSession;
- (void)continueAuth;
- (void)cancelRequest:(int)arg1;
- (void)deleteEnrollments;
- (id)getEnrolledUsers;
- (_Bool)isUserEnrolled:(id)arg1;
@property(readonly, nonatomic) _Bool isBusy;
- (vector_5b3bfa18)userKeyVector;
- (id)initWithLicense:(id)arg1 delegate:(id)arg2 settings:(id)arg3 assetsDirectory:(id)arg4 remoteCallback:(CDUnknownFunctionPointerType)arg5 remoteUserData:(void *)arg6 error:(id *)arg7;
- (id)initWithLicense:(id)arg1 delegate:(id)arg2;
- (void)prepareForDeallocation;
- (void)dispatch_evp_get_result:(CDUnknownBlockType)arg1;
- (void)dispatch_evp:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

