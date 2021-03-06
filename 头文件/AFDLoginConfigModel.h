//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFDAlgConfigModel, AFDDetectConfigModel, AFDMineConfigModel, AFDSwitchConfigModel, AFDUploadConfigModel, NSArray, NSString;

@interface AFDLoginConfigModel : NSObject
{
    AFDAlgConfigModel *_alg;
    AFDDetectConfigModel *_detect;
    AFDUploadConfigModel *_upload;
    AFDSwitchConfigModel *_switches;
    AFDMineConfigModel *_mine;
    NSString *_loginmode;
    NSArray *_samplemode;
    NSString *_ver;
}

+ (id)defaultModel;
+ (id)modelFromDict:(id)arg1;
@property(retain, nonatomic) NSString *ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSArray *samplemode; // @synthesize samplemode=_samplemode;
@property(retain, nonatomic) NSString *loginmode; // @synthesize loginmode=_loginmode;
@property(retain, nonatomic) AFDMineConfigModel *mine; // @synthesize mine=_mine;
@property(retain, nonatomic) AFDSwitchConfigModel *switches; // @synthesize switches=_switches;
@property(retain, nonatomic) AFDUploadConfigModel *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) AFDDetectConfigModel *detect; // @synthesize detect=_detect;
@property(retain, nonatomic) AFDAlgConfigModel *alg; // @synthesize alg=_alg;
- (void).cxx_destruct;

@end

