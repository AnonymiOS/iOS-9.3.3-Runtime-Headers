/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPreferences> _preferences;

}

@property (assign,setter=_setTelephoneNumberDetectionIsEnabled:,nonatomic) BOOL _telephoneNumberDetectionIsEnabled; 
@property (assign,setter=_setStorageBlockingPolicy:,nonatomic) long long _storageBlockingPolicy; 
@property (assign,setter=_setCompositingBordersVisible:,nonatomic) BOOL _compositingBordersVisible; 
@property (assign,setter=_setCompositingRepaintCountersVisible:,nonatomic) BOOL _compositingRepaintCountersVisible; 
@property (assign,setter=_setTiledScrollingIndicatorVisible:,nonatomic) BOOL _tiledScrollingIndicatorVisible; 
@property (assign,setter=_setVisibleDebugOverlayRegions:,nonatomic) unsigned long long _visibleDebugOverlayRegions; 
@property (assign,setter=_setSimpleLineLayoutDebugBordersEnabled:,nonatomic) BOOL _simpleLineLayoutDebugBordersEnabled; 
@property (assign,setter=_setDeveloperExtrasEnabled:,nonatomic) BOOL _developerExtrasEnabled; 
@property (assign,setter=_setLogsPageMessagesToSystemConsoleEnabled:,nonatomic) BOOL _logsPageMessagesToSystemConsoleEnabled; 
@property (assign,setter=_setAllowFileAccessFromFileURLs:,nonatomic) BOOL _allowFileAccessFromFileURLs; 
@property (assign,setter=_setJavaScriptRuntimeFlags:,nonatomic) unsigned long long _javaScriptRuntimeFlags; 
@property (assign,setter=_setStandalone:,getter=_isStandalone,nonatomic) BOOL _standalone; 
@property (assign,setter=_setDiagnosticLoggingEnabled:,nonatomic) BOOL _diagnosticLoggingEnabled; 
@property (assign,setter=_setAntialiasedFontDilationEnabled:,nonatomic) BOOL _antialiasedFontDilationEnabled; 
@property (assign,setter=_setOfflineApplicationCacheIsEnabled:,nonatomic) BOOL _offlineApplicationCacheIsEnabled; 
@property (assign,setter=_setFullScreenEnabled:,nonatomic) BOOL _fullScreenEnabled; 
@property (assign,nonatomic) double minimumFontSize; 
@property (assign,nonatomic) BOOL javaScriptEnabled; 
@property (assign,nonatomic) BOOL javaScriptCanOpenWindowsAutomatically; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)_setStandalone:(BOOL)arg1 ;
-(BOOL)_telephoneNumberDetectionIsEnabled;
-(void)_setTelephoneNumberDetectionIsEnabled:(BOOL)arg1 ;
-(long long)_storageBlockingPolicy;
-(void)_setStorageBlockingPolicy:(long long)arg1 ;
-(BOOL)_offlineApplicationCacheIsEnabled;
-(BOOL)_fullScreenEnabled;
-(void)_setFullScreenEnabled:(BOOL)arg1 ;
-(BOOL)_compositingBordersVisible;
-(void)_setCompositingBordersVisible:(BOOL)arg1 ;
-(BOOL)_compositingRepaintCountersVisible;
-(void)_setCompositingRepaintCountersVisible:(BOOL)arg1 ;
-(BOOL)_tiledScrollingIndicatorVisible;
-(void)_setTiledScrollingIndicatorVisible:(BOOL)arg1 ;
-(unsigned long long)_visibleDebugOverlayRegions;
-(void)_setVisibleDebugOverlayRegions:(unsigned long long)arg1 ;
-(BOOL)_simpleLineLayoutDebugBordersEnabled;
-(void)_setSimpleLineLayoutDebugBordersEnabled:(BOOL)arg1 ;
-(BOOL)_developerExtrasEnabled;
-(void)_setDeveloperExtrasEnabled:(BOOL)arg1 ;
-(BOOL)_logsPageMessagesToSystemConsoleEnabled;
-(void)_setLogsPageMessagesToSystemConsoleEnabled:(BOOL)arg1 ;
-(BOOL)_allowFileAccessFromFileURLs;
-(void)_setAllowFileAccessFromFileURLs:(BOOL)arg1 ;
-(unsigned long long)_javaScriptRuntimeFlags;
-(void)_setJavaScriptRuntimeFlags:(unsigned long long)arg1 ;
-(BOOL)_isStandalone;
-(BOOL)_diagnosticLoggingEnabled;
-(void)_setDiagnosticLoggingEnabled:(BOOL)arg1 ;
-(BOOL)_antialiasedFontDilationEnabled;
-(void)_setAntialiasedFontDilationEnabled:(BOOL)arg1 ;
-(void)_setOfflineApplicationCacheIsEnabled:(BOOL)arg1 ;
-(BOOL)javaScriptCanOpenWindowsAutomatically;
-(void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)minimumFontSize;
-(void)setJavaScriptEnabled:(BOOL)arg1 ;
-(Object*)_apiObject;
-(BOOL)javaScriptEnabled;
@end

