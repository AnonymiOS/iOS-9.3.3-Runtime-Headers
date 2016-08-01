/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {

	ObjectStorage<WebKit::WebFrame> _frame;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) BOOL containsAnyFormElements; 
@property (nonatomic,readonly) _WKFrameHandle * handle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(id)hitTest:(CGPoint)arg1 ;
-(NSArray *)childFrames;
-(Object*)_apiObject;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_browserContextController;
-(BOOL)containsAnyFormElements;
-(id)_parentFrame;
-(BOOL)_hasCustomContentProvider;
-(id)_certificateChain;
-(id)_provisionalURL;
-(id)jsContextForWorld:(id)arg1 ;
-(_WKFrameHandle *)handle;
@end

