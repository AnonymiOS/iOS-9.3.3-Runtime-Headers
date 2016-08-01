/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPZoneTrackerDelegate;
@class XPCClient, NSString;

@interface WPZoneTracker : NSObject <XPCClientDelegate> {

	BOOL _wantEntry;
	BOOL _wantExit;
	long long _state;
	XPCClient* _connection;
	id<WPZoneTrackerDelegate> _delegate;

}

@property (assign) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<WPZoneTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) BOOL wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WPZoneTrackerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<WPZoneTrackerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(void)changeState:(long long)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)setWantEntry:(BOOL)arg1 ;
-(void)setWantExit:(BOOL)arg1 ;
-(BOOL)wantEntry;
-(BOOL)wantExit;
-(void)registerZonesFailed:(id)arg1 ;
-(void)zonesEntered:(id)arg1 ;
-(void)zonesExited:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)getCurrentTrackedZones;
-(void)connectionInterrupted;
-(void)unregisterAllZoneChanges;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

