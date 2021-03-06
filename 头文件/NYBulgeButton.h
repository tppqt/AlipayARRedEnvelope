//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface NYBulgeButton : UIButton
{
    struct CGSize _imageSize;
    struct CGSize _buttonSize;
    long long _contentMode;
    _Bool _notNeedBulge;
    struct UIEdgeInsets _areaExpandInsets;
}

@property(nonatomic) _Bool notNeedBulge; // @synthesize notNeedBulge=_notNeedBulge;
@property(nonatomic) struct UIEdgeInsets areaExpandInsets; // @synthesize areaExpandInsets=_areaExpandInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)alignmentImagePosition;
- (void)layoutSubviews;
- (id)initWithImageSize:(struct CGSize)arg1 contentMode:(long long)arg2;

@end

