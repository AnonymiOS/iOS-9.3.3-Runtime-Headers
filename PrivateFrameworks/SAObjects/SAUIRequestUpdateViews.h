/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timeInSeconds; 
@property (nonatomic,copy) NSArray * viewIds; 
+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)timeInSeconds;
-(void)setTimeInSeconds:(NSNumber *)arg1 ;
-(NSArray *)viewIds;
-(void)setViewIds:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

