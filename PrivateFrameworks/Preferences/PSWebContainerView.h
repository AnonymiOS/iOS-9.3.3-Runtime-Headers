/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSData, NSString;

@interface PSWebContainerView : UIView <UIWebViewDelegate> {

	UIWebView* _webView;
	NSData* _content;

}

@property (nonatomic,readonly) UIWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSData * content;                      //@synthesize content=_content - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(NSData *)content;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)setContent:(NSData *)arg1 ;
-(double)heightForWidth:(double)arg1 ;
@end

