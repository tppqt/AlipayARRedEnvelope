//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CreditBlock.h"

#import "ALPInputCardBlockDelegate.h"

@class APWealthTextFieldTitleCell, NSString;

@interface ForeignCreditBlock : CreditBlock <ALPInputCardBlockDelegate>
{
    _Bool _nameShow;
    APWealthTextFieldTitleCell *_nameCell;
}

@property(retain, nonatomic) APWealthTextFieldTitleCell *nameCell; // @synthesize nameCell=_nameCell;
- (void).cxx_destruct;
- (void)fillValue:(id)arg1;
- (void)resignFirstResponse;
- (long long)cellCount;
- (id)blockCell:(id)arg1 atIndex:(long long)arg2;
- (_Bool)hasText;
- (id)initWithName:(_Bool)arg1 Expired:(_Bool)arg2 ccv2:(_Bool)arg3 sectionHeaderText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

