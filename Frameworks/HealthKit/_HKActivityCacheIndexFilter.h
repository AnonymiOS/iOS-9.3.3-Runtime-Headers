/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKActivityCacheIndexFilter : _HKFilter {

	long long _cacheIndex;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) long long cacheIndex;                         //@synthesize cacheIndex=_cacheIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 activityCacheIndex:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)cacheIndex;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)operatorType;
@end

