/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUsageNotificationServerExportedInterface.h>

@class NSXPCListener, NSMutableSet, NSString;

@interface PKUsageNotificationServer : PDXPCService <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {

	NSXPCListener* _listener;
	NSMutableSet* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)initializeUsageNotificationServer;
-(void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2 ;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
@end

