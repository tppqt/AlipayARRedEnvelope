//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableData, NSString, NSURLConnection;

@interface WBHttpRequest : NSObject
{
    NSURLConnection *connection;
    NSMutableData *responseData;
    NSString *url;
    NSString *httpMethod;
    NSDictionary *params;
    id <WBHttpRequestDelegate> delegate;
    NSString *tag;
}

+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)requestWithAccessToken:(id)arg1 url:(id)arg2 httpMethod:(id)arg3 params:(id)arg4 delegate:(id)arg5 withTag:(id)arg6;
+ (id)requestWithURL:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 delegate:(id)arg4 withTag:(id)arg5;
@property(retain, nonatomic) NSString *tag; // @synthesize tag;
@property(nonatomic) id <WBHttpRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void)handleResponseData:(id)arg1;
- (void)failedWithError:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)appendUTF8Body:(id)arg1 dataString:(id)arg2;
- (id)postBodyHasRawData:(_Bool *)arg1;
- (void)disconnect;
- (void)connect;
- (void)dealloc;

@end

