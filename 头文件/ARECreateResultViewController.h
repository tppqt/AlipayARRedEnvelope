//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseViewController.h"

@class Falcon3DGLView, NSString, UIImage, UIImageView;

@interface ARECreateResultViewController : AREBaseViewController
{
    UIImage *_backgroundImage;
    NSString *_limitString;
    NSString *_shareTipString;
    NSString *_crowdNo;
    NSString *_locationString;
    UIImageView *_createdHintView;
    UIImageView *_sharePanelView;
    Falcon3DGLView *_renderView;
}

@property(retain, nonatomic) Falcon3DGLView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIImageView *sharePanelView; // @synthesize sharePanelView=_sharePanelView;
@property(retain, nonatomic) UIImageView *createdHintView; // @synthesize createdHintView=_createdHintView;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(copy, nonatomic) NSString *shareTipString; // @synthesize shareTipString=_shareTipString;
@property(copy, nonatomic) NSString *limitString; // @synthesize limitString=_limitString;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (void)shareEnvelope;
- (void)startCreate3DAnimation;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(retain, nonatomic) UIImageView *view; // @dynamic view;

@end

