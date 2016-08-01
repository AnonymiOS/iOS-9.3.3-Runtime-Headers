/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSlotClientNotification.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSArray, NSObject;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _endpoints;
	NSArray* _slotNames;
	NSObject*<OS_dispatch_queue> _slotNamesQueue;

}

@property (readonly) NSArray * slotNames; 
+(id)defaultManager;
-(id)init;
-(void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSArray *)slotNames;
-(void)getSlotWithName:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

