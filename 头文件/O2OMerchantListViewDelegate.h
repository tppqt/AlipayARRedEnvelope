//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListViewDelegate.h"

#import "BEEPhotoBrowserDelegate.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, O2OMerchantViewDataSource;

@interface O2OMerchantListViewDelegate : VZListViewDelegate <BEEPhotoBrowserDelegate, UITableViewDelegate>
{
    NSArray *_permitList;
    O2OMerchantViewDataSource *_ds;
}

@property(nonatomic) __weak O2OMerchantViewDataSource *ds; // @synthesize ds=_ds;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)showPhotoBrowser:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

