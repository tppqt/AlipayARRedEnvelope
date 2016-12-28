//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZANode.h"

@class NSString, UIImage;

@interface VZAImageNode : VZANode
{
    UIImage *_currentImage;
    struct RecursiveMutex _imageLock;
    _Bool _lowLevel;
    UIImage *_image;
}

+ (struct CGRect)getDrawRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 contentMode:(long long)arg3 scale:(double)arg4;
+ (id)displayWithParameters:(id)arg1 isCancelled:(CDUnknownBlockType)arg2 isRasterizing:(_Bool)arg3;
@property(nonatomic) _Bool lowLevel; // @synthesize lowLevel=_lowLevel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)md5OfImage:(id)arg1;
- (id)vzaHashValue;
- (long long)displayLevel;
- (id)drawParametersForVZALayer:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)setImageWithURLOrCloudid:(id)arg1 business:(id)arg2 zoom:(struct CGSize)arg3 originalSize:(struct CGSize)arg4 placeholderImage:(id)arg5 failureImage:(id)arg6 completed:(CDUnknownBlockType)arg7;
- (void)setImageWithURLOrCloudid:(id)arg1 business:(id)arg2 zoom:(struct CGSize)arg3 originalSize:(struct CGSize)arg4 placeholderImage:(id)arg5 failureImage:(id)arg6;
- (void)setImageWithURLOrCloudid:(id)arg1 business:(id)arg2 placeholderImage:(id)arg3 failureImage:(id)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageWithURLOrCloudid:(id)arg1 business:(id)arg2 placeholderImage:(id)arg3 failureImage:(id)arg4;
- (void)setImageWithURLOrCloudid:(id)arg1 business:(id)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImageWithURLOrCloudid:(id)arg1 placeholderImage:(id)arg2 failureImage:(id)arg3;
@property(retain, nonatomic) NSString *currentImageId; // @dynamic currentImageId;

@end

