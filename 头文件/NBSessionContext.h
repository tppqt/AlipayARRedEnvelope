//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NBAppDataSourceManager, NSDictionary, NSString, PSDSession, UIViewController;

@interface NBSessionContext : NSObject
{
    NSString *_nbl_id;
    unsigned long long _sessionType;
    Class _viewControllerClass;
    Class _contentViewClass;
    NSDictionary *_params;
    UIViewController *_rootViewController;
    PSDSession *_psdSession;
    NBAppDataSourceManager *_appDataSourceManager;
    NSDictionary *_expando;
}

@property(retain, nonatomic) NSDictionary *expando; // @synthesize expando=_expando;
@property(retain, nonatomic) NBAppDataSourceManager *appDataSourceManager; // @synthesize appDataSourceManager=_appDataSourceManager;
@property(nonatomic) __weak PSDSession *psdSession; // @synthesize psdSession=_psdSession;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) Class contentViewClass; // @synthesize contentViewClass=_contentViewClass;
@property(nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *nbl_id; // @synthesize nbl_id=_nbl_id;
- (void).cxx_destruct;
- (id)init;

@end

