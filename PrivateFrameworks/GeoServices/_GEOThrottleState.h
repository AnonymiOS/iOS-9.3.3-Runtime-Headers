/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _GEOThrottleState : NSObject {

	unsigned long long _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned long long requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;                         //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(id)description;
-(unsigned long long)requestCount;
-(double)lastResetTime;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)setLastResetTime:(double)arg1 ;
@end
