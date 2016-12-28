//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class MVCinemaModel, MVLineView, MVTagGroupView, NSArray, NSString, UIButton, UILabel;

@interface MVScheduleCinemaInfoView : UIView <UIActionSheetDelegate>
{
    MVLineView *_bottomLineView;
    MVCinemaModel *_cinemaModel;
    NSArray *_cinemaPhoneArray;
    UILabel *_nameLabel;
    UILabel *_addressLabel;
    UIButton *_callButton;
    MVTagGroupView *_capabilityView;
}

+ (id)capabilitiesWithContext:(id)arg1;
@property(retain, nonatomic) MVTagGroupView *capabilityView; // @synthesize capabilityView=_capabilityView;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSArray *cinemaPhoneArray; // @synthesize cinemaPhoneArray=_cinemaPhoneArray;
@property(retain, nonatomic) MVCinemaModel *cinemaModel; // @synthesize cinemaModel=_cinemaModel;
@property(retain, nonatomic) MVLineView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didClickCallButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

