/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setFinishTime:(double)arg1 ;
-(void)setReceivedResponseTime:(double)arg1 ;
-(void)setRenderFinishTime:(double)arg1 ;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(NSURLResponse *)URLResponse;
@end

