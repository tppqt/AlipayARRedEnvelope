//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont, UIImage;

@interface NYStatusPopupViewNode : NSObject
{
    _Bool _needAdjust;
    _Bool _needSizeFit;
    int _nodeType;
    int _nodePosition;
    int _nodeAlign;
    double _offset;
    double _nodeHeight;
    double _nodeWidth;
    double _nodeMarginTop;
    double _marginBottom;
    NSString *_nodeContentText;
    UIColor *_contentTextColor;
    UIFont *_contentTextFont;
    CDUnknownBlockType _labelClick;
    long long _textAlignment;
    double _labelMaxWidth;
    double _labelMaxHeight;
    double _lineSpacing;
    long long _labelNumberOfLines;
    NSString *_imageURL;
    UIImage *_defaultImage;
    NSString *_buttonTitle;
    UIFont *_nodeButtonFont;
    long long _buttonType;
    CDUnknownBlockType _buttonClick;
}

@property(copy, nonatomic) CDUnknownBlockType buttonClick; // @synthesize buttonClick=_buttonClick;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) UIFont *nodeButtonFont; // @synthesize nodeButtonFont=_nodeButtonFont;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) long long labelNumberOfLines; // @synthesize labelNumberOfLines=_labelNumberOfLines;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double labelMaxHeight; // @synthesize labelMaxHeight=_labelMaxHeight;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth=_labelMaxWidth;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) CDUnknownBlockType labelClick; // @synthesize labelClick=_labelClick;
@property(retain, nonatomic) UIFont *contentTextFont; // @synthesize contentTextFont=_contentTextFont;
@property(retain, nonatomic) UIColor *contentTextColor; // @synthesize contentTextColor=_contentTextColor;
@property(retain, nonatomic) NSString *nodeContentText; // @synthesize nodeContentText=_nodeContentText;
@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) double nodeMarginTop; // @synthesize nodeMarginTop=_nodeMarginTop;
@property(nonatomic) double nodeWidth; // @synthesize nodeWidth=_nodeWidth;
@property(nonatomic) double nodeHeight; // @synthesize nodeHeight=_nodeHeight;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool needSizeFit; // @synthesize needSizeFit=_needSizeFit;
@property(nonatomic) _Bool needAdjust; // @synthesize needAdjust=_needAdjust;
@property(nonatomic) int nodeAlign; // @synthesize nodeAlign=_nodeAlign;
@property(nonatomic) int nodePosition; // @synthesize nodePosition=_nodePosition;
@property(nonatomic) int nodeType; // @synthesize nodeType=_nodeType;
- (void).cxx_destruct;
- (id)init;

@end

