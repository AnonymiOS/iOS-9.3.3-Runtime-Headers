/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding> {

	NSDate* _stopTime;
	long long _stopReasons;
	NSDate* _lastMovieWriteAttemptTime;
	long long _movieWriteAttemptsCount;
	long long _failedStateReadAttemptsCount;

}

@property (nonatomic,retain) NSDate * stopTime;                                   //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) long long stopReasons;                               //@synthesize stopReasons=_stopReasons - In the implementation block
@property (nonatomic,readonly) NSDate * lastMovieWriteAttemptTime;                //@synthesize lastMovieWriteAttemptTime=_lastMovieWriteAttemptTime - In the implementation block
@property (nonatomic,readonly) long long movieWriteAttemptsCount;                 //@synthesize movieWriteAttemptsCount=_movieWriteAttemptsCount - In the implementation block
@property (assign,nonatomic) long long failedStateReadAttemptsCount;              //@synthesize failedStateReadAttemptsCount=_failedStateReadAttemptsCount - In the implementation block
+(id)secondaryStateWithContentsOfFile:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setStopTime:(NSDate *)arg1 ;
-(NSDate *)stopTime;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(void)setStopReasons:(long long)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(void)notifyWillAttemptToWriteMovie;
-(void)setFailedStateReadAttemptsCount:(long long)arg1 ;
-(long long)failedStateReadAttemptsCount;
-(NSDate *)lastMovieWriteAttemptTime;
-(long long)movieWriteAttemptsCount;
@end

