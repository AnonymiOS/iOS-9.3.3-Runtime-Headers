/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)delayedActionCommand;
+(id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end
