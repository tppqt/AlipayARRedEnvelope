//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface APXMMusicDetail : NSObject <NSCoding>
{
    NSNumber *_song_id;
    NSString *_song_name;
    NSNumber *_artist_id;
    NSString *_artist_name;
    NSString *_artist_logo;
    NSString *_singers;
    NSNumber *_album_id;
    NSString *_album_name;
    NSString *_album_logo;
    NSNumber *_pace;
    NSNumber *_length;
    NSNumber *_track;
    double _cd_serial;
    NSNumber *_music_type;
    NSString *_permission;
}

@property(retain, nonatomic) NSString *permission; // @synthesize permission=_permission;
@property(retain, nonatomic) NSNumber *music_type; // @synthesize music_type=_music_type;
@property(nonatomic) double cd_serial; // @synthesize cd_serial=_cd_serial;
@property(retain, nonatomic) NSNumber *track; // @synthesize track=_track;
@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(retain, nonatomic) NSNumber *pace; // @synthesize pace=_pace;
@property(retain, nonatomic) NSString *album_logo; // @synthesize album_logo=_album_logo;
@property(retain, nonatomic) NSString *album_name; // @synthesize album_name=_album_name;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
@property(retain, nonatomic) NSString *singers; // @synthesize singers=_singers;
@property(retain, nonatomic) NSString *artist_logo; // @synthesize artist_logo=_artist_logo;
@property(retain, nonatomic) NSString *artist_name; // @synthesize artist_name=_artist_name;
@property(retain, nonatomic) NSNumber *artist_id; // @synthesize artist_id=_artist_id;
@property(retain, nonatomic) NSString *song_name; // @synthesize song_name=_song_name;
@property(retain, nonatomic) NSNumber *song_id; // @synthesize song_id=_song_id;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

