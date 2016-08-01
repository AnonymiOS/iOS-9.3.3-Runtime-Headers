/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)dealloc;
-(id)responseDelegate;
-(id<_UIIVCInterface>)forwardingInterface;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_tearDownRemoteService;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
@end

