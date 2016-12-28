//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INAlbumPhoto.h"

#import "INAlbumPhoto.h"
#import "NSCoding.h"

@class NSDate, NSDictionary, NSString;

@interface INAlbumPhotoPhotoUrl : INAlbumPhoto <INAlbumPhoto, NSCoding>
{
    NSString *_photoUrl;
    NSDictionary *_imageProperty;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
- (id)getImagePropertyForPhotoUrl:(id)arg1;
- (void)requestImageData:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDate *createdDate;
@property(readonly, nonatomic) NSString *photoURL;
@property(readonly, nonatomic) double imageHeight;
@property(readonly, nonatomic) double imageWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPhotoUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

