/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ICDebugTimer : NSObject {

	double _elapsedTime;
	NSDate* _startingDate;

}

@property (assign) double elapsedTime;                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (retain) NSDate * startingDate;              //@synthesize startingDate=_startingDate - In the implementation block
+(id)debugTimerForClass:(Class)arg1 ;
+(void)enableTimersForClass:(Class)arg1 ;
-(void)stop;
-(void)start;
-(void)resume;
-(void)pause;
-(double)elapsedTime;
-(NSDate *)startingDate;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartingDate:(NSDate *)arg1 ;
@end

