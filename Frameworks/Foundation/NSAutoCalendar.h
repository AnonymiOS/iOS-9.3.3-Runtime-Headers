/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, NSLocale, NSTimeZone, NSDate;

@interface NSAutoCalendar : NSCalendar {

	NSCalendar* cal;
	NSLocale* changedLocale;
	NSTimeZone* changedTimeZone;
	unsigned long long changedFirstWeekday;
	unsigned long long changedMinimumDaysinFirstWeek;
	NSDate* changedGregorianStartDate;

}
+(BOOL)supportsSecureCoding;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_init;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(void)_update:(id)arg1 ;
-(unsigned long long)firstWeekday;
-(unsigned long long)minimumDaysInFirstWeek;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
@end

