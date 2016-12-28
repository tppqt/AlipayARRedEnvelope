//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CPTAnnotationHostLayer, CPTLayer;

@interface CPTAnnotation : NSObject <NSCoding>
{
    CPTAnnotationHostLayer *annotationHostLayer;
    CPTLayer *contentLayer;
    struct CGPoint contentAnchorPoint;
    struct CGPoint displacement;
    double rotation;
}

@property(nonatomic) double rotation; // @synthesize rotation;
@property(nonatomic) struct CGPoint contentAnchorPoint; // @synthesize contentAnchorPoint;
@property(nonatomic) struct CGPoint displacement; // @synthesize displacement;
@property(nonatomic) CPTAnnotationHostLayer *annotationHostLayer; // @synthesize annotationHostLayer;
@property(retain, nonatomic) CPTLayer *contentLayer; // @synthesize contentLayer;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)positionContentLayer;

@end

