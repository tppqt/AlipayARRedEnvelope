//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDEvent.h"

@class NSData, NSDate, NSError, NSString, NSURLRequest, NSURLResponse, PSDResponse;

@interface PSDProxyEvent : PSDEvent
{
    _Bool _willRedirectRequest;
    _Bool _willHoldReceiveData;
    NSString *_uniqueId;
    NSString *_channelId;
    NSURLRequest *_request;
    NSDate *_requestDate;
    NSURLResponse *_response;
    NSDate *_responseDate;
    NSData *_receiveData;
    NSError *_error;
    unsigned long long _receiveDataLength;
    PSDResponse *_customResponse;
}

+ (id)finishReceiveDataEvent:(id)arg1 response:(id)arg2 requestDate:(id)arg3 responseDate:(id)arg4 receiveData:(id)arg5 error:(id)arg6 uniqueId:(id)arg7 channelId:(id)arg8;
+ (id)finishLoadEvent:(id)arg1 response:(id)arg2 requestDate:(id)arg3 responseDate:(id)arg4 receiveData:(id)arg5 receiveDataLength:(unsigned long long)arg6 error:(id)arg7 uniqueId:(id)arg8 channelId:(id)arg9;
+ (id)receiveDataEvent:(id)arg1 response:(id)arg2 receiveData:(id)arg3 uniqueId:(id)arg4 channelId:(id)arg5;
+ (id)receiveResponse:(id)arg1 request:(id)arg2 requestDate:(id)arg3 responseDate:(id)arg4 uniqueId:(id)arg5 channelId:(id)arg6;
+ (id)responseHandler:(id)arg1 response:(id)arg2 requestDate:(id)arg3 responseDate:(id)arg4 channelId:(id)arg5;
+ (id)startLoadEvent:(id)arg1 requestDate:(id)arg2 uniqueId:(id)arg3 channelId:(id)arg4;
+ (id)requestHandlerEvent:(id)arg1 requestDate:(id)arg2 customResponse:(id)arg3 channelId:(id)arg4;
@property(readonly, nonatomic) PSDResponse *customResponse; // @synthesize customResponse=_customResponse;
@property(nonatomic) unsigned long long receiveDataLength; // @synthesize receiveDataLength=_receiveDataLength;
@property(nonatomic) _Bool willHoldReceiveData; // @synthesize willHoldReceiveData=_willHoldReceiveData;
@property(nonatomic) _Bool willRedirectRequest; // @synthesize willRedirectRequest=_willRedirectRequest;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *receiveData; // @synthesize receiveData=_receiveData;
@property(readonly, nonatomic) NSDate *responseDate; // @synthesize responseDate=_responseDate;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)setChannelId:(id)arg1;
- (void)setCustomResponse:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponseDate:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setUniqueId:(id)arg1;

@end

