/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BatteryCenter/BatteryCenter-Structs.h>
@class NSMutableDictionary, NSArray, NSMapTable, NSObject, NSString;

@interface BCBatteryDeviceController : NSObject {

	NSMutableDictionary* _devicesByIdentifier;
	NSArray* _sortedDevices;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesLimitedPowerRunLoopSource;
	NSMapTable* _handlersByIdentifier;
	BOOL _chargeChangeHandlingDisabled;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * connectedDevicesDidChangeNotificationName; 
@property (nonatomic,readonly) NSArray * connectedDevices; 
@property (nonatomic,readonly) NSArray * connectedDevicesIncludingMissingParts; 
+(id)sharedInstance;
+(id)_internalBatteryDeviceGlyph;
+(id)_glyphForFirstPartyBatteryDeviceWithBaseIdentifier:(id)arg1 parts:(unsigned long long)arg2 ;
+(id)_glyphsForFirstPartyBatteryDevice:(id)arg1 ;
+(id)_glyphsForBatteryDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)connectedDevices;
-(void)_handlePSChange;
-(void)_reenableChargeChangeHandling;
-(void)connectedDevicesWithResult:(/*^block*/id)arg1 ;
-(id)_queue_connectedDevices;
-(id)_orderedFirstPartyAccessoryIdentifiers;
-(void)connectedDevicesIncludingMissingPartsWithResult:(/*^block*/id)arg1 ;
-(id)_queue_connectedDevicesIncludingMissingParts;
-(void)_queue_addDeviceChangeHandler:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1 ;
-(void)_queue_invalidateConnectedDevices;
-(void)_queue_handlePSChange;
-(void)_queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 ;
-(BOOL)_isDevicePartOfPairWithBaseIdentifier:(id)arg1 matchIdentifier:(id)arg2 andPart:(unsigned long long)arg3 ;
-(BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1 ;
-(long long)_vendorFromPowerSourceDescription:(id)arg1 ;
-(long long)_productIdentifierFromPowerSourceDescription:(id)arg1 ;
-(id)_baseIdentifierFromPowerSourceDescription:(id)arg1 ;
-(unsigned long long)_partsFromPowerSourceDescription:(id)arg1 ;
-(id)_matchIdentifierFromPowerSourceDescription:(id)arg1 ;
-(id)_identifierFromPowerSourceDescription:(id)arg1 ;
-(long long)_powerSourceStateFromPowerSourceDescription:(id)arg1 ;
-(id)_queue_batteryDeviceWithIdentifier:(id)arg1 ;
-(void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_displayNameForBaseIdentifier:(id)arg1 andParts:(unsigned long long)arg2 fromPowerSourceDescription:(id)arg3 ;
-(id)_groupNameForBaseIdentifier:(id)arg1 fromPowerSourceDescription:(id)arg2 ;
-(long long)_transportTypeFromPowerSourceDescription:(id)arg1 ;
-(int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(long long)_lowBatteryLevelForBaseIdentifier:(id)arg1 fromPowerSourceDescription:(id)arg2 ;
-(BOOL)_displayIsChargingFromPowerSourceDescription:(id)arg1 ;
-(void)_queue_callHandlersForDevice:(id)arg1 ;
-(BOOL)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long*)arg2 ;
-(id)_deviceByCoalescingDevice:(id)arg1 ;
-(void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1 ;
-(NSString *)connectedDevicesDidChangeNotificationName;
-(id)_remainingPartsOfDeviceWithPart:(id)arg1 ;
-(NSArray *)connectedDevicesIncludingMissingParts;
-(void)addDeviceChangeHandler:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)removeDeviceChangeHandlerWithIdentifier:(id)arg1 ;
-(CGSize)_largestBatteryDeviceGlyphSize;
-(void)_incrementPercentChargeForConnectedDevices:(BOOL)arg1 ;
-(void)_postDidChangeNotification;
@end

