//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage;

@protocol INPhotoEditDataSource <NSObject>
- (_Bool)onShowEditTips;
- (void)onFaceDetectWithImage:(UIImage *)arg1 complete:(void (^)(struct))arg2;
- (void)onImageDownloadWithURL:(NSURL *)arg1 complete:(void (^)(UIImage *, NSError *))arg2;
@end

