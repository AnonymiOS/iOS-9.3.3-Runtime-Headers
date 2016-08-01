/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSLock, CTCarrier, NSString, NSDictionary;

@interface CTTelephonyNetworkInfo : NSObject {

	queue* _queue;
	_CTServerConnection* server_connection;
	NSLock* server_lock;
	/*^block*/id _subscriberCellularProviderDidUpdateNotifier;
	BOOL _monitoringCellId;
	CTCarrier* _subscriberCellularProvider;
	NSString* _cachedCurrentRadioAccessTechnology;
	NSDictionary* _cachedSignalStrength;
	NSString* _cachedCellId;

}

@property (retain) CTCarrier * subscriberCellularProvider;                                  //@synthesize subscriberCellularProvider=_subscriberCellularProvider - In the implementation block
@property (nonatomic,copy) id subscriberCellularProviderDidUpdateNotifier; 
@property (nonatomic,retain,readonly) NSString * currentRadioAccessTechnology; 
@property (nonatomic,retain) NSString * cellId; 
@property (retain) NSString * cachedCurrentRadioAccessTechnology;                           //@synthesize cachedCurrentRadioAccessTechnology=_cachedCurrentRadioAccessTechnology - In the implementation block
@property (retain) NSDictionary * cachedSignalStrength;                                     //@synthesize cachedSignalStrength=_cachedSignalStrength - In the implementation block
@property (retain) NSString * cachedCellId;                                                 //@synthesize cachedCellId=_cachedCellId - In the implementation block
@property (assign) BOOL monitoringCellId;                                                   //@synthesize monitoringCellId=_monitoringCellId - In the implementation block
-(void)setMonitoringCellId:(BOOL)arg1 ;
-(void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1 ;
-(BOOL)setUpServerConnection;
-(BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL*)arg1 ;
-(void)queryDataMode;
-(void)queryCTSignalStrengthNotification;
-(void)cleanUpServerConnection;
-(void)setSubscriberCellularProvider:(CTCarrier *)arg1 ;
-(void)setCachedCurrentRadioAccessTechnology:(NSString *)arg1 ;
-(void)setCachedSignalStrength:(NSDictionary *)arg1 ;
-(BOOL)getCarrierName:(id)arg1 withCTError:(SCD_Struct_CT0*)arg2 ;
-(BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(SCD_Struct_CT0*)arg3 ;
-(BOOL)getMobileNetworkCode:(id)arg1 withCTError:(SCD_Struct_CT0*)arg2 ;
-(BOOL)getAllowsVOIP:(BOOL*)arg1 withCTError:(SCD_Struct_CT0*)arg2 ;
-(void)postCellularProviderUpdatesIfNecessary;
-(void)updateRadioAccessTechnology:(id)arg1 ;
-(void)updateSignalStrength:(id)arg1 ;
-(void)handleCTSignalStrengthNotification:(id)arg1 ;
-(void)handleCTRegistrationCellChangedNotification:(id)arg1 ;
-(id)createSignalStrengthDictWithBars:(id)arg1 ;
-(void)setCellId:(NSString *)arg1 ;
-(NSString *)cachedCurrentRadioAccessTechnology;
-(void)setCachedCellId:(NSString *)arg1 ;
-(NSDictionary *)cachedSignalStrength;
-(BOOL)monitoringCellId;
-(void)queryCellId;
-(NSString *)cachedCellId;
-(id)subscriberCellularProviderDidUpdateNotifier;
-(void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3 ;
-(NSString *)cellId;
-(id)radioAccessTechnology;
-(void)dealloc;
-(id)init;
-(NSString *)currentRadioAccessTechnology;
-(id)signalStrength;
-(CTCarrier *)subscriberCellularProvider;
@end

