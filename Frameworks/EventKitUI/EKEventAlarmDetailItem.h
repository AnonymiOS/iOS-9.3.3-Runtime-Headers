/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, EKAlarmsViewModel;

@interface EKEventAlarmDetailItem : EKEventDetailItem {

	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
+(id)_textLabelForIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(EKAlarmsViewModel *)alarmsViewModel;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
-(void)_updateAlarms;
-(BOOL)_alarmsAreEditable;
-(BOOL)_alarmsAreCreatable;
@end
