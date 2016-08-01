/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKNPAPIPlugInContainer.h>

@protocol WKNPAPIPlugInContainer <NSObject>
@required
-(BOOL)openPlugInPreferencePane;

@end


@class NSString;

@interface WKNPAPIPlugInContainer : NSObject <WKNPAPIPlugInContainer> {

	NetscapePluginRef _plugin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(BOOL)openPlugInPreferencePane;
-(id)_initWithNetscapePlugin:(NetscapePluginRef)arg1 ;
@end
