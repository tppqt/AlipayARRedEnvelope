//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWScrollViewController.h"

#import "EWPhotoPreviewViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class AMapPOI, APPickerView, EWChoosePOIView, EWInputView, EWMultiProtocolView, EWPButtonView, EWPChooseView, EWPTextFieldView, EWPhotoPreviewView, MOPTaskDetailResponse, NSArray, NSMutableArray, NSString, UILabel, UIScrollView, UIView;

@interface EWPublishHelpViewController : EWScrollViewController <UIScrollViewDelegate, EWPhotoPreviewViewDelegate>
{
    _Bool _needToCheckUpCertifiedStatus;
    _Bool _needToTipQuitEdit;
    int _publishMode;
    UIView *_contentView;
    UILabel *_productDescription;
    EWInputView *_titleInputView;
    EWInputView *_contentInputView;
    EWPhotoPreviewView *_photoPreviewView;
    EWPChooseView *_serviceTypeChooseView;
    EWChoosePOIView *_choosePOIView;
    EWPTextFieldView *_serviceCostView;
    EWPButtonView *_buttonView;
    EWPChooseView *_availableDate;
    EWMultiProtocolView *_serviceProtocolView;
    NSMutableArray *_protocols;
    NSString *_selectCategoryId;
    NSString *_serviceType;
    NSArray *_selectlicenseTypes;
    NSString *_serviceArea;
    id <SAAccountService> _accountService;
    AMapPOI *_poi;
    APPickerView *_datePickerView;
    NSMutableArray *_later7Days;
    long long _dateIndex;
    NSString *_validityPeriod;
    NSString *_requestId;
    NSString *_taskId;
    NSString *_serviceTypeName;
    MOPTaskDetailResponse *_response;
}

@property(nonatomic) _Bool needToTipQuitEdit; // @synthesize needToTipQuitEdit=_needToTipQuitEdit;
@property(retain, nonatomic) MOPTaskDetailResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *serviceTypeName; // @synthesize serviceTypeName=_serviceTypeName;
@property(nonatomic) int publishMode; // @synthesize publishMode=_publishMode;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *validityPeriod; // @synthesize validityPeriod=_validityPeriod;
@property(nonatomic) long long dateIndex; // @synthesize dateIndex=_dateIndex;
@property(retain, nonatomic) NSMutableArray *later7Days; // @synthesize later7Days=_later7Days;
@property(retain, nonatomic) APPickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) AMapPOI *poi; // @synthesize poi=_poi;
@property(nonatomic) _Bool needToCheckUpCertifiedStatus; // @synthesize needToCheckUpCertifiedStatus=_needToCheckUpCertifiedStatus;
@property(retain, nonatomic) id <SAAccountService> accountService; // @synthesize accountService=_accountService;
@property(retain, nonatomic) NSString *serviceArea; // @synthesize serviceArea=_serviceArea;
@property(retain, nonatomic) NSArray *selectlicenseTypes; // @synthesize selectlicenseTypes=_selectlicenseTypes;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *selectCategoryId; // @synthesize selectCategoryId=_selectCategoryId;
@property(retain, nonatomic) NSMutableArray *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) EWMultiProtocolView *serviceProtocolView; // @synthesize serviceProtocolView=_serviceProtocolView;
@property(retain, nonatomic) EWPChooseView *availableDate; // @synthesize availableDate=_availableDate;
@property(retain, nonatomic) EWPButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) EWPTextFieldView *serviceCostView; // @synthesize serviceCostView=_serviceCostView;
@property(retain, nonatomic) EWChoosePOIView *choosePOIView; // @synthesize choosePOIView=_choosePOIView;
@property(retain, nonatomic) EWPChooseView *serviceTypeChooseView; // @synthesize serviceTypeChooseView=_serviceTypeChooseView;
@property(retain, nonatomic) EWPhotoPreviewView *photoPreviewView; // @synthesize photoPreviewView=_photoPreviewView;
@property(retain, nonatomic) EWInputView *contentInputView; // @synthesize contentInputView=_contentInputView;
@property(retain, nonatomic) EWInputView *titleInputView; // @synthesize titleInputView=_titleInputView;
@property(retain, nonatomic) UILabel *productDescription; // @synthesize productDescription=_productDescription;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)publishPrepareCheckup;
- (void)selectedPickerView:(id)arg1;
- (void)cancelPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)chooseAvailableData;
- (void)dealloc;
- (void)previewImages:(id)arg1 currentImageIndex:(unsigned long long)arg2;
- (void)needToResizePhotoPreview;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)handleTaskDetailResponse:(id)arg1;
- (void)requestTaskDetailData;
- (long long)handleInitResponse:(id)arg1;
- (void)prepareTaskData;
- (void)handleResponse:(id)arg1;
- (void)publishHelp;
- (void)locationPicker:(id)arg1 poiDidSelected:(id)arg2;
- (void)chooseLocation;
- (void)gotoChooseServiceArea;
- (void)selectedCategoryName:(id)arg1 categoryId:(id)arg2 licenseTypes:(id)arg3;
- (void)gotoChooseServiceType;
- (void)goBack;
- (void)gotoHelp;
- (void)setupNav;
- (void)setupContentSize;
- (void)setupConstraints;
- (void)setupView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareCheckUp;
- (id)dataFormatterForDate:(id)arg1;
- (void)setupDateString;
- (void)viewDidLoad;
- (id)init;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

