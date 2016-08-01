/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WebFrameLoadDelegate.h>

@protocol _UIWebBrowserLoadingControllerDelegate;
@class NSURL, NSArray, NSString, NSError, WebDataSource, UIWebBrowserView;

@interface _UIWebBrowserLoadingController : NSObject <WebFrameLoadDelegate> {

	NSURL* _backURL;
	NSURL* _forwardURL;
	NSArray* _fallbackURLs;
	BOOL _securePageHasInsecureContent;
	NSString* _lastSuccessfulURLString;
	BOOL _loadEndedWithError;
	BOOL _loadStoppedFromAPI;
	NSError* _errorThatCausedLoadToEnd;
	WebDataSource* _dataSourceWithError;
	unsigned _pendingFrameLoadMessages;
	NSString* _userTypedAddress;
	BOOL _canGoBack;
	BOOL _canGoForward;
	BOOL _loading;
	float _estimatedProgress;
	id<_UIWebBrowserLoadingControllerDelegate> _delegate;
	UIWebBrowserView* _browserView;
	NSString* _title;
	NSString* _URLString;
	NSURL* _URL;
	long long _loadingState;

}

@property (assign,nonatomic) id<_UIWebBrowserLoadingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebBrowserView * browserView;                                   //@synthesize browserView=_browserView - In the implementation block
@property (nonatomic,readonly) BOOL canGoBack;                                                 //@synthesize canGoBack=_canGoBack - In the implementation block
@property (nonatomic,readonly) BOOL canGoForward;                                              //@synthesize canGoForward=_canGoForward - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading;                                  //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) long long loadingState;                                           //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,nonatomic) float estimatedProgress;                                          //@synthesize estimatedProgress=_estimatedProgress - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                                           //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UIWebBrowserLoadingControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)reload;
-(id<_UIWebBrowserLoadingControllerDelegate>)delegate;
-(NSString *)title;
-(BOOL)isSecure;
-(NSURL *)URL;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5 ;
-(void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2 ;
-(UIWebBrowserView *)browserView;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)setURL:(NSURL *)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(NSString *)URLString;
-(void)_setBackURL:(id)arg1 ;
-(void)_setForwardURL:(id)arg1 ;
-(void)setEstimatedProgress:(float)arg1 ;
-(void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2 ;
-(id)_dataSourceURL;
-(void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(BOOL)arg2 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(BOOL)_URLMayStartLoad:(id)arg1 ;
-(void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2 fromDelegate:(BOOL)arg3 fromFragmentLoad:(BOOL)arg4 ;
-(void)_updateURLString;
-(id)_getDataSourceURL:(id)arg1 ;
-(void)_updateURL;
-(void)_attemptTransitionToLoadingState:(long long)arg1 ;
-(void)_updateBackForward;
-(void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2 fromFragmentLoad:(BOOL)arg3 ;
-(void)_loadRequest:(id)arg1 userDriven:(BOOL)arg2 ;
-(void)_setFallbackURLs:(id)arg1 ;
-(void)_setUserTypedAddress:(id)arg1 ;
-(void)_tryMultipleURLs:(id)arg1 ;
-(void)_progressChanged:(id)arg1 ;
-(void)_setLoadingFromDelegate:(BOOL)arg1 withError:(id)arg2 dataSource:(id)arg3 ;
-(void)_updateAfterHistoryChange;
-(void)_setSecurePageHasInsecureContent:(BOOL)arg1 ;
-(void)_didNotLoadURL;
-(void)setBrowserView:(UIWebBrowserView *)arg1 ;
-(void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2 ;
-(void)webViewDidDisplayInsecureContent:(id)arg1 ;
-(void)webView:(id)arg1 didRunInsecureContent:(id)arg2 ;
-(float)estimatedProgress;
-(long long)loadingState;
-(void)setLoadingState:(long long)arg1 ;
@end

