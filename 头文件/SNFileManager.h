//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SNFileManager : NSObject
{
}

+ (id)decodeData:(id)arg1;
+ (id)decodeData:(id)arg1 forDebugSocial:(_Bool)arg2;
+ (id)encodeData:(id)arg1;
+ (id)readFileAndDecodeWithPath:(id)arg1;
+ (_Bool)writeData:(id)arg1 toFile:(id)arg2;
+ (id)readFileWithPath:(id)arg1;
+ (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
+ (_Bool)copyPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)movePath:(id)arg1 toPath:(id)arg2;
+ (_Bool)deleteFileWithPath:(id)arg1;
+ (_Bool)isFileExist:(id)arg1;
+ (id)filePathInMainBundle:(id)arg1;
+ (id)filePathInCacheDirectory:(id)arg1;
+ (id)filePathInDocument:(id)arg1;
+ (id)cacheDirectory;
+ (id)documentDirectory;

@end

