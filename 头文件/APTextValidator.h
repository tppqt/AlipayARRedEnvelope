//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APTextValidator : NSObject
{
}

+ (id)correctAlipayAccount:(id)arg1;
+ (id)alipayAccountValidator;
+ (id)IDCardValidator;
+ (id)creditCardValidator;
+ (id)bankCardValidator;
+ (id)mobileNumberValidator;
+ (id)amountValidator;
- (_Bool)checkText:(id)arg1;

@end

