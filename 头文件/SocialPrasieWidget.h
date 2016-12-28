//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APSocialButton.h"

#import "MFWidgetPluginProtocol.h"

@class CCUglyClickChecker, NSDictionary, NSIndexPath, NSString;

@interface SocialPrasieWidget : APSocialButton <MFWidgetPluginProtocol>
{
    NSDictionary *_dataDic;
    id <CCollectionWidgetsDelegate> _adelegate;
    NSIndexPath *_widgetIndexPath;
    CCUglyClickChecker *_checker;
}

+ (id)subType;
+ (id)tagType;
@property(retain, nonatomic) CCUglyClickChecker *checker; // @synthesize checker=_checker;
@property(retain, nonatomic) NSIndexPath *widgetIndexPath; // @synthesize widgetIndexPath=_widgetIndexPath;
@property(nonatomic) __weak id <CCollectionWidgetsDelegate> adelegate; // @synthesize adelegate=_adelegate;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleClickRespond:(id)arg1;
- (void)refreshWidgets:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

