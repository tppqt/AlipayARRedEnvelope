//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LSUserInfo, MFAttributeLabel, UIView;

@interface LSCommentCell : UITableViewCell
{
    LSUserInfo *_userInfo;
    MFAttributeLabel *_attributeLabel;
    UIView *_blackView;
}

+ (struct CGSize)cellHeightOfText:(id)arg1 withFont:(id)arg2 maxSize:(struct CGSize)arg3;
+ (id)getCommentFont;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) MFAttributeLabel *attributeLabel; // @synthesize attributeLabel=_attributeLabel;
@property(retain, nonatomic) LSUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)setHTMLString:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

