//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class H5WebViewController, NSMutableArray, NSTimer, PSDScene, UIWindow;

@interface H5PushWindowTask : NSObject
{
    _Bool _isFinished;
    _Bool _isNormalPush;
    _Bool _transparent;
    NSTimer *_timer;
    double _waitRender;
    H5WebViewController *_currentVC;
    PSDScene *_scene;
    NSMutableArray *_viewControllers;
    UIWindow *_keyWindow;
}

@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) PSDScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) H5WebViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(nonatomic) _Bool isNormalPush; // @synthesize isNormalPush=_isNormalPush;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) double waitRender; // @synthesize waitRender=_waitRender;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)push;
- (void)run;
- (void)sceneDidFinishRender:(id)arg1;
- (id)init;
- (void)dealloc;

@end

