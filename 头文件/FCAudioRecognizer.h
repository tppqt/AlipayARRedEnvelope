//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCAudioRecognizer : NSObject
{
    _Bool _recognizing;
    id <FCAudioRecognizerDelegate> _delegate;
    double _duration;
    struct AudioStreamBasicDescription _format;
}

+ (void)requestMicrophonePermission:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool recognizing; // @synthesize recognizing=_recognizing;
@property(nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <FCAudioRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)stopRecognitionwithPause:(_Bool)arg1;
- (_Bool)stopRecognition;
- (_Bool)startRecognition;
- (id)initWithRecognizeDuration:(double)arg1 format:(struct AudioStreamBasicDescription)arg2;

@end

