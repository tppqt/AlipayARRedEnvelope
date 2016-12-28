//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPShareClient : NSObject
{
    CDUnknownBlockType _shareBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
- (void).cxx_destruct;
- (void)shareToChannel:(id)arg1 title:(id)arg2 description:(id)arg3 url:(id)arg4 iconUrl:(id)arg5 actionType:(id)arg6 publicName:(id)arg7 publicIconUrl:(id)arg8 bizType:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)shareAutoMessage:(id)arg1 shareUrl:(id)arg2 toChannel:(id)arg3 publicName:(id)arg4 publicIconUrl:(id)arg5 bizType:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)shareNewsItem:(id)arg1 shareUrl:(id)arg2 toChannel:(id)arg3 publicName:(id)arg4 publicIconUrl:(id)arg5 bizType:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)onH5ShareChannelSelect:(id)arg1;
- (id)init;

@end

