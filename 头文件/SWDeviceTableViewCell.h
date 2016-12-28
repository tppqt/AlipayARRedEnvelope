//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

@class UIImageView, UILabel;

@interface SWDeviceTableViewCell : APTableViewCell
{
    UILabel *_deviceNameLabel;
    UILabel *_deviceDescLabel;
    UIImageView *_strengthLevelImageView;
    long long _signalLevel;
}

+ (double)cellHeight;
@property(nonatomic) long long signalLevel; // @synthesize signalLevel=_signalLevel;
@property(retain, nonatomic) UIImageView *strengthLevelImageView; // @synthesize strengthLevelImageView=_strengthLevelImageView;
@property(retain, nonatomic) UILabel *deviceDescLabel; // @synthesize deviceDescLabel=_deviceDescLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

