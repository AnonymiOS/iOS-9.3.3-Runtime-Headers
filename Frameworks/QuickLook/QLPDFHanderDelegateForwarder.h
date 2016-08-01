/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebPDFViewHandlerDelegate.h>

@protocol NSObjectUIWebPDFViewHandlerDelegate;
@class UIWebView;

@interface QLPDFHanderDelegateForwarder : NSObject <UIWebPDFViewHandlerDelegate> {

	id<NSObject><UIWebPDFViewHandlerDelegate> _delegate;
	UIWebView* _webView;

}

@property (assign,nonatomic) id<NSObject><UIWebPDFViewHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
-(void)setDelegate:(id<NSObject><UIWebPDFViewHandlerDelegate>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<NSObject><UIWebPDFViewHandlerDelegate>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIWebView *)webView;
-(void)forwardInvocation:(id)arg1 ;
-(void)setWebView:(UIWebView *)arg1 ;
@end

