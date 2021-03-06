//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NBNetDImageMarkParam : NSObject
{
    unsigned int _position;
    unsigned int _width;
    unsigned int _height;
    unsigned int _x;
    unsigned int _y;
    int _scale;
    unsigned int _transparency;
    unsigned int _percent;
    NSString *_fileid;
}

@property(nonatomic) unsigned int percent; // @synthesize percent=_percent;
@property(nonatomic) unsigned int transparency; // @synthesize transparency=_transparency;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *fileid; // @synthesize fileid=_fileid;
- (void).cxx_destruct;
- (id)description;
- (id)buildIndexKey;

@end

