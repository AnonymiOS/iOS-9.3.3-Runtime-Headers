/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface ISDelegateProxy : NSObject {

	id _delegate;
	NSLock* _lock;
	BOOL _shouldMessageMainThread;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)sendInvocationToDelegate:(id)arg1 ;
-(void)setShouldMessageMainThread:(BOOL)arg1 ;
@end

