/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class DOMElement, UIImage, UIWebView, NSString;

@interface SUDOMElement : NSObject {

	DOMElement* _element;
	UIImage* _image;
	UIWebView* _webView;

}

@property (nonatomic,readonly) DOMElement * element;                       //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) UIImage * imageRepresentation; 
@property (nonatomic,readonly) NSString * innerText; 
@property (nonatomic,retain) UIWebView * webView;                          //@synthesize webView=_webView - In the implementation block
+(CGRect)frameForDOMElement:(id)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(UIWebView *)webView;
-(NSString *)innerText;
-(void)setWebView:(UIWebView *)arg1 ;
-(CGRect)_frame;
-(id)newLabelForElementWithText:(id)arg1 ;
-(id)newImageView;
-(UIImage *)imageRepresentation;
-(id)initWithDOMElement:(id)arg1 ;
-(void)setProperty:(id)arg1 value:(id)arg2 ;
-(DOMElement *)element;
@end

