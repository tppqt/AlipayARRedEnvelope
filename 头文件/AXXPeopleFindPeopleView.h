//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UILabel;

@interface AXXPeopleFindPeopleView : UIControl
{
    UIImageView *_iconImageView;
    UIImageView *_stateImageView;
    UILabel *_nameLabel;
    long long _status;
    NSString *_loginId;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateState:(long long)arg1;
- (void)updatePeopleViewWithName:(id)arg1 iconUrl:(id)arg2 userId:(id)arg3 loginId:(id)arg4;
- (id)initWithSize:(long long)arg1;

@end

