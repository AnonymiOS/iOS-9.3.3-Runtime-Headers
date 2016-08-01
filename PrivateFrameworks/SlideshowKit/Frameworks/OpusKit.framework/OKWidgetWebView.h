/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKWidgetWebViewProxyExports.h>

@class NSString, NSDictionary, UIWebView;

@interface OKWidgetWebView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetWebViewProxyExports> {

	NSString* _urlText;
	NSDictionary* _options;
	UIWebView* _webView;
	BOOL _scaleToFit;
	NSString* _webDidLoadActionScript;
	BOOL _isFrameLoaded;

}

@property (nonatomic,copy) NSString * urlText;                      //@synthesize urlText=_urlText - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL isFrameLoaded;                  //@synthesize isFrameLoaded=_isFrameLoaded - In the implementation block
@property (nonatomic,copy) UIWebView * webView;                     //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)prepareForRefresh;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(BOOL)settingScaleToFit;
-(void)setSettingScaleToFit:(BOOL)arg1 ;
-(void)setUrlText:(NSString *)arg1 ;
-(void)reloadWebView;
-(NSString *)urlText;
-(BOOL)isFrameLoaded;
-(id)settingUrlText;
-(void)setSettingUrlText:(id)arg1 ;
-(void)setSettingWebDidLoadActionScript:(id)arg1 ;
@end
