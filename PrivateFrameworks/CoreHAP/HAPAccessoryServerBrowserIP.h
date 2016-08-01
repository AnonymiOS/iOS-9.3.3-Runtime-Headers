/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HAPTimerDelegate.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject, HAPTimer, NSString;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPTimerDelegate> {

	BonjourBrowserRef _bonjourBrowser;
	NSMutableSet* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _pendingBonjourEvents;
	HAPTimer* _bonjourEventTimer;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServers;                          //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingBonjourEvents;                                //@synthesize pendingBonjourEvents=_pendingBonjourEvents - In the implementation block
@property (nonatomic,retain) HAPTimer * bonjourEventTimer;                                       //@synthesize bonjourEventTimer=_bonjourEventTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)processPendingBonjourRemoveEvents:(id)arg1 ;
-(void)_handleBonjourBrowserEvent:(unsigned)arg1 eventInfo:(id)arg2 ;
-(int)_initializeAndStartBonjourBrowser;
-(void)_processPendingBonjourEvent:(id)arg1 ;
-(int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2 ;
-(void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1 ;
-(int)_server:(id*)arg1 forBonjourDevice:(id)arg2 ;
-(void)_pendBonjourRemoveEvent:(id)arg1 ;
-(void)_handleBonjourRemoveWithEventInfo:(id)arg1 ;
-(void)_invalidateAccessoryServers:(BOOL)arg1 ;
-(void)_setReachability:(BOOL)arg1 forServer:(id)arg2 ;
-(NSMutableSet *)pendingBonjourEvents;
-(void)_pendBonjourEvent:(id)arg1 ;
-(HAPTimer *)bonjourEventTimer;
-(void)_timerDidExpire:(id)arg1 ;
-(void)setPendingBonjourEvents:(NSMutableSet *)arg1 ;
-(void)setBonjourEventTimer:(HAPTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(NSMutableSet *)discoveredAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)setDiscoveredAccessoryServers:(NSMutableSet *)arg1 ;
@end

