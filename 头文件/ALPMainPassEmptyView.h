//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface ALPMainPassEmptyView : UIView
{
    UIImageView *_emptyImage;
    UILabel *_emptyTitle;
    UILabel *_emptyContent;
}

+ (id)showInViewController:(id)arg1;
@property(retain, nonatomic) UILabel *emptyContent; // @synthesize emptyContent=_emptyContent;
@property(retain, nonatomic) UILabel *emptyTitle; // @synthesize emptyTitle=_emptyTitle;
@property(retain, nonatomic) UIImageView *emptyImage; // @synthesize emptyImage=_emptyImage;
- (void).cxx_destruct;
- (void)dismiss;
- (id)initPassEmptyView:(struct CGRect)arg1;

@end

