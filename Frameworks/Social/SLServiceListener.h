/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class Protocol, NSXPCInterface, NSXPCListener, NSString, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {

	Class _sessionClass;
	Protocol* _serviceProtocol;
	NSXPCInterface* _clientInterface;
	NSXPCListener* _listener;
	NSString* _persistentStoreName;
	NSString* _managedObjectModelPath;
	NSArray* _allowedEntitlements;
	NSString* _serviceName;

}

@property (retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSXPCInterface * clientInterface;                //@synthesize clientInterface=_clientInterface - In the implementation block
@property (retain) NSString * persistentStoreName;                  //@synthesize persistentStoreName=_persistentStoreName - In the implementation block
@property (retain) NSString * managedObjectModelPath;               //@synthesize managedObjectModelPath=_managedObjectModelPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(NSString *)persistentStoreName;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)_verifyAuthorizationForConnection:(id)arg1 ;
-(id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2 ;
-(void)restrictToClientsWithEntitlements:(id)arg1 ;
-(void)beginAcceptingConnections;
-(void)setPersistentStoreName:(NSString *)arg1 ;
-(NSString *)managedObjectModelPath;
-(void)setManagedObjectModelPath:(NSString *)arg1 ;
-(void)setClientInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)clientInterface;
-(void)setServiceName:(NSString *)arg1 ;
@end

