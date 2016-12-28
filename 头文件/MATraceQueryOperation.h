//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MATraceRequest, NSArray, NSDate;

@interface MATraceQueryOperation : NSOperation
{
    double _timeOut;
    MATraceRequest *_request;
    NSDate *_beginDate;
    NSArray *_subRequests;
}

@property(retain, nonatomic) NSArray *subRequests; // @synthesize subRequests=_subRequests;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) MATraceRequest *request; // @synthesize request=_request;
@property(nonatomic) double timeOut; // @synthesize timeOut=_timeOut;
- (void).cxx_destruct;
- (_Bool)isTimeOut;
- (id)syncSingleQueryProcessedTraceWith:(id)arg1 error:(id *)arg2;
- (void)cancel;
- (void)main;
- (id)init;

@end

