//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODCommonResult.h"

@class NSString;

@interface GIFTPRODCommonPagedResult : GIFTPRODCommonResult
{
    _Bool _hasNextPage;
    int _pageSize;
    int _pageNo;
    int _count;
    NSString *_lastDataId;
}

@property(retain, nonatomic) NSString *lastDataId; // @synthesize lastDataId=_lastDataId;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;

@end

