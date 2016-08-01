/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>

@class DOMHTMLInputElement, WebFrame;

@interface WBUFormAutoCompleteStateWK1 : WBUFormAutoCompleteState {

	DOMHTMLInputElement* _textField;
	WebFrame* _webFrame;

}

@property (nonatomic,readonly) WebFrame * webFrame;              //@synthesize webFrame=_webFrame - In the implementation block
-(void)dealloc;
-(id)frame;
-(void)invalidate;
-(id)webView;
-(WebFrame *)webFrame;
-(id)textFieldValue;
-(id)initWithTextField:(id)arg1 webFrame:(id)arg2 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusField:(id)arg3 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2 ;
-(void)annotateForm:(id)arg1 withValues:(id)arg2 ;
-(void)fillGeneratedPassword:(id)arg1 inField:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3 ;
@end

