//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class NSMutableArray, NSString;

@interface APIGSoundEngine : NSObject <AVAudioPlayerDelegate>
{
    NSMutableArray *_soundList;
}

@property(retain, nonatomic) NSMutableArray *soundList; // @synthesize soundList=_soundList;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
- (void)playSoundFor:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

