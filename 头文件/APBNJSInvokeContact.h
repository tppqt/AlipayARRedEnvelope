//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBNJSInvokeContactMultiPick;

@interface APBNJSInvokeContact : NSObject
{
    CDUnknownBlockType _pickerCallback;
    APBNJSInvokeContactMultiPick *_birdNestJSInvokeContactMultiPick;
}

+ (id)getAllMobilePhones:(id)arg1;
+ (id)getClearPhoneNumber:(id)arg1;
+ (id)phonesOfPerson:(void *)arg1;
+ (id)getPhoneInfo:(id)arg1;
+ (id)getPhoneInfoOfPerson:(void *)arg1;
+ (id)getContactDictInfo:(id)arg1;
@property(retain, nonatomic) APBNJSInvokeContactMultiPick *birdNestJSInvokeContactMultiPick; // @synthesize birdNestJSInvokeContactMultiPick=_birdNestJSInvokeContactMultiPick;
@property(copy, nonatomic) CDUnknownBlockType pickerCallback; // @synthesize pickerCallback=_pickerCallback;
- (void).cxx_destruct;
- (void)allContactsWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)pickContactWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

