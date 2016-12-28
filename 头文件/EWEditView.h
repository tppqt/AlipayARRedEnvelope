//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BEEPhotoPickerDelegate.h"
#import "EWEditViewToolbarDelegate.h"
#import "UITextViewDelegate.h"

@class EWEditViewToolbar, EWTextView, NSString, UIFont, UILabel, UIViewController<EWEditViewProtocol>;

@interface EWEditView : UIView <UITextViewDelegate, BEEPhotoPickerDelegate, EWEditViewToolbarDelegate>
{
    _Bool _editing;
    int _editType;
    UIViewController<EWEditViewProtocol> *_delegate;
    double _toolbarHeight;
    EWTextView *_textView;
    unsigned long long _maxImageNum;
    unsigned long long _maxWords;
    double _textViewOffsetTop;
    UILabel *_titleLabel;
    UILabel *_placeholderLabel;
    UIFont *_font;
    EWEditViewToolbar *_toolbar;
    double _keyboardHeight;
    UIView *_bottomLine;
    UILabel *_tipLabel;
    struct _NSRange _lastSelectedRange;
}

@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct _NSRange lastSelectedRange; // @synthesize lastSelectedRange=_lastSelectedRange;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) EWEditViewToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double textViewOffsetTop; // @synthesize textViewOffsetTop=_textViewOffsetTop;
@property(nonatomic) unsigned long long maxWords; // @synthesize maxWords=_maxWords;
@property(nonatomic) unsigned long long maxImageNum; // @synthesize maxImageNum=_maxImageNum;
@property(nonatomic) int editType; // @synthesize editType=_editType;
@property(retain, nonatomic) EWTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double toolbarHeight; // @synthesize toolbarHeight=_toolbarHeight;
@property(nonatomic) __weak UIViewController<EWEditViewProtocol> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateTextViewTipAndPlaceholder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)allAttachments;
- (void)dealloc;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)endEditing;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)tobeFirstResponder:(id)arg1;
- (void)insertImageToTextView:(id)arg1 isLastObj:(_Bool)arg2;
- (void)uploadImages:(id)arg1;
- (void)photoPickerControllerDidCancel:(id)arg1 withError:(unsigned long long)arg2;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(id)arg2 theOriginal:(_Bool)arg3;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (void)EWToolbarPickerImageButtonClicked;
- (void)EWToolbarHideKeyboardButtonClicked;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addKeyboardObserver;
- (void)hideToolbar;
- (void)showToolbar;
- (id)initWithTitle:(id)arg1 editType:(int)arg2 placeholder:(id)arg3 needSplitLine:(_Bool)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

