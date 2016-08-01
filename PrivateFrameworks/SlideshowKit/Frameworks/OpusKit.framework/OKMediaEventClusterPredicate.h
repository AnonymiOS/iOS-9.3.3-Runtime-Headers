/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString, NSDictionary;

@interface OKMediaEventClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;
	NSString* _countryName;
	NSDictionary* _calendarEventsDictionary;

}

@property (readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (retain) NSString * countryName;                               //@synthesize countryName=_countryName - In the implementation block
@property (retain) NSDictionary * calendarEventsDictionary;              //@synthesize calendarEventsDictionary=_calendarEventsDictionary - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(void)setCalendarEventsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)calendarEventsDictionary;
-(id)eventNameForDate:(id)arg1 ;
-(double)maximumDistanceBetweenLocations:(id)arg1 ;
-(double)floatingAverageTimeDeltaForItem:(id)arg1 inArray:(id)arg2 ;
-(id)barycenterOfLocations:(id)arg1 ;
-(double)floatingAverageDistanceDeltaForItem:(id)arg1 inArray:(id)arg2 ;
-(id)clusterDateStringForPeriodFrom:(id)arg1 to:(id)arg2 ;
-(id)clusterLocationStringForLocations:(id)arg1 ;
@end

