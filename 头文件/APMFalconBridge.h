//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APMFalconBridge : NSObject
{
}

+ (id)GetComPressImgExFast:(id)arg1 Quality:(long long)arg2 LowQuality:(long long)arg3;
+ (id)getOpaqueImageFromImage:(id)arg1 withMaxLen:(int)arg2;
+ (id)AutoImgComPress2:(id)arg1 Quality:(long long)arg2;
+ (_Bool)checkiosDevice:(id)arg1;
+ (_Bool)isEnoughMemToDecodeImg:(long long)arg1 height:(long long)arg2;
+ (id)getBigSizeImageForDeviceForImage:(id)arg1;
+ (id)getMaxSizeImageForDeviceForImage:(id)arg1;
+ (id)ImgResizeWHEx:(id)arg1 FrameW:(int)arg2 FrameH:(int)arg3 ResizeType:(int)arg4;

@end

