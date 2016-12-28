//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, LFHomeCardModel, NSArray, NSString;

@protocol LFHomeCardDAOProxy <APDAOProtocol>
- (LFHomeCardModel *)get_last_message:(NSString *)arg1;
- (LFHomeCardModel *)get_message_with_msgId:(NSString *)arg1;
- (APDAOResult *)delete_all_message:(NSString *)arg1;
- (APDAOResult *)delete_message:(NSString *)arg1;
- (LFHomeCardModel *)last_delete_board_message:(NSString *)arg1;
- (APDAOResult *)delete_local_life:(NSString *)arg1;
- (NSArray *)get_sync_message:(NSString *)arg1 time:(NSString *)arg2 limit:(NSString *)arg3;
- (NSArray *)get_broadcast_message:(NSString *)arg1 time:(NSString *)arg2 limit:(NSString *)arg3;
- (APDAOResult *)update_message:(LFHomeCardModel *)arg1;
- (APDAOResult *)save_message:(LFHomeCardModel *)arg1;
@end

