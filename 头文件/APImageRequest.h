//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface APImageRequest : NSObject <NSCopying>
{
    _Bool _usePJPEG;
    _Bool _isGif;
    _Bool _useHttps;
    NSString *_aliasIdentifier;
    UIImage *_placeholder;
    NSString *_business;
    unsigned long long _imageRequestType;
    unsigned long long _qualityValue;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _downLoadCompletion;
    CDUnknownBlockType _downloadPJPEGBlock;
    unsigned long long _respType;
    unsigned long long _priority;
    unsigned long long _executeSequence;
    NSString *_md5;
    struct CGSize _originalSize;
    struct CGSize _zoom;
}

+ (_Bool)enableSuperLongImageCut;
+ (_Bool)isSuperLongImageWithSize:(struct CGSize)arg1;
+ (_Bool)isCutImageSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
+ (_Bool)usingOSSFormat;
+ (id)stringWithWebp;
+ (id)stringWithQValue:(int)arg1;
+ (id)stringWithGradualPercent:(int)arg1;
+ (id)stringWithCutSize:(struct CGSize)arg1;
+ (id)stringWithScaleSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) _Bool useHttps; // @synthesize useHttps=_useHttps;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) unsigned long long executeSequence; // @synthesize executeSequence=_executeSequence;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long respType; // @synthesize respType=_respType;
@property(nonatomic) _Bool usePJPEG; // @synthesize usePJPEG=_usePJPEG;
@property(copy, nonatomic) CDUnknownBlockType downloadPJPEGBlock; // @synthesize downloadPJPEGBlock=_downloadPJPEGBlock;
@property(copy, nonatomic) CDUnknownBlockType downLoadCompletion; // @synthesize downLoadCompletion=_downLoadCompletion;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long qualityValue; // @synthesize qualityValue=_qualityValue;
@property(nonatomic) struct CGSize zoom; // @synthesize zoom=_zoom;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) unsigned long long imageRequestType; // @synthesize imageRequestType=_imageRequestType;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *aliasIdentifier; // @synthesize aliasIdentifier=_aliasIdentifier;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (struct CGSize)fixedSize;
- (unsigned long long)imageCacheType;
- (unsigned long long)calculateImageRequestTypeByOriginalSizeAndZoom;
- (unsigned long long)calculateImageRequestTypeInternal;
- (void)calculateImageRequestType;
- (_Bool)isSuperLongImage;
- (id)generateKeyForGetImage:(id)arg1;
- (id)taskIdWithIdentifier:(id)arg1;
- (id)cacheOptions;
- (_Bool)isQValueSupported;
- (_Bool)isWebPSupported;
- (id)zoomParameterWithSize:(struct CGSize)arg1;
- (_Bool)isGrayUser;
- (_Bool)isMobileNetwork;
- (_Bool)isWeakNetwork;
- (_Bool)isPJPEGSupported;
- (id)zoomStringWithSize:(struct CGSize)arg1 andSetMMDPBizParam:(id)arg2;

@end

