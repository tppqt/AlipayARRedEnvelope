//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WeiboSDK3rdApp;

@interface WBDataTransferObject : NSObject
{
    _Bool shouldOpenWeiboAppInstallPageIfNotInstalled;
    NSDictionary *userInfo;
    WeiboSDK3rdApp *app;
    NSString *sdkVersion;
}

+ (void)removeFromPasteboardWithID:(id)arg1;
+ (id)open3rdAppSchemeWithID:(id)arg1 appKey:(id)arg2;
+ (id)openWeiboAppSchemeWithID:(id)arg1;
+ (id)objectFromPasteboardWithID:(id)arg1 sdkVersion:(id)arg2;
+ (id)unSupportedObjectFromPasteboard;
+ (id)pasteboardNameWithID:(id)arg1;
+ (id)mappedObjectWithDictionary:(id)arg1;
+ (id)transferType;
+ (id)UUID;
@property(nonatomic) _Bool shouldOpenWeiboAppInstallPageIfNotInstalled; // @synthesize shouldOpenWeiboAppInstallPageIfNotInstalled;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) WeiboSDK3rdApp *app; // @synthesize app;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
- (void)removeFromPasteboard;
- (id)open3rdAppSchemeWithAppKey:(id)arg1;
- (id)openWeiboAppScheme;
- (id)transferObjectsForPasteboard;
- (id)pasteboardName;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validateAfterReceive;
- (id)validateBeforeSend;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (id)validateUserInfo;
- (id)validate;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (void)dealloc;
- (id)init;

@end

