/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTBatteryPolicy : _VTStatePolicy {

	BOOL _allowOnBattery;
	BOOL _allowOnCharger;
	unsigned char _batteryState;
	BOOL _locked;
	int _notificationToken;
	int _powerSourceNotificationToken;

}
-(void)dealloc;
-(void)reload;
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForSettingsChange;
-(void)_unregisterForBatteryStatusChanges;
-(void)_unregisterForSettingsChange;
-(void)_registerForBatteryStatusChanges;
@end

