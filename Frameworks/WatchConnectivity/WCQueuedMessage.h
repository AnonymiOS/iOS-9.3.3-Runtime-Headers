/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WCMessage, NSDate;

@interface WCQueuedMessage : NSObject {

	WCMessage* _message;
	/*^block*/id _completionHandler;
	NSDate* _creationDate;
	long long _retryCount;

}

@property (retain) WCMessage * message;                  //@synthesize message=_message - In the implementation block
@property (copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(WCMessage *)message;
-(void)setMessage:(WCMessage *)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(NSDate *)creationDate;
-(id)initWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

