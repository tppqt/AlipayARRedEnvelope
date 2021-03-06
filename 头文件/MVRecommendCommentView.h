//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MVArticle, MVRecommendCommentIconButton;

@interface MVRecommendCommentView : UIView
{
    MVArticle *_article;
    MVRecommendCommentIconButton *_likeButton;
    MVRecommendCommentIconButton *_commentButton;
    MVRecommendCommentIconButton *_shareButton;
    MVRecommendCommentIconButton *_linkButton;
    CDUnknownBlockType _likeBlock;
    CDUnknownBlockType _commentBlock;
    CDUnknownBlockType _shareBlock;
    CDUnknownBlockType _linkBlock;
}

@property(copy, nonatomic) CDUnknownBlockType linkBlock; // @synthesize linkBlock=_linkBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) CDUnknownBlockType commentBlock; // @synthesize commentBlock=_commentBlock;
@property(copy, nonatomic) CDUnknownBlockType likeBlock; // @synthesize likeBlock=_likeBlock;
@property(retain, nonatomic) MVRecommendCommentIconButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) MVRecommendCommentIconButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MVRecommendCommentIconButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) MVRecommendCommentIconButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MVArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (id)initWithTintColor:(id)arg1;

@end

