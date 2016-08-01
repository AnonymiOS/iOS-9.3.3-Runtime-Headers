/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand

@property (nonatomic,copy) NSNumber * adjustmentInMilliseconds; 
+(id)skipTimeInterval;
+(id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)adjustmentInMilliseconds;
-(void)setAdjustmentInMilliseconds:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

