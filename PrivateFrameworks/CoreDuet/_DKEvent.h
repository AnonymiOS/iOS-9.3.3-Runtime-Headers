/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>

@class NSDate, _DKEventStream, _DKObject, NSTimeZone, NSString;

@interface _DKEvent : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue> {

	NSDate* _startDate;
	NSDate* _endDate;
	_DKEventStream* _stream;
	_DKObject* _value;
	NSTimeZone* _timeZone;
	double _confidence;

}

@property (retain) _DKEventStream * stream;                         //@synthesize stream=_stream - In the implementation block
@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) _DKObject * value;                               //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(_DKObject *)value;
-(void)setValue:(_DKObject *)arg1 ;
-(NSTimeZone *)timeZone;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(id)primaryValue;
-(void)setStream:(_DKEventStream *)arg1 ;
-(id)initWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)compareValue:(id)arg1 ;
-(_DKEventStream *)stream;
@end

