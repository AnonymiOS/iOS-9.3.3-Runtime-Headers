/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _DECFeedbackBuilder : NSObject {

	/*^block*/id _feedbackHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)initWithFeedbackHandler:(/*^block*/id)arg1 ;
-(void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(BOOL)arg4 ;
@end

