//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCRCreditCardAutoRepaymentDataSource, NSString;

@protocol CCRCreditCardAutoRepaymentSettingDelegate <NSObject>

@optional
- (void)dataSourceClickeRule:(CCRCreditCardAutoRepaymentDataSource *)arg1 andUrl:(NSString *)arg2;
- (void)dataSourceDidCommit:(CCRCreditCardAutoRepaymentDataSource *)arg1;
- (void)dataSourceDidCancelAutoRepay:(CCRCreditCardAutoRepaymentDataSource *)arg1;
- (void)dataSource:(CCRCreditCardAutoRepaymentDataSource *)arg1 operationType:(id)arg2;
- (void)dataSource:(CCRCreditCardAutoRepaymentDataSource *)arg1 commitType:(id)arg2;
@end

