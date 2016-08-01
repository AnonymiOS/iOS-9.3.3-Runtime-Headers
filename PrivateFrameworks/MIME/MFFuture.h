/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFFuture.h>

@protocol MFFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end


@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface MFFuture : NSObject <MFFuture> {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)future;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(/*^block*/id)completionHandlerAdapter;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)result:(id*)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
@end
