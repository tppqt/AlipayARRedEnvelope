//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVArticle, MVTableView;

@interface MVRecommendBaseRow : MVTableRow
{
    _Bool _shouldShowBottomSeperator;
    _Bool _isInFilmDetail;
    MVArticle *_article;
    MVTableView *_tableView;
    long long _padType;
    id _shareContent;
}

@property(nonatomic) _Bool isInFilmDetail; // @synthesize isInFilmDetail=_isInFilmDetail;
@property(retain, nonatomic) id shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) long long padType; // @synthesize padType=_padType;
@property(nonatomic) _Bool shouldShowBottomSeperator; // @synthesize shouldShowBottomSeperator=_shouldShowBottomSeperator;
@property(nonatomic) __weak MVTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MVArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)rowWillAddToSection:(id)arg1;
- (void)commentCountDidChange:(id)arg1;
- (void)likeCountDidChange:(id)arg1;
- (void)registerNotification;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
@property(readonly, nonatomic) CDUnknownBlockType linkBlock;
@property(readonly, nonatomic) CDUnknownBlockType commentBlock;
@property(readonly, nonatomic) CDUnknownBlockType shareBlock;
@property(readonly, nonatomic) CDUnknownBlockType likeBlock;
- (id)initWithArticle:(id)arg1;
- (void)dealloc;

@end

