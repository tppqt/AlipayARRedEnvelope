//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APContactCommonTableViewCell.h"

@class UIImageView;

@interface APContactNewFriendTableViewCell : APContactCommonTableViewCell
{
    _Bool _mySelfIsValidate;
    UIImageView *_validateImg;
}

+ (double)heightOfCell;
@property(nonatomic) _Bool mySelfIsValidate; // @synthesize mySelfIsValidate=_mySelfIsValidate;
@property(retain, nonatomic) UIImageView *validateImg; // @synthesize validateImg=_validateImg;
- (void).cxx_destruct;
- (void)adjustCommonItem:(double)arg1;
- (double)adjustIconImage:(double)arg1;
- (void)validateNameIconShow:(_Bool)arg1;
- (void)refreshDetail;

@end

