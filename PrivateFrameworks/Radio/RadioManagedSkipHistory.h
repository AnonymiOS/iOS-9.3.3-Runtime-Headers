/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSArray;

@interface RadioManagedSkipHistory : NSManagedObject

@property (nonatomic,copy) NSString * skipIdentifier; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
-(long long)stationID;
-(NSString *)stationHash;
-(NSString *)skipIdentifier;
-(void)setSkipIdentifier:(NSString *)arg1 ;
-(void)setSkipTimestamps:(NSArray *)arg1 ;
-(NSArray *)skipTimestamps;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
@end

