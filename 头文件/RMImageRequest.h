//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RMResourceRequest.h"

@class UIImage;

@interface RMImageRequest : RMResourceRequest
{
    UIImage *_placeHolder;
}

@property(retain, nonatomic) UIImage *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 businessType:(id)arg2 placeHolder:(id)arg3;
- (id)init;

@end

