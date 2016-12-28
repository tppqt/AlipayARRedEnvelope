//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "WKTableViewControllerDelegate.h"

@class APGLocalSearchEngineResult, APGSearchGroupResult, APGSearchManager, NSArray, NSString, UILabel, UIView, WKTableViewController;

@interface APGMessageLogDetailViewController : DTViewController <WKTableViewControllerDelegate>
{
    APGSearchGroupResult *_groupResult;
    NSString *_titleDesc;
    long long _count;
    NSString *_tableName;
    NSString *_searchId;
    WKTableViewController *_tableViewController;
    UIView *_titleView;
    UILabel *_titleViewLabel;
    APGSearchManager *_searchManager;
    unsigned long long _queryIndex;
    NSString *_currentClickId;
    APGLocalSearchEngineResult *_searchEngineResult;
    long long _startIndex;
    NSArray *_logRecords;
}

@property(retain, nonatomic) NSArray *logRecords; // @synthesize logRecords=_logRecords;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) APGLocalSearchEngineResult *searchEngineResult; // @synthesize searchEngineResult=_searchEngineResult;
@property(copy, nonatomic) NSString *currentClickId; // @synthesize currentClickId=_currentClickId;
@property(nonatomic) unsigned long long queryIndex; // @synthesize queryIndex=_queryIndex;
@property(retain, nonatomic) APGSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WKTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
@property(retain, nonatomic) APGSearchGroupResult *groupResult; // @synthesize groupResult=_groupResult;
- (void).cxx_destruct;
- (void)pagedEventFired:(id)arg1;
- (_Bool)viewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDivideView:(double)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

