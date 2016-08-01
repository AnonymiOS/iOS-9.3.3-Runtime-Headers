/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSString;

@interface NSUnitFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatter;
	long long _unitStyle;
	UAMeasureFormatRef _formatter;
	UPluralRulesRef _prules;
	BOOL _modified;
	NSString* _localeID;

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)stringForValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4 ;
-(id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(void)finalize;
@end

