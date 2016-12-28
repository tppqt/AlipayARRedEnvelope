//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, RMResourceManager;

@interface REImageView : UIImageView
{
    NSString *_currentImageId;
    RMResourceManager *_manager;
}

@property(retain, nonatomic) RMResourceManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSString *currentImageId; // @synthesize currentImageId=_currentImageId;
- (void).cxx_destruct;
- (void)setImageWithPlaceholderImage:(id)arg1 url:(id)arg2 needSize:(struct CGSize)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setImageWithPlaceholderImage:(id)arg1 url:(id)arg2 needSize:(struct CGSize)arg3;

@end

