//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface RETableViewCellInfo : NSObject
{
    _Bool _showMainImageForce;
    _Bool _showAddFriendIcon;
    _Bool _isBestLuck;
    _Bool _canThank;
    _Bool _ownFlag;
    _Bool _isDoubiOwner;
    _Bool _isDoubiLayout;
    _Bool _needSeparator;
    _Bool _showHighlightedColor;
    _Bool _makeTopLeftTextCenter;
    NSString *_imageUrl;
    UIImage *_placeholderImage;
    NSString *_topLeftText;
    NSString *_bottomLeftText;
    NSString *_bottomLeftAttributedString;
    NSString *_topRightText;
    UIColor *_topRightTextColor;
    NSString *_bottomRightText;
    UIColor *_bottomRightTextColor;
    NSString *_targetUrl;
    NSString *_userId;
    NSString *_loginId;
}

@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool makeTopLeftTextCenter; // @synthesize makeTopLeftTextCenter=_makeTopLeftTextCenter;
@property(nonatomic) _Bool showHighlightedColor; // @synthesize showHighlightedColor=_showHighlightedColor;
@property(nonatomic) _Bool needSeparator; // @synthesize needSeparator=_needSeparator;
@property(nonatomic) _Bool isDoubiLayout; // @synthesize isDoubiLayout=_isDoubiLayout;
@property(nonatomic) _Bool isDoubiOwner; // @synthesize isDoubiOwner=_isDoubiOwner;
@property(nonatomic) _Bool ownFlag; // @synthesize ownFlag=_ownFlag;
@property(nonatomic) _Bool canThank; // @synthesize canThank=_canThank;
@property(nonatomic) _Bool isBestLuck; // @synthesize isBestLuck=_isBestLuck;
@property(nonatomic) _Bool showAddFriendIcon; // @synthesize showAddFriendIcon=_showAddFriendIcon;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) UIColor *bottomRightTextColor; // @synthesize bottomRightTextColor=_bottomRightTextColor;
@property(retain, nonatomic) NSString *bottomRightText; // @synthesize bottomRightText=_bottomRightText;
@property(retain, nonatomic) UIColor *topRightTextColor; // @synthesize topRightTextColor=_topRightTextColor;
@property(retain, nonatomic) NSString *topRightText; // @synthesize topRightText=_topRightText;
@property(retain, nonatomic) NSString *bottomLeftAttributedString; // @synthesize bottomLeftAttributedString=_bottomLeftAttributedString;
@property(retain, nonatomic) NSString *bottomLeftText; // @synthesize bottomLeftText=_bottomLeftText;
@property(retain, nonatomic) NSString *topLeftText; // @synthesize topLeftText=_topLeftText;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) _Bool showMainImageForce; // @synthesize showMainImageForce=_showMainImageForce;
- (void).cxx_destruct;
- (id)init;

@end

