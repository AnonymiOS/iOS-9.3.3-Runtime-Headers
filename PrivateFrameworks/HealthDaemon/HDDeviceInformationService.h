/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@protocol OS_dispatch_queue;
@class HDHealthServicePropertyManager, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray, NSString;

@interface HDDeviceInformationService : HDHealthService {

	BOOL _deviceInformationHasBeenLoaded;
	HDHealthServicePropertyManager* _propertyManager;
	NSMutableDictionary* _characteristics;
	NSMutableDictionary* _propertyValues;
	NSMutableSet* _propertiesLeftToFetch;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingDeviceInformationLoadedBlocks;

}

@property (readonly) NSString * manufacturerName; 
@property (readonly) NSString * modelNumber; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * hardwareRevision; 
@property (readonly) NSString * firmwareRevision; 
@property (readonly) NSString * softwareRevision; 
@property (assign,nonatomic,__weak) HDHealthServicePropertyManager * propertyManager;              //@synthesize propertyManager=_propertyManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * characteristics;                                //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyValues;                                 //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,retain) NSMutableSet * propertiesLeftToFetch;                                 //@synthesize propertiesLeftToFetch=_propertiesLeftToFetch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL deviceInformationHasBeenLoaded;                                  //@synthesize deviceInformationHasBeenLoaded=_deviceInformationHasBeenLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDeviceInformationLoadedBlocks;                //@synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
+(id)implementedProperties;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)characteristics;
-(void)setCharacteristics:(NSMutableDictionary *)arg1 ;
-(NSString *)serialNumber;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_startDeviceInformationLoadingTimeoutTimer;
-(id)_propertyValueForPropertyName:(id)arg1 ;
-(void)_queue_setDeviceInformationHasBeenLoaded;
-(void)_queue_readProperty:(id)arg1 ;
-(void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(id)_propertyValueForCharacteristic:(id)arg1 ;
-(id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3 ;
-(NSString *)manufacturerName;
-(NSString *)modelNumber;
-(NSString *)hardwareRevision;
-(NSString *)firmwareRevision;
-(NSString *)softwareRevision;
-(void)performWhenDeviceInformationHasBeenLoaded:(/*^block*/id)arg1 ;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(HDHealthServicePropertyManager *)propertyManager;
-(void)setPropertyManager:(HDHealthServicePropertyManager *)arg1 ;
-(NSMutableDictionary *)propertyValues;
-(void)setPropertyValues:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)propertiesLeftToFetch;
-(void)setPropertiesLeftToFetch:(NSMutableSet *)arg1 ;
-(BOOL)deviceInformationHasBeenLoaded;
-(void)setDeviceInformationHasBeenLoaded:(BOOL)arg1 ;
-(NSMutableArray *)pendingDeviceInformationLoadedBlocks;
-(void)setPendingDeviceInformationLoadedBlocks:(NSMutableArray *)arg1 ;
@end

