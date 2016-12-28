//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTChannelViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTChannelView, CTTextField, NSString, UIButton;

@interface CTInputTransferView : UIView <UITextFieldDelegate, CTChannelViewDelegate>
{
    _Bool _lockStyleChange;
    int _butStyle;
    int _payStyle;
    id <CTInputTransferViewDelegate> _delegate;
    CTTextField *_moneyTextField;
    CTChannelView *_channelView;
    UIView *_inputFrameView;
    UIButton *_cancelBtn;
    UIButton *_transferBtn;
}

@property(retain, nonatomic) UIButton *transferBtn; // @synthesize transferBtn=_transferBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *inputFrameView; // @synthesize inputFrameView=_inputFrameView;
@property(nonatomic) _Bool lockStyleChange; // @synthesize lockStyleChange=_lockStyleChange;
@property(retain, nonatomic) CTChannelView *channelView; // @synthesize channelView=_channelView;
@property(nonatomic) int payStyle; // @synthesize payStyle=_payStyle;
@property(nonatomic) int butStyle; // @synthesize butStyle=_butStyle;
@property(retain, nonatomic) CTTextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(nonatomic) __weak id <CTInputTransferViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldChangeRange:(struct _NSRange)arg1 textField:(id)arg2 replacementString:(id)arg3 withFormatStringMaxLength:(int)arg4;
- (void)changeCannelTaped:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)transferBtnTaped:(id)arg1;
- (void)textFieldValueChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancelTaped:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

