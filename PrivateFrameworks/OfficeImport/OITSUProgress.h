/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface OITSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject*<OS_dispatch_queue> mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) BOOL indeterminate; 
@property (copy) NSString * message; 
-(void)dealloc;
-(id)init;
-(double)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(BOOL)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end

