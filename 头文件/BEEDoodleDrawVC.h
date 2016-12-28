//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEDoodleToolsViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class BEEDoodleContainView, BEEDoodleToolsView, NSString, UIButton, UIImage;

@interface BEEDoodleDrawVC : DTViewController <BEEDoodleToolsViewDelegate, UIAlertViewDelegate>
{
    UIImage *_image;
    _Bool _autoExitApp;
    BEEDoodleContainView *_doodleView;
    BEEDoodleToolsView *_toolView;
    UIButton *_cancelButton;
    UIButton *_okButton;
    NSString *_doodleBusiId;
}

@property(nonatomic) _Bool autoExitApp; // @synthesize autoExitApp=_autoExitApp;
@property(retain, nonatomic) NSString *doodleBusiId; // @synthesize doodleBusiId=_doodleBusiId;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) BEEDoodleToolsView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) BEEDoodleContainView *doodleView; // @synthesize doodleView=_doodleView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)doodleToolsView:(id)arg1 didSelectToolType:(unsigned long long)arg2 color:(id)arg3;
- (void)handleNotification:(id)arg1;
- (void)exitDoodleApp;
- (void)notificateDoodleFinishWithImage:(id)arg1 assetURL:(id)arg2 isEdited:(_Bool)arg3;
- (void)saveImageToAlbums:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didClickOKButton;
- (void)didClickCancelButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)customStatusBarStytle;
- (_Bool)autohideNavigationBar;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

