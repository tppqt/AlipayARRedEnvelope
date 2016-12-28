//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFEditFeedBaseViewController.h"

#import "BEEPhotoBrowserDelegate.h"
#import "BEEPhotoPickerDelegate.h"
#import "BEEPhotoTypesettingViewDelegate.h"
#import "BEEPhotoVerticalPreviewDelegate.h"
#import "MFPhotoWallViewDelegate.h"
#import "SFAddPictureViewDelegate.h"
#import "SFEditViewDelegate.h"
#import "SFVideoViewDelegate.h"
#import "SZTextViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class APAlertView, APConvertLinkCardManager, APShareToTimeLineCardView, APVideoInfo, BEEPhotoTypesettingView, BEEPhotoVerticalPreviewViewController, CCUglyClickChecker, NSDictionary, NSMutableArray, NSString, SFAddPictureView, SFPhotoLog, SFSource, SFTipsControl, SFVideoView;

@interface SFEditPhotoListFeedViewController : SFEditFeedBaseViewController <UIScrollViewDelegate, UITextViewDelegate, SFEditViewDelegate, MFPhotoWallViewDelegate, BEEPhotoBrowserDelegate, UIActionSheetDelegate, SFVideoViewDelegate, SZTextViewDelegate, BEEPhotoPickerDelegate, BEEPhotoTypesettingViewDelegate, BEEPhotoVerticalPreviewDelegate, SFAddPictureViewDelegate>
{
    _Bool _userDeleteCard;
    _Bool _isDefaultCard;
    _Bool _needAddSchemeHead;
    SFPhotoLog *_photoLog;
    SFSource *_tlSource;
    CDUnknownBlockType _sendCallback;
    CDUnknownBlockType _cancelCallback;
    BEEPhotoTypesettingView *_gridView;
    NSMutableArray *_photos;
    NSMutableArray *_assters;
    APShareToTimeLineCardView *_cardView;
    APConvertLinkCardManager *_linkDetector;
    APVideoInfo *_videoInfo;
    SFVideoView *_videoView;
    SFTipsControl *_tipsControl;
    NSString *_pasteString;
    SFAddPictureView *_addPictureView;
    BEEPhotoVerticalPreviewViewController *_detailVC;
    long long _pictureMaxCount;
    CCUglyClickChecker *_clickChecker;
    APAlertView *_alertView;
    NSDictionary *_inActionInfo;
}

+ (id)setupSendFeedLinkUrl:(id)arg1;
+ (id)photoConvert:(id)arg1;
+ (id)initWithDic:(id)arg1 sendCallback:(CDUnknownBlockType)arg2 cancelCallback:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *inActionInfo; // @synthesize inActionInfo=_inActionInfo;
@property(retain, nonatomic) APAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) CCUglyClickChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) long long pictureMaxCount; // @synthesize pictureMaxCount=_pictureMaxCount;
@property(retain, nonatomic) BEEPhotoVerticalPreviewViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) SFAddPictureView *addPictureView; // @synthesize addPictureView=_addPictureView;
@property(retain, nonatomic) NSString *pasteString; // @synthesize pasteString=_pasteString;
@property(retain, nonatomic) SFTipsControl *tipsControl; // @synthesize tipsControl=_tipsControl;
@property(nonatomic) _Bool needAddSchemeHead; // @synthesize needAddSchemeHead=_needAddSchemeHead;
@property(retain, nonatomic) SFVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) APVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool isDefaultCard; // @synthesize isDefaultCard=_isDefaultCard;
@property(nonatomic) _Bool userDeleteCard; // @synthesize userDeleteCard=_userDeleteCard;
@property(retain, nonatomic) APConvertLinkCardManager *linkDetector; // @synthesize linkDetector=_linkDetector;
@property(retain, nonatomic) APShareToTimeLineCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) NSMutableArray *assters; // @synthesize assters=_assters;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) BEEPhotoTypesettingView *gridView; // @synthesize gridView=_gridView;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType sendCallback; // @synthesize sendCallback=_sendCallback;
@property(retain, nonatomic) SFSource *tlSource; // @synthesize tlSource=_tlSource;
@property(retain, nonatomic) SFPhotoLog *photoLog; // @synthesize photoLog=_photoLog;
- (void).cxx_destruct;
- (void)weakupPhoto;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)doActionOnRightBarButtonItemForPhotoBrowser:(id)arg1 withPhoto:(id)arg2 atIndex:(long long)arg3;
- (id)rightBarItemCustomViewForPhotoBrowser:(id)arg1;
- (void)willDismissPhotoBrowser:(id)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (_Bool)enableSupportOrientationChanged:(id)arg1;
- (void)photoPickerControllerWillCancel:(id)arg1 withError:(unsigned long long)arg2;
- (void)photoPickerController:(id)arg1 didFinishPickingPhoto:(id)arg2 theOriginal:(_Bool)arg3;
- (void)addPictureBtnClicked;
- (void)didEditImage:(id)arg1 atPos:(long long)arg2 itemView:(id)arg3;
- (void)didDeleteImage:(long long)arg1 itemView:(id)arg2;
- (void)didTapedImage:(long long)arg1 itemView:(id)arg2;
- (_Bool)shouldShowFooterView:(id)arg1;
- (void)typesettingView:(id)arg1 editItemView:(id)arg2 atPos:(long long)arg3;
- (void)typesettingView:(id)arg1 didTapedItemView:(id)arg2 atPos:(long long)arg3 hasAddNumber:(_Bool)arg4 allImageViews:(id)arg5;
- (void)pictureBtnTaped:(id)arg1;
- (void)videoBtnTaped:(id)arg1;
- (void)editViewDidChange:(id)arg1;
- (void)statusViewDidLayoutSubViews;
- (void)delBtnAction:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didPasteString:(id)arg1;
- (void)userDidLogout:(id)arg1;
- (void)editedImageSaveToAlbumCompletion:(id)arg1;
- (void)imageSaveToAlbumCompletion:(id)arg1;
- (void)sendToAction:(id)arg1;
- (void)cardTouched:(id)arg1;
- (void)videoTouched:(id)arg1;
- (void)cancelBtnTaped:(CDUnknownBlockType)arg1;
- (void)hideAlertView;
- (void)showAlertViewCancelCallback:(CDUnknownBlockType)arg1;
- (void)cleanInActionInfo;
- (void)submitInActionInfo;
- (void)handleINImageEdited:(id)arg1 atIndex:(long long)arg2 isScroll:(_Bool)arg3;
- (void)storeEditedImageToPhotoAblum:(id)arg1 timeStamp:(id)arg2;
- (void)replaceEditedImage:(id)arg1 atIndex:(long long)arg2 timeStamp:(id)arg3 inEdited:(_Bool)arg4;
- (void)showPickedPhotos:(id)arg1 isScrollToImagePos:(_Bool)arg2;
- (void)refreshRightBarButtonStatus;
- (void)deleteCard;
- (id)editVCFeedType;
- (void)editPicture;
- (id)generateFeed;
- (_Bool)isSupportedEmptyTextFeed;
- (id)firstSourceLocation;
- (void)refreshVideoView;
- (struct CGSize)videoSize;
- (void)refreshGridView;
- (double)extSpace;
- (void)setupCustomView;
- (id)generateToolbarCfgFromOriWithNewCfg:(id)arg1;
- (void)showCardWithType:(id)arg1;
- (void)cleanMySelf;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)tipsEditVCFeedType;
- (void)cleanTips;
- (void)setupTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

