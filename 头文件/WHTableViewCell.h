//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class BaseDataModel, NSString, UIImageView, UILabel;

@interface WHTableViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    BaseDataModel *_dataModel;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImageUrlWithUrl:(id)arg1 defaultIcon:(id)arg2 appId:(id)arg3;
- (void)setDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

