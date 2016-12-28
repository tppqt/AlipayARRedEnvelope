//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UIWebViewDelegate.h"

@class NSDictionary, NSString, UIWebView;

@interface ALPBaseWebViewController : DTViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_baseUrl;
    NSDictionary *_paramDic;
}

@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)paramDicFromUrl:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)existApp;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidLoad;
- (id)initWithBaseUrl:(id)arg1 andParamDic:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

