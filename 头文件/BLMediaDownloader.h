//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSString, NSURL, NSURLConnection;

@interface BLMediaDownloader : NSObject <NSURLConnectionDataDelegate>
{
    CDUnknownBlockType _onProgress;
    CDUnknownBlockType _onComplete;
    NSURL *_url;
    NSURLConnection *_connection;
    long long _totalBytes;
    NSMutableData *_data;
    NSString *_tradeNo;
}

+ (id)download:(id)arg1 tradeNo:(id)arg2 withProgress:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)downing;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)start;
- (id)initWithUrl:(id)arg1 tradeNo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

