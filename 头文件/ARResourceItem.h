//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ThreeDResource, TwoDResource;

@interface ARResourceItem : NSObject
{
    float _version;
    NSString *_resourceName;
    NSString *_resourceId;
    NSString *_resourceType;
    NSString *_floder;
    TwoDResource *_twoDResource;
    ThreeDResource *_threeDResource;
    NSString *_music;
}

@property(retain, nonatomic) NSString *music; // @synthesize music=_music;
@property(retain, nonatomic) ThreeDResource *threeDResource; // @synthesize threeDResource=_threeDResource;
@property(retain, nonatomic) TwoDResource *twoDResource; // @synthesize twoDResource=_twoDResource;
@property(nonatomic) float version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *floder; // @synthesize floder=_floder;
@property(retain, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;
- (id)initWithParam:(id)arg1 enginePath:(id)arg2;

@end

