/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface SLURLPreviewGenerator : NSObject <UIWebViewDelegate> {

	UIWebView* _webView;
	/*^block*/id _completion;

}

@property (readonly) UIWebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)loadURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callCompletionWithPreview:(id)arg1 ;
@end

