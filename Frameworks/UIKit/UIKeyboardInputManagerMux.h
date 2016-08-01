/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface UIKeyboardInputManagerMux : NSObject {

	NSMutableArray* _clients;
	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;

}

@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
+(id)sharedInstance;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(BOOL)hasSystemInputManager;
-(void)setSystemInputManagerFromKeyboardState:(id)arg1 ;
-(void)releaseConnectedClients;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(BOOL)_systemHasKbd;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)removeAllClients;
@end

