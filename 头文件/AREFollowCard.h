//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ARELoadingView, UIImageView, UILabel;

@interface AREFollowCard : UIView
{
    UILabel *_cardTitle;
    UIImageView *_content;
    UILabel *_location;
    ARELoadingView *_loadingView;
}

+ (void)loadImage;
@property(retain, nonatomic) ARELoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (id)extportImage;
- (void)refreshFollowCard:(id)arg1 getImage:(CDUnknownBlockType)arg2;
- (id)init;

@end

