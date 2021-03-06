//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APButton, NSString, QueryCommunityResp, UIActivityIndicatorView, UILabel;

@interface CLRemindView : UIView
{
    UILabel *_noticeLabel;
    NSString *_noticeStr;
    QueryCommunityResp *_resultInfo;
    NSString *_btnTitle;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_titleLabel;
    UIView *_lineView;
    id <CLRemindViewDelegate> _delegate;
    APButton *_joinButton;
}

@property(retain, nonatomic) APButton *joinButton; // @synthesize joinButton=_joinButton;
@property(nonatomic) __weak id <CLRemindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopIndicator;
- (void)startIndicator;
- (void)joinAction;
- (void)layoutSubviews;
- (void)resizeSelf;
- (void)setComunityInfo:(id)arg1;
- (id)fontForText:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

