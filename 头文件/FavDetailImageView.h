//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MOBILECHATFAVCollectionVO, UIImageView;

@interface FavDetailImageView : UIView
{
    id <FavDetailImageViewDelegate> _delegate;
    UIImageView *_imageView;
    UIView *_downloadProgress;
    UIView *_downloadProgressBgView;
    MOBILECHATFAVCollectionVO *_data;
}

+ (struct CGSize)sizeForData:(id)arg1;
@property(retain, nonatomic) MOBILECHATFAVCollectionVO *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *downloadProgressBgView; // @synthesize downloadProgressBgView=_downloadProgressBgView;
@property(retain, nonatomic) UIView *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <FavDetailImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadImage;
- (void)setCachedImage;
- (void)imageLongPressed:(id)arg1;
- (void)imageTaped:(id)arg1;
- (id)initWithData:(id)arg1;

@end

