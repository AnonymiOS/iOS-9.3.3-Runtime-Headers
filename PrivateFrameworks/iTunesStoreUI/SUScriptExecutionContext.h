/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/SUWebViewDelegate.h>

@class ISStoreURLOperation, SUWebView, NSString;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {

	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;

}

@property (nonatomic,readonly) id windowScriptObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalExecutionContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(OpaqueJSContextRef)globalExecutionContext;
-(id)windowScriptObject;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)_webView;
-(BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)evaluateScriptAtURL:(id)arg1 ;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(void)evaluateScriptWithURLBagKey:(id)arg1 ;
-(id)parentViewControllerForWebView:(id)arg1 ;
@end

