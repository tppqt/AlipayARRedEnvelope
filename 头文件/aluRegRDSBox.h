//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluRDSBox.h"

@class aluRegisterViewController;

@interface aluRegRDSBox : aluRDSBox
{
    aluRegisterViewController *_parentContainer;
}

+ (id)regRdsBoxWithFrame:(struct CGRect)arg1 codeImage:(id)arg2 codeImageUrl:(id)arg3 delegate:(id)arg4 parentContainer:(id)arg5;
@property(nonatomic) __weak aluRegisterViewController *parentContainer; // @synthesize parentContainer=_parentContainer;
- (void).cxx_destruct;
- (void)onRefresh;

@end

