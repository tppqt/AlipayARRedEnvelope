//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PEHelper : NSObject
{
}

+ (id)loginUserInfo;
+ (_Bool)isCertifiedUser;
+ (_Bool)isBizUser;
+ (id)loginUserNick;
+ (id)loginUserIcon;
+ (id)loginUserId;
+ (void)forceExitSpecifyViewController:(id)arg1 inApp:(id)arg2;
+ (id)formatedMoney:(id)arg1;
+ (id)formatedAmount:(id)arg1;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constraintSize:(struct CGSize)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (id)peColorFromHexRGB:(id)arg1;
+ (id)peSupportedColorString:(id)arg1;
+ (id)peRgbFromString:(id)arg1;
+ (_Bool)peIsMiniDevice;
+ (_Bool)peIsIPad;
+ (id)peDefaultHeadImage;
+ (id)peImageWithNamed:(id)arg1;
+ (_Bool)isEmptyArray:(id)arg1;
+ (_Bool)isValidString:(id)arg1;

@end

