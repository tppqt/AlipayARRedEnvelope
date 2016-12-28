//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface O2OBizViewControllerHelper : NSObject
{
    double _rpcStartTime;
    double _pageStartTime;
    _Bool _pageMark;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)vz_resetPageMark:(_Bool)arg1;
- (void)vz_updatePageStartTime;
- (void)vz_showError:(id)arg1 withModel:(id)arg2;
- (void)vz_showLoading:(id)arg1;
- (void)vz_showEmpty:(id)arg1;
- (void)vz_showModel:(id)arg1;
- (void)vz_reload;
- (void)vz_load;
- (void)vz_viewWillDisappear:(_Bool)arg1;
- (void)vz_viewWillAppear:(_Bool)arg1;
- (void)vz_viewDidLoad;
- (void)vz_dealloc;
- (void)vz_init;
- (id)initWithViewController:(id)arg1;

@end

