/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	BOOL _shouldRetryRequest;
	BOOL _alwaysReportFailures;

}
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(BOOL)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(BOOL)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)setDone:(BOOL)arg1 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
@end

