/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, NSString;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPage> _page;
	WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (nonatomic,readonly) OpaqueWKBundlePageRef _bundlePageRef; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (setter=_setFormDelegate:,__weak) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate; 
@property (assign,setter=_setDefersLoading:,nonatomic) BOOL _defersLoading; 
@property (nonatomic,readonly) BOOL _usesNonPersistentWebsiteDataStore; 
@property (readonly) WKDOMDocument * mainFrameDocument; 
@property (readonly) WKDOMRange * selectedRange; 
@property (readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup; 
@property (__weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(void)_setFormDelegate:(id)arg1 ;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(BOOL)_defersLoading;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(BOOL)_usesNonPersistentWebsiteDataStore;
-(WKBrowsingContextHandle *)handle;
-(WKDOMDocument *)mainFrameDocument;
-(void)dealloc;
-(WKDOMRange *)selectedRange;
-(WKWebProcessPlugInFrame *)mainFrame;
-(Object*)_apiObject;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
-(WKWebProcessPlugInPageGroup *)pageGroup;
@end

