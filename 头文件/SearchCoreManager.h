//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchCoreManager : NSObject
{
    NSString *_separateWord;
    NSString *_matchFunction;
}

+ (id)share;
@property(retain, nonatomic) NSString *matchFunction; // @synthesize matchFunction=_matchFunction;
@property(retain, nonatomic) NSString *separateWord; // @synthesize separateWord=_separateWord;
- (void).cxx_destruct;
- (id)getPinYinWithText:(id)arg1;

@end

