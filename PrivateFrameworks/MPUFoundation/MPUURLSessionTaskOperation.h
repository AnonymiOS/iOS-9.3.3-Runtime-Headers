/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUOperation.h>

@class NSURLSessionTask;

@interface MPUURLSessionTaskOperation : MPUOperation {

	NSURLSessionTask* _task;

}
+(id)operationWithURLSessionTask:(id)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithURLSessionTask:(id)arg1 ;
-(void)execute;
@end
