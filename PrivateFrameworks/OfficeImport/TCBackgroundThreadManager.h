/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate, OS_dispatch_queue, OS_dispatch_group;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSObject, TCMessageContext, TCProgressContext;

@interface TCBackgroundThreadManager : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	BOOL mIsWaiting;
	unsigned long long mBlockCount;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_group> mGroup;
	NSObject*<OS_dispatch_queue> mProgressReportingQueue;
	TCMessageContext* mMessageContext;
	TCProgressContext* mProgressContext;

}

@property (readonly) BOOL isCancelled; 
@property (retain) TCMessageContext * messageContext; 
@property (retain) TCProgressContext * progressContext; 
-(void)dealloc;
-(BOOL)isCancelled;
-(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
-(void)setMessageContext:(TCMessageContext *)arg1 ;
-(void)setProgressContext:(TCProgressContext *)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)addASyncBlock:(/*^block*/id)arg1 ;
-(void)waitUntilComplete;
-(TCMessageContext *)messageContext;
-(TCProgressContext *)progressContext;
@end

