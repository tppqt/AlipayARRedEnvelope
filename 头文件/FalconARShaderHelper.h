//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FalconARShaderHelper : NSObject
{
}

+ (_Bool)validateProgram:(unsigned int)arg1;
+ (_Bool)linkProgram:(unsigned int)arg1;
+ (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3;
+ (_Bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 forProgram:(unsigned int *)arg3;
+ (unsigned int)getDirectProgram;
+ (_Bool)loadDVertexShader:(id)arg1 fragmentShader:(id)arg2 forProgram:(unsigned int *)arg3;
+ (id)getBundlePath;

@end

