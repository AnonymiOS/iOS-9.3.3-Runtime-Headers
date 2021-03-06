/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCRetryCounter : NSObject {

	BOOL _scheduled;
	unsigned _retryCount;
	long long _latestRetry;
	long long _throttleHash;

}

@property (nonatomic,readonly) unsigned retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) long long latestRetry;               //@synthesize latestRetry=_latestRetry - In the implementation block
@property (nonatomic,readonly) long long throttleHash;              //@synthesize throttleHash=_throttleHash - In the implementation block
-(void)schedule;
-(unsigned)retryCount;
-(void)incrementRetry;
-(id)initWithThrottleHash:(long long)arg1 ;
-(long long)latestRetry;
-(long long)throttleHash;
@end

