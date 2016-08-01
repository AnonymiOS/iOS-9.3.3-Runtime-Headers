/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATStatusObserverConnectionProtocol.h>
#import <ATFoundation/ATStatusMonitorObserver.h>

@class NSXPCConnection, NSString;

@interface ATStatusObserverConnection : NSObject <ATStatusObserverConnectionProtocol, ATStatusMonitorObserver> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
@end
