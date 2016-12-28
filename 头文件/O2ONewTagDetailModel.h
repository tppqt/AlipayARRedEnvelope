//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface O2ONewTagDetailModel : NSObject
{
    _Bool _isFocused;
    _Bool _isEditStatus;
    int _count;
    int _status;
    NSString *_content;
    NSString *_md5;
    unsigned long long _tagBtnType;
    NSString *_titleString;
}

+ (id)modelsWithTagDetails:(id)arg1;
+ (id)modelWithTagTitle:(id)arg1;
+ (id)modelWithTagTitle:(id)arg1 andTagButtonType:(unsigned long long)arg2;
+ (id)modelWithTagDetailInDict:(id)arg1;
+ (id)modelWithTagDetail:(id)arg1;
+ (id)modelWithTagDetail:(id)arg1 andTagButtonType:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) _Bool isEditStatus; // @synthesize isEditStatus=_isEditStatus;
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) unsigned long long tagBtnType; // @synthesize tagBtnType=_tagBtnType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

