/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDateTimeUTCValue, NSArray, NSString, ICSTrigger, NSData, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent

@property (assign,nonatomic) int action; 
@property (nonatomic,retain) ICSDateTimeUTCValue * acknowledged; 
@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (retain) NSString * description; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * relatedTo; 
@property (nonatomic,retain) NSData * bookmark; 
@property (nonatomic,retain) NSString * x_wr_alarmuid; 
@property (nonatomic,retain) NSString * x_apple_proximity; 
@property (assign,nonatomic) BOOL x_apple_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_local_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_travel_default_alarm; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
+(id)name;
+(int)actionFromICSString:(id)arg1 ;
+(id)ICSStringFromAction:(int)arg1 ;
+(id)parseableDocumentFromICS:(id)arg1 ;
+(id)createNoneAlarm;
-(void)fixAlarm;
-(int)action;
-(void)setAction:(int)arg1 ;
-(BOOL)isNoneAlarm;
-(void)setX_apple_travel_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_travel_default_alarm;
-(void)setX_apple_local_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_local_default_alarm;
-(NSString *)x_wr_alarmuid;
-(BOOL)x_apple_default_alarm;
-(NSString *)relatedTo;
-(void)setX_wr_alarmuid:(NSString *)arg1 ;
-(void)setX_apple_proximity:(NSString *)arg1 ;
-(void)setX_apple_default_alarm:(BOOL)arg1 ;
-(void)setAcknowledged:(ICSDateTimeUTCValue *)arg1 ;
-(void)setRelatedTo:(NSString *)arg1 ;
-(NSString *)x_apple_proximity;
-(ICSDateTimeUTCValue *)acknowledged;
-(void)setBookmark:(NSData *)arg1 ;
-(NSData *)bookmark;
@end

