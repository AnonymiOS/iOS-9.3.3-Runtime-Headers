/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMapTable, NSHashTable, NSObject;

@interface FigCaptureSessionObservatory : NSObject {

	NSMapTable* _captureSessionsStorage;
	NSHashTable* _registeredObservers;
	NSObject*<OS_dispatch_queue> _queue;
	long long _lastRunningIdentifier;

}
+(void)initialize;
+(id)sharedObservatory;
-(void)dealloc;
-(id)init;
-(void)captureSessionWasCreated:(void*)arg1 ;
-(void)_registerObserver:(id)arg1 ;
-(void)_setRunning:(BOOL)arg1 forCaptureSession:(OpaqueFigCaptureSessionRef)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
@end

