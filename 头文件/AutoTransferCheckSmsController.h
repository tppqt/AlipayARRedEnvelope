//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TransterCheckSmsController.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface AutoTransferCheckSmsController : TransterCheckSmsController <UIAlertViewDelegate>
{
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)initWithTairKey:(id)arg1 hidedPhoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

