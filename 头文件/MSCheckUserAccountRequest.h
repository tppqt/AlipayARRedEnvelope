//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSCheckUserAccountRequest : MSToString
{
    NSString *_loginId;
    NSString *_codeImage;
    NSString *_sessionId;
}

@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *codeImage; // @synthesize codeImage=_codeImage;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;

@end

