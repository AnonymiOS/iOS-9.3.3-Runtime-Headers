/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
+(id)defaultModel;
-(id)init;
-(id)earliestNextActivityDate;
-(id)nextActivityDateByPersonID;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(void)clearAllNextActivityDates;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
@end

