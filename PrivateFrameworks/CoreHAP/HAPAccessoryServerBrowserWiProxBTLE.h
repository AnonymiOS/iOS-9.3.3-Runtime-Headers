/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WPHomeKitDelegate.h>

@protocol OS_dispatch_queue, HAPAccessoryServerBrowserWiProxBTLEDelegate;
@class NSObject, WPHomeKit, NSMutableSet, NSString;

@interface HAPAccessoryServerBrowserWiProxBTLE : NSObject <WPHomeKitDelegate> {

	BOOL _scanInBackground;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HAPAccessoryServerBrowserWiProxBTLEDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	WPHomeKit* _wpHomeKit;
	long long _currentScanState;
	NSMutableSet* _trackedIdentifiers;
	NSMutableSet* _trackedPeripherals;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) WPHomeKit * wpHomeKit;                                              //@synthesize wpHomeKit=_wpHomeKit - In the implementation block
@property (assign,nonatomic) long long currentScanState;                                           //@synthesize currentScanState=_currentScanState - In the implementation block
@property (assign,nonatomic) BOOL scanInBackground;                                                //@synthesize scanInBackground=_scanInBackground - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedIdentifiers;                                  //@synthesize trackedIdentifiers=_trackedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedPeripherals;                                  //@synthesize trackedPeripherals=_trackedPeripherals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HAPAccessoryServerBrowserWiProxBTLEDelegate>)delegate;
-(void)startBrowsingForHAPBLEAccessories;
-(void)stopBrowsingForHAPBLEAccessories;
-(void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)probeReachabilityForTrackedAccessories;
-(void)_startBrowsingForHAPBLEAccessories;
-(void)setCurrentScanState:(long long)arg1 ;
-(WPHomeKit *)wpHomeKit;
-(void)_stopBrowsingForHAPBLEAccessories;
-(NSMutableSet *)trackedIdentifiers;
-(BOOL)scanInBackground;
-(void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(BOOL)arg2 ;
-(long long)currentScanState;
-(void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)_removeTrackedPeripheral:(id)arg1 ;
-(void)_probeReachabilityForTrackedAccessories;
-(NSMutableSet *)trackedPeripherals;
-(void)_reportHAPPeripheral:(id)arg1 ;
-(void)setScanInBackground:(BOOL)arg1 ;
-(id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 ;
-(id)_getTrackedPeripheralWithIdentifier:(id)arg1 ;
-(void)homeKitDidUpdateState:(id)arg1 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)homeKitStartedScanning:(id)arg1 ;
-(void)homeKitStoppedScanning:(id)arg1 ;
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)homeKit:(id)arg1 allowDuplicate:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

