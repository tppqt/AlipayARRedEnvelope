//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLLWStyle.h"

@class BLLWImageStyle;

@interface BLLWSummaryBGStyle : BLLWStyle
{
    BLLWImageStyle *_contentLine;
    BLLWImageStyle *_contentBG;
}

+ (id)contentBGColorString:(id)arg1;
+ (id)contentLineColorString:(id)arg1;
@property(retain, nonatomic) BLLWImageStyle *contentBG; // @synthesize contentBG=_contentBG;
@property(retain, nonatomic) BLLWImageStyle *contentLine; // @synthesize contentLine=_contentLine;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

