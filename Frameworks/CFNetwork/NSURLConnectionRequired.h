/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)_setDelegateQueue:(id)arg1;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)cancel;
-(void)start;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

