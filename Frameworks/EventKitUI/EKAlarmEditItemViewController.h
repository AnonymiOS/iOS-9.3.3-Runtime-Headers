/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/CalendarEventAlarmTableDelegate.h>

@class CalendarEventAlarmTable, EKUIAlarm, EKCalendar, NSString;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {

	CalendarEventAlarmTable* _table;
	BOOL _immediateAlarmCreation;
	BOOL _allDay;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	BOOL _shouldShowLeaveNowOption;
	BOOL _eventHasTravelTime;
	EKUIAlarm* _alarm;
	EKUIAlarm* _previousAlarm;
	EKCalendar* _calendar;
	unsigned long long _alarmIndex;

}

@property (nonatomic,retain) EKUIAlarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) EKUIAlarm * previousAlarm;                                   //@synthesize previousAlarm=_previousAlarm - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long alarmIndex;                               //@synthesize alarmIndex=_alarmIndex - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;              //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeaveNowOption;                               //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) BOOL eventHasTravelTime;                                     //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (assign,nonatomic) long long presetIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)tableHeaderView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(BOOL)allDay;
-(void)setAllDay:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setAlarmIndex:(unsigned long long)arg1 ;
-(void)setEventHasTravelTime:(BOOL)arg1 ;
-(unsigned long long)alarmIndex;
-(void)setShouldShowLeaveNowOption:(BOOL)arg1 ;
-(void)setAlarm:(EKUIAlarm *)arg1 ;
-(void)setPreviousAlarm:(EKUIAlarm *)arg1 ;
-(EKUIAlarm *)alarm;
-(EKUIAlarm *)previousAlarm;
-(void)_storeChanged:(id)arg1 ;
-(BOOL)eventHasTravelTime;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(BOOL)customSelected;
-(void)alarmTableDidChangeAlarm:(id)arg1 ;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(long long)arg1 ;
-(long long)presetIdentifier;
-(void)setCustomString:(id)arg1 ;
-(BOOL)shouldShowLeaveNowOption;
@end

