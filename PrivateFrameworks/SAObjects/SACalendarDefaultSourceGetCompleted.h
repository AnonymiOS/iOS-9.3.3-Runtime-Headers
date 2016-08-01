/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SACalendarSource * aceCalendarSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)defaultSourceGetCompleted;
+(id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1 ;
-(id)groupIdentifier;
-(id)initWithAceCalendarSource:(id)arg1 ;
-(void)setAceCalendarSource:(SACalendarSource *)arg1 ;
-(SACalendarSource *)aceCalendarSource;
-(id)encodedClassName;
@end

