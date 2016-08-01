/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSString;

@interface ICSTimeZone : ICSComponent {

	id _systemTimeZone;

}

@property (nonatomic,retain) NSString * tzid; 
+(long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)quickTimeZoneNames;
+(id)slowTimeZoneNames;
+(BOOL)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)timeZoneWithSystemTimeZoneName:(id)arg1 ;
+(id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3 ;
+(id)name;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)getNSTimeZone:(id)arg1 ;
-(id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2 ;
-(id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2 ;
-(id)initWithSystemTimeZone:(id)arg1 ;
-(void)setTzid:(NSString *)arg1 ;
-(id)systemTimeZoneForDate:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(NSString *)tzid;
@end

