//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface TLAroundSceneCell : UITableViewCell
{
    UIImageView *_headView;
    UIImageView *_bgImageView;
    UIImageView *_sexImageView;
    UIImageView *_distanceIcon;
    UILabel *_userName;
    UILabel *_distance;
    UILabel *_personNumber;
    UILabel *_rewardNumber;
    UIImageView *_line;
}

@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *rewardNumber; // @synthesize rewardNumber=_rewardNumber;
@property(retain, nonatomic) UILabel *personNumber; // @synthesize personNumber=_personNumber;
@property(retain, nonatomic) UILabel *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *distanceIcon; // @synthesize distanceIcon=_distanceIcon;
@property(retain, nonatomic) UIImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)refreshCellWithItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)setupUI;

@end

