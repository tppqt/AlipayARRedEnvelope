//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface ALPAudioMessage : NSObject
{
    NSString *_filePath;
    NSData *_audioData;
    NSString *_messageId;
    NSNumber *_audioTime;
    NSString *_createAt;
}

@property(retain, nonatomic) NSString *createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSNumber *audioTime; // @synthesize audioTime=_audioTime;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)isExistFile:(id)arg1;
- (id)decodeAmr:(id)arg1;
- (id)duration:(id)arg1;
- (id)createMessageId;
- (id)initWithAudioData:(id)arg1;
- (id)initWithFilePath:(id)arg1;

@end

