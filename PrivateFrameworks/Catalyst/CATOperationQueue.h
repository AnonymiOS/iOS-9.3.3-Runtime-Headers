/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)currentQueue;
+(id)mainQueue;
+(id)backgroundQueue;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(id)description;
-(id<CATOperationQueueDelegate>)delegate;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(void)startObserving:(id)arg1 ;
-(void)delegateWillAddOperation:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
-(void)stopObserving:(id)arg1 ;
@end
