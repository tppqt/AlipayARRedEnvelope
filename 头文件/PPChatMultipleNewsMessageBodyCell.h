//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMultipleNewsMessageCell.h"

#import "APRichTextLabelDelegate.h"

@class NSString;

@interface PPChatMultipleNewsMessageBodyCell : PPChatMultipleNewsMessageCell <APRichTextLabelDelegate>
{
}

+ (double)cellHeightForData:(id)arg1 ofMessage:(id)arg2;
- (void)rtLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)loadData:(id)arg1;
- (id)getPPCellContentView;
- (void)setContentViewProperty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

