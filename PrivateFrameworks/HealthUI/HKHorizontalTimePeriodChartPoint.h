/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint> {

	NSDate* _xStart;
	NSDate* _xEnd;
	NSNumber* _yValue;
	id _userInfo;

}

@property (nonatomic,retain) NSDate * xStart;                       //@synthesize xStart=_xStart - In the implementation block
@property (nonatomic,retain) NSDate * xEnd;                         //@synthesize xEnd=_xEnd - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)xValue;
-(NSNumber *)yValue;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)minYValue;
-(id)maxYValue;
-(void)setYValue:(NSNumber *)arg1 ;
-(NSDate *)xStart;
-(NSDate *)xEnd;
-(void)setXStart:(NSDate *)arg1 ;
-(void)setXEnd:(NSDate *)arg1 ;
@end

