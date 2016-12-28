//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAsset.h"

#import "BEEAssetProtocol.h"

@class NSString;

@interface PHAsset (BeeExtension) <BEEAssetProtocol>
+ (void)bee_assetForKey:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)bee_cancelGetAssetImage:(int)arg1;
- (int)bee_getAssetGifWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 synchronous:(_Bool)arg3;
- (id)bee_syncGetAssetGif;
- (int)bee_getAssetGifWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (int)bee_getAssetImageWithSizeType:(unsigned long long)arg1 synchronous:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)bee_cleanImage;
- (id)bee_syncGetAssetImageWithSizeType:(unsigned long long)arg1;
- (int)bee_getAssetImageWithSizeType:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAssetPropertyWithInfo:(id)arg1;
- (void)bee_requestAssetLocal;
- (long long)bee_size;
- (_Bool)bee_isGif;
- (_Bool)bee_isAssetInCloud;
- (id)bee_creationDate;
- (id)bee_location;
- (double)bee_duration;
- (long long)bee_orientation;
- (unsigned long long)bee_mediaType;
- (double)bee_aspectRatio;
- (unsigned long long)bee_pixelWidth;
- (unsigned long long)bee_pixelHeight;
- (id)bee_assetKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

