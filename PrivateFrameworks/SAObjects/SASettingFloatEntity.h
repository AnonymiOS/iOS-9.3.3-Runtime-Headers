/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) float value; 
+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)floatEntityWithValue:(float)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)initWithValue:(float)arg1 ;
-(id)groupIdentifier;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(NSNumber *)previousValue;
-(id)encodedClassName;
@end

