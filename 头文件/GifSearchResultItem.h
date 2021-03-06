//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GifSearchResultItem : NSObject
{
    NSString *_text;
    NSString *_thumb;
    NSString *_mainImgUrl;
    long long _isImageTypeGif;
    long long _width;
    long long _height;
    long long _fsize;
    long long _is_animated;
}

@property(nonatomic) long long is_animated; // @synthesize is_animated=_is_animated;
@property(nonatomic) long long fsize; // @synthesize fsize=_fsize;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long isImageTypeGif; // @synthesize isImageTypeGif=_isImageTypeGif;
@property(retain, nonatomic) NSString *mainImgUrl; // @synthesize mainImgUrl=_mainImgUrl;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

